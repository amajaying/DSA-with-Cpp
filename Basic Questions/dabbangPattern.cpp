#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << j + 1;
        }

        for (int j = 0; j < i; j++)
        {
            cout << "**";
        }

        for (int j = a; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
        a--;
    }
}