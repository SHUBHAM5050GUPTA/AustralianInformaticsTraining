#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("tripin.txt","r",stdin);
    freopen("tripout.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n],pos[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if(arr[i]%3==0)
    	{
    		pos[k]=i+1;
    		k++;
    	}
    }

    if(k!=0)
    {
	    cout<<k<<endl;	
	    for(int i=0;i<k;i++)
	    {
	    	cout<<pos[i]<<" ";
	    }
    }
    else
    {
    	cout<<"Nothing here!"<<endl;
    }
    

    return 0;
}
