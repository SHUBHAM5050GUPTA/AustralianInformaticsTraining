#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("rainin.txt","r",stdin);
    freopen("rainout.txt","w",stdout);

    int n,c;
    
    cin>>n>>c;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    int waterFilled=0;
    while(waterFilled<c)
    {
        waterFilled=waterFilled+arr[count];
        count++;
    }

    cout<<count<<endl;
    return 0;
}
