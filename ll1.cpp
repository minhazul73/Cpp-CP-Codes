#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>

using namespace std;

// LL(1) Parsing Table
unordered_map<char, unordered_map<char, string>> parsingTable = {
    {'E', {{'+', "TH"}, {'*', "FU"}, {'(', "TH"}, {'i', "FU"}}},
    {'H', {{'+', "+TH"}, {'$', ""}}},
    {'T', {{'+', ""}, {'*', ""}, {'(', "FU"}, {'i', "FU"}}},
    {'U', {{'+', ""}, {'*', "*FU"}, {'(', ""}}},
    {'F', {{'(', "(E)"}, {'i', "i"}}}
};

void error() {
    cout << "Syntax Error" << endl;
}

int main() {
    string input;
    cout << "Enter a String (add $ at the end): ";
    cin >> input;
    input += '$';

    stack<char> st;
    st.push('$');
    st.push('E');

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