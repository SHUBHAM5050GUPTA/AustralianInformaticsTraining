#include <bits/stdc++.h>
using namespace std;
int main() {

    freopen("taktakin.txt","r",stdin);
    freopen("taktakout.txt","w",stdout);

    int nofruits;
    cin>>nofruits;
    int count=0;
    while((nofruits-1)%11!=0)
    {
        nofruits=nofruits*2;
        count++;
    }

    cout<<count<<" "<<nofruits<<endl;
    return 0;
}
