#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("sitin.txt","r",stdin);
    freopen("sitout.txt","w",stdout);

    int r,s,tickets;
    cin >>r>>s;
    cin>>tickets;
    int x=r*s;
    if(x>=tickets)
    {
         cout<<tickets<<" "<<0<<endl;
         return 0;
    }

    cout<<x<<" "<<tickets-x<<endl;
    
    return 0;
}
