#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    int a,b,flag=1;
    cin>>x>>y;

    a=x.length();
    b=y.length();
    if(a != b){
        flag=0;
    }
    
    else{
        for(int i=0;i<a;i++)
        {
            if(x[i] != y[b-i-1]){
                flag=0;
                break;
            }
        }
    }
    
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}




/*
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    bool isReverse = true;

    if (s.length() != t.length()) {
        isReverse = false;
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != t[s.length() - i - 1]) {
                isReverse = false;
                break;
            }
        }
    }

    if (isReverse) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

*/