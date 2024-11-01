#include <bits/stdc++.h>
using namespace std;

int nop, m = 0;
vector<string> prod;
vector<char> res;

void FOLLOW(char c);
void first(char c);
void result(char c);

void FOLLOW(char c) {
    if (prod[0][0] == c)
        result('$');
    for (int i = 0; i < nop; ++i) {
        for (int j = 2; j < prod[i].length(); ++j) {
            if (prod[i][j] == c) {
                if (prod[i][j + 1] != '\0')
                    first(prod[i][j + 1]);
                if (prod[i][j + 1] == '\0' && c != prod[i][0])
                    FOLLOW(prod[i][0]);
            }
        }
    }
}

void first(char c) {
    if (!isupper(c)) {
        result(c);
        return;
    }
    for (int k = 0; k < nop; ++k) {
        if (prod[k][0] == c) {
            if (prod[k][2] == '$')
                FOLLOW(prod[k][0]);
            else if (islower(prod[k][2]))
                result(prod[k][2]);
            else
                first(prod[k][2]);
        }
    }
}

void result(char c) {
    if (find(res.begin(), res.end(), c) == res.end()) {
        res.push_back(c);
        m++;
    }
}

int main() {
    int choice;
    char c;
    cout << "Enter the no.of production rules: ";
    cin >> nop;
    prod.resize(nop);
    
    cout << "Enter the production rules:" << endl;
    for (int i = 0; i < nop; ++i) {
        cin >> prod[i];
    }
    
    do {
        m = 0;
        res.clear();
        cout << "Find FOLLOW of -->";
        cin >> c;
        FOLLOW(c);
        cout << "FOLLOW(" << c << ") = {";
        for (int i = 0; i < m; ++i)
            cout << res[i] << ' ';
        cout << "}" << endl;
        cout << "Press 1 to continue: ";
        cin >> choice;
    } while (choice == 1);
    
    return 0;
}
