#include<iostream>
using namespace std;
 int main()
  {
    int x,y,i;
        cout<<"\t\t"<<"Print the Truth Table"<<"\n\n";
    cout<<" X\tY\tX.Y\tX+Y\tX'\tY'\tX'.Y'\tX'+Y'\n";
    for(i = 0;i <= 3;i++)
    {
        x = i / 2;
        y = i % 2;
        cout<<" "<<x<<"\t"<<y<<"\t"<<(x&&y)<<"\t"<<(x||y)<<"\t"<<!x<<"\t"<<!y<<"\t"<<(!x&&!y)<<"\t"<<(!x||!y)<<"\t"<<endl;
    }
    return 0;
  }
