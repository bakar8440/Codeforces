#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count;
    string x;
    cin >> n;
    count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x == "++X" || x == "X++")
        {
            count++;
        }
        else if (x == "--X" || x == "X--")
        {
            count--;
        }
    }
    cout << count << endl;
    return 0;
}
