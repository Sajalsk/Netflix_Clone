#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for (int i=0;i<t;i++)
    {
     int a,b,c,d,sum=0,v=1,count=0,early=0;
     cin>>a>>b>>c>>d;

     sum=a+b+c;

     if (d>sum)
     {
         cout<<"1"<<endl;
         early++;
     }

     while (d<sum)       // 2 3 5 10        3 3 4 4 
     {
           d=d*v;
           count++;
     }

    
    
     
if (early==0)
{
    cout<<count<<endl;
}

    }
         

     


}