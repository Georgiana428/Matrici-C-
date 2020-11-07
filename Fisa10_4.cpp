#include<iostream>
using namespace std;
int main()
{
  int A[24][24], i, j, n;
  cout<<"n=";cin>>n;

   for(i=1; i<=n; i++)
   {
       for(j=1; j<=n; j++)
        cin>>A[i][j];
   }
     for(j=1; j<=n; j++)
     {
         cout<<A[1][j]<<" ";
     }
     for(i=2; i<=n; i++)
     {
       cout<<A[i][n]<<" ";
     }
     for(j=n-1; j>=1; j--)
     {
         cout<<A[n][j]<<" ";
     }
     for(i=n-1; i>1; i--)
     {
         cout<<A[i][1]<<" ";
     } return 0;
}
