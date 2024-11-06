#include <bits/stdc++.h>
using namespace std;

int main() {
    int p = 5, r = 3;

    vector<vector<int>> maxm = {
        {7, 5, 3}, 
        {3, 2, 2},
        {9, 0, 2}, 
        {2, 2, 2},
        {4, 3, 3}
    };

    vector<vector<int>> alloc = {
        {0, 1, 0}, 
        {2, 0, 0},
        {3, 0, 2}, 
        {2, 1, 1},
        {0, 0, 2}
    };

    vector<int> avail = {3, 3, 2};
    
    vector<vector<int>> need(p, vector<int>(r));
    for (int i = 0; i < p; i++) 
        for (int j = 0; j < r; j++) 
            need[i][j] = maxm[i][j] - alloc[i][j];

    vector<bool> finish(p, false);
    vector<int> safeSequence;

    int numFinished = 0;
    while (numFinished < p) {
        bool found = false;
        
        // Try to find an unfinished process that can request resources
        for (int i = 0; i < p; i++) {
            bool canAllocate = true;
            if (!finish[i]) {
                for (int j = 0; j < r; j++) {
                    if (need[i][j] > avail[j]) {
                        canAllocate = false;
                        break;
                    }
                }
                if (canAllocate) {
                    // Grant resources to the process
                    for (int j = 0; j < r; j++) {
                        avail[j] += alloc[i][j];
                    }
                    safeSequence.push_back(i);
                    finish[i] = true;
                    numFinished++;
                    found = true;
                }
            }
        }
        
        // If no such process is found, the system is in an unsafe state
        if (!found) {
            cout << "System is in an unsafe state." << endl;
            return 0;
        }
    }

    // If all processes have been granted resources safely
    cout << "Safe sequence: ";
    for (int i = 0; i < safeSequence.size(); i++) {
        cout << "P" << safeSequence[i];
        if (i < safeSequence.size() - 1) {
            cout << " -> ";
        }
    }
    cout << endl;
    cout << "System is in a safe state." << endl;
}
