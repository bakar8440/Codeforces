#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y,z,i;
    cin>>n>>k;
    y=0;
    z=0;
     for(i=0;i<n;i++)
     {
        cin>>x;

        if(x>0)
        {
            if( (i<k)  || (y==x))
            {
                z=i+1;
                y=x;
                
            }
        }
     }
     cout<<z<<endl;
     return 0;
}