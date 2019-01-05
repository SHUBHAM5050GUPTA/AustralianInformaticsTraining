#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("mixin.txt","r",stdin);
    freopen("mixout.txt","w",stdout);

    int n,d;
    cin>>n>>d;
    int a=0,b=0;
    if(n%d!=0)
    {
    	a=n/d;
    	b=n%d;
    	cout<<a<<" "<<b<<"/"<<d<<endl;
    }else{
    	a=n/d;
    	cout<<a<<endl;
    }

    return 0;
}
