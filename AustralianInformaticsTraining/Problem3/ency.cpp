#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("encyin.txt","r",stdin);
    freopen("encyout.txt","w",stdout);

    int n,q;
    cin>>n>>q;

    int pages[n],ques[q];
    for(int i=0;i<n;i++)
    {
        cin>>pages[i];
    }
    for(int i=0;i<q;i++)
    {
        cin>>ques[i];
        cout<<pages[ques[i]-1]<<endl;
    }

    return 0;
}
