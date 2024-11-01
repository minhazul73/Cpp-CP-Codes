#include <bits/stdc++.h>
using namespace std;

const char prol[7][10] = {"S", "A", "A", "B", "B", "C", "C"};
const char pror[7][10] = {"A", "Bb", "Cd", "aB", "@", "Cc", "@"};
const char prod[7][10] = {"S->A", "A->Bb", "A->Cd", "B->aB", "B->@", "C->Cc", "C->@"};
const char first[7][10] = {"abcd", "ab", "cd", "a@", "@", "c@", "@"};
const char follow[7][10] = {"$", "$", "$", "a$", "b$", "c$", "d$"};
char table[5][6][10];

int numr(char c) {
    switch (c) {
        case 'S': return 0;
        case 'A': return 1;
        case 'B': return 2;
        case 'C': return 3;
        case 'a': return 0;
        case 'b': return 1;
        case 'c': return 2;
        case 'd': return 3;
        case '$': return 4;
    }
    return 2;
}

int main() {
    // Initialize table with empty strings
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 6; ++j)
            strcpy(table[i][j], " ");

    cout << "\nThe grammar is:\n";
    for (int i = 0; i < 7; ++i)
        cout << prod[i] << endl;

    cout << "\nPredictive parsing table is:\n";

    // Fill the predictive parsing table using the first sets
    for (int i = 0; i < 7; ++i) {
        int k = strlen(first[i]);
        for (int j = 0; j < k; ++j) {
            if (first[i][j] != '@')
                strcpy(table[numr(prol[i][0]) + 1][numr(first[i][j]) + 1], prod[i]);
        }
    }

    // Handle epsilon productions
    for (int i = 0; i < 7; ++i) {
        if (strlen(pror[i]) == 1 && pror[i][0] == '@') {
            int k = strlen(follow[i]);
            for (int j = 0; j < k; ++j) {
                strcpy(table[numr(prol[i][0]) + 1][numr(follow[i][j]) + 1], prod[i]);
            }
        }
    }

    // Fill the table headers
    strcpy(table[0][0], " ");
    strcpy(table[0][1], "a");
    strcpy(table[0][2], "b");
    strcpy(table[0][3], "c");
    strcpy(table[0][4], "d");
    strcpy(table[0][5], "$");
    strcpy(table[1][0], "S");
    strcpy(table[2][0], "A");
    strcpy(table[3][0], "B");
    strcpy(table[4][0], "C");

    cout << "\n--------------------------------------------------------\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << left << setw(10) << table[i][j];
            if (j == 5)
                cout << "\n--------------------------------------------------------\n";
        }
    }
    return 0;
}
