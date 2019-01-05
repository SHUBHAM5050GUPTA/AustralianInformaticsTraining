#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("dishin.txt","r",stdin);
    freopen("dishout.txt","w",stdout);

    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int minValue=INT_MAX;
    int maxValue=INT_MIN;
    int mean=0;

    for(int i=0;i<n;i++)
    {
        minValue=min(minValue,arr[i]);
        maxValue=max(maxValue,arr[i]);
        mean=mean+arr[i];
    }

    cout<<minValue<<" "<<maxValue<<" "<<mean/n<<endl;
    return 0;
}
