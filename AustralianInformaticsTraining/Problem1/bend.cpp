#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int isOverlapping(int,int,int,int,int,int,int,int);
int main() {

    freopen("bendin.txt","r",stdin);
    freopen("bendout.txt","w",stdout);

    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    

    int state=isOverlapping(x1,x2,x3,x4,y1,y2,y3,y4);

    int area1=(x2-x1)*(y2-y1);
    int area2=(x4-x3)*(y4-y3);
    

    if(state==0)
    {
        cout<<area1+area2<<endl;
    }
    else
    {
        int x1Intersection=max(x3,x1);
        int x2Intersection=min(x2,x4);
        int y1Intersection=max(y1,y3);
        int y2Intersection=min(y2,y4);

        int xtraArea=(x2Intersection-x1Intersection)*(y2Intersection-y1Intersection);

        cout<<area1+area2-xtraArea<<endl;
    }


    return 0;
}

 int isOverlapping(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4)
{
    //Not Overlappping
    if((x3>x2||x1>x4) ||(y3>y2||y1>y4))
    {
        return 0;
    }
    //Overlapping
    else
    {
        return 1;
    }
    return 0;

}
