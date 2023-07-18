#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x, y, z, i, a, count;
    cin >> n;
    a = 0;
    count = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        a = x + y + z;
        if (a >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}