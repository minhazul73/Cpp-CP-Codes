#include <bits/stdc++.h>
using namespace std;

int nop;
vector<string> prod;
vector<char> res;

void Follow(char c);
void Result(char c);
void First(char c);

void Result(char c)
{
    if (find(res.begin(), res.end(), c) == res.end())
        res.push_back(c);
}

void Follow(char c)
{
    if (prod[0][0] == c)
        Result('$');
    for (int i = 0; i < nop; i++)
    {
        for (int j = 2; j < prod[i].length(); j++)
        {
            if (prod[i][j] == c)
            {
                if (prod[i][j + 1] != '\0')
                    First(prod[i][j + 1]);
                else if (prod[i][j + 1] == '\0' && prod[i][0] != c)
                    Follow(prod[i][0]);
            }
        }
    }
}

void First(char c)
{
    if (!isupper(c))
    {
        Result(c);
        return;
    }
    for (int i = 0; i < nop; i++)
    {
        if (prod[i][0] == c)
        {
            if (prod[i][2] == '$')
                Follow(prod[i][0]);
            else if (islower(prod[i][2]))
                Result(prod[i][2]);
            else
                First(prod[i][2]);
        }
    }
}

int main()
{
    int choice;
    char c;
    cin >> nop;
    prod.resize(nop);
    for (int i = 0; i < nop; i++)
        cin >> prod[i];

    do
    {
        res.clear();
        cin >> c;
        Follow(c);
        cout << "\nFollow(" << c << ") ==> {";
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "}\nPress 1 to continue: ";

        cin >> choice;
    } while (choice == 1);
}