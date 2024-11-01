#include <bits/stdc++.h>

using namespace std;

vector<string> prol = {"S", "A", "A", "B", "B", "C", "C"};
vector<string> pror = {"A", "Bb", "Cd", "aB", "@", "Cc", "@"};
vector<string> prod = {"S->A", "A->Bb", "A->Cd", "B->aB", "B->@", "C->Cc", "C->@"};
vector<string> first = {"abcd", "ab", "cd", "a@", "@", "c@", "@"};
vector<string> follow = {"$", "$", "$", "a$", "b$", "c$", "d$"};
vector<vector<string>> table(5, vector<string>(6, " "));

int numr(char c) {
    if (c == 'S') return 0;
    else if (c == 'A') return 1;
    else if (c == 'B') return 2;
    else if (c == 'C') return 3;
    else if (c == 'a') return 0;
    else if (c == 'b') return 1;
    else if (c == 'c') return 2;
    else if (c == 'd') return 3;
    else if (c == '$') return 4;
    return -1;
}

int main() {
    int i, j, k;

    cout << "The grammar is:\n";
    for (const auto& p : prod) {
        cout << p << endl;
    }

    cout << "\nPredictive parsing table is:\n";

    for (i = 0; i < 7; i++) {
        k = first[i].length();
        for (j = 0; j < k; j++) {
            if (first[i][j] != '@') {
                table[numr(prol[i][0]) + 1][numr(first[i][j]) + 1] = prod[i];
            }
        }
    }

    for (i = 0; i < 7; i++) {
        if (pror[i].length() == 1 && pror[i][0] == '@') {
            k = follow[i].length();
            for (j = 0; j < k; j++) {
                table[numr(prol[i][0]) + 1][numr(follow[i][j]) + 1] = prod[i];
            }
        }
    }

    table[0][0] = " ";
    table[0][1] = "a";
    table[0][2] = "b";
    table[0][3] = "c";
    table[0][4] = "d";
    table[0][5] = "$";
    table[1][0] = "S";
    table[2][0] = "A";
    table[3][0] = "B";   
    table[4][0] = "C";

    cout << "\n--------------------------------------------------------\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << left << setw(10) << table[i][j];
            if (j == 5)
                cout << "\n--------------------------------------------------------\n";
        }
    }

}   