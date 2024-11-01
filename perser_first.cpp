#include <bits/stdc++.h>
using namespace std;

int nop; 
vector<string> production; 

void result(vector<char>& res, char val) {
    if (find(res.begin(), res.end(), val) == res.end()) {
        res.push_back(val);
    }
}

void FIRST(vector<char>& res, char c) {
    if (!isupper(c)) {
        result(res, c);
        return;
    }
    for (int i = 0; i < nop; i++) {
        if (production[i][0] == c) {
            if (production[i][2] == '$') {
                result(res, '$');
            } else {
                int j = 2;
                while (j < production[i].size()) {
                    vector<char> subres;
                    FIRST(subres, production[i][j]);

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

int main() {
    cout << "Number of production rules: ";
    cin >> nop;
    production.resize(nop);

    for (int i = 0; i < nop; i++) {
        cout << "Enter production Number " << i + 1 << ": ";
        cin >> production[i];
    }

    char choice;
    do {
        char c;
        vector<char> res1;

        cout << "\nFind the FIRST of: ";
        cin >> c;
        FIRST(res1, c);

        cout << "\nFIRST(" << c << ") = { ";
        for (char ch : res1) {
            cout << ch << " ";
        }
        cout << "}\n";

        cout << "Press 'y' to continue: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
