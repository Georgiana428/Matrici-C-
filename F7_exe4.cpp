
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int A[20][20], m ,n, i, j, d=1;
     cin>>n>>m;
     for(i=0; i<n; i++)
     {
         for(j=0; j<m; j++)
         {
             int x=d*d;
             if(d==sqrt(x))
             {
                 A[i][j]=x;
                 d+=2;
             } else {d+=2;}

         }
     }
     for(i=n-1; i>=0; i--)
     {
         for(j=0; j<m; j++)
         {  cout<<A[i][j]<<" ";}
         cout<<endl;
     }
 return 0;
}
