#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, count1, count2;
    char s[100010];
    cin >> n;
    count1 = 0;
    count2 = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];

        if (s[i] == 'A')
        {
            count1++;
        }
        else if (s[i] == 'D')
        {
            count2++;
        }
    }

    if (count1 > count2)
    {
        cout << "Anton" << endl;
    }
    else if (count2 > count1)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}