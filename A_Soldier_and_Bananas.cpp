#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w,x,y,b,i;
    cin>>k>>n>>w;
    y=0;
    x=0;
    for( i=1;i<=w;i++)
    {
        x += i;

    }
    y=x*k;
    b=y-n;
    if(y>n){
        cout<<b<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

return 0;

}

/*
#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost of all bananas
    int totalCost = (w * (w + 1) / 2) * k;

    // Calculate the amount to borrow
    int borrowAmount = std::max(0, totalCost - n);

    cout <<totalCost<<endl<< borrowAmount << endl;

    return 0;
}
*/