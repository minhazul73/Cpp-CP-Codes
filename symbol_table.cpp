#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;

int main() {
    int i = 0, j = 0, x = 0, n, flag = 0;
    void* p;
    vector<void*> add(15);
    char srch, c;
    string b, d;
    
    cout << "Expression terminated by $: ";
    while ((c = getchar()) != '$') {
        b.push_back(c);
    }
    n = b.length() - 1;
    
    cout << "Given expression: " << b << endl;
    
    cout << "Symbol table\n";
    cout << "Symbol\tAddr\t \tType\n";
    
    while (j <= n) {
        c = b[j];
        if (isalpha(c)) {
            if (j == n) {
                p = malloc(sizeof(c));
                add[x] = p;
                d.push_back(c);
                cout << c << "\t" << p << "\tidentifier\n";
                x++;
            } else {
                char ch = b[j + 1];
                if (ch == '+' || ch == '-' || ch == '*' || ch == '=') {
                    p = malloc(sizeof(c));
                    add[x] = p;
                    d.push_back(c);
                    cout << c << "\t" << p << "\tidentifier\n";
                    x++;
                }
            }
        }
        j++;
    }
    
    cout << "The symbol to be searched: ";
    cin >> srch;
    
    for (i = 0; i < x; i++) {
        if (srch == d[i]) {
            cout << "Symbol found\n";
            cout << srch << " @address " << add[i] << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Symbol not found\n";
    
    return 0;
}
