#include <bits/stdc++.h>
using namespace std;

vector<string> production;
unordered_map<char, unordered_set<char>> firstSets;
unordered_map<char, unordered_set<char>> followSets;
unordered_map<char, unordered_map<char, string>> parsingTable;

void result(unordered_set<char>& res, char val) {
    res.insert(val);
}

void computeFIRST(unordered_set<char>& res, char c) {
    if (!isupper(c)) {
        result(res, c);
        return;
    }
    for (const auto& prod : production) {
        if (prod[0] == c) {
            if (prod[2] == '$') {
                result(res, '$');
            } else {
                size_t j = 2;
                while (j < prod.size()) {
                    unordered_set<char> subres;
                    computeFIRST(subres, prod[j]);

                    bool hasEps = false;
                    for (char ch : subres) {
                        result(res, ch);
                        if (ch == '$') {
                            hasEps = true;
                        }
                    }

                    if (!hasEps) {
                        break;
                    }

                    j++;
                }
            }
        }
    }
}

void computeFOLLOW(char c) {
    if (c == production[0][0]) {
        followSets[c].insert('$');
    }
    for (const auto& prod : production) {
        for (size_t j = 2; j < prod.length(); ++j) {
            if (prod[j] == c) {
                if (j + 1 < prod.length()) {
                    unordered_set<char> firstNext;
                    computeFIRST(firstNext, prod[j + 1]);
                    followSets[c].insert(firstNext.begin(), firstNext.end());
                    followSets[c].erase('$');
                    if (firstNext.find('$') != firstNext.end() || j + 1 == prod.length() - 1) {
                        followSets[c].insert(followSets[prod[0]].begin(), followSets[prod[0]].end());
                    }
                } else {
                    followSets[c].insert(followSets[prod[0]].begin(), followSets[prod[0]].end());
                }
            }
        }
    }
}

void generateParsingTable() {
    for (const auto& prod : production) {
        unordered_set<char> firstSet;
        computeFIRST(firstSet, prod[2]);
        for (char c : firstSet) {
            if (c != '$') {
                parsingTable[prod[0]][c] = prod;
            }
        }
        if (firstSet.find('$') != firstSet.end()) {
            for (char c : followSets[prod[0]]) {
                parsingTable[prod[0]][c] = prod;
            }
        }
    }
}

void error() {
    cout << "Syntax Error" << endl;
}

int main() {
    int nop;
    cout << "Number of production rules: ";
    cin >> nop;
    production.resize(nop);

    cout << "Enter the production rules:\n";
    for (int i = 0; i < nop; ++i) {
        cin >> production[i];
    }

    for (const auto& prod : production) {
        computeFIRST(firstSets[prod[0]], prod[0]);
    }

    for (const auto& prod : production) {
        computeFOLLOW(prod[0]);
    }

    generateParsingTable();

    string input;
    cout << "Enter a String (add $ at the end): ";
    cin >> input;
    input += '$';

    stack<char> st;
    st.push('$');
    st.push(production[0][0]);

    cout << "Stack\tInput\tOutput\n";

    size_t idx = 0;
    while (!st.empty()) {
        char topStack = st.top();
        char currentInput = input[idx];

        if (topStack == currentInput) {
            st.pop();
            cout << topStack << "\t" << input.substr(idx) << "\tPOP\n";
            idx++;
        } else if (!isupper(topStack)) {
            error();
            break;
        } else {
            if (parsingTable[topStack].find(currentInput) != parsingTable[topStack].end()) {
                string production = parsingTable[topStack][currentInput];
                st.pop();

                if (production != "") {
                    for (int i = production.length() - 1; i >= 0; i--) {
                        st.push(production[i]);
                    }
                }

                cout << topStack << "\t" << input.substr(idx) << "\t" << topStack << "->" << production << endl;
            } else {
                error();
                break;
            }
        }
    }

    if (st.empty() && idx == input.length()) {
        cout << "\nGiven String is accepted" << endl;
    } else {
        cout << "\nGiven String is not accepted" << endl;
    }

    return 0;
}
