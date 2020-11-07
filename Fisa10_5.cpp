#include<iostream>
using namespace std;
int main()
{
     int A[20][20], p,n, i, j, d=0;
     cin>>n>>p;
     for(i=0; i<n; i++)
         for(j=0; j<p; j++)
         {A[i][j]=d*d; d+=2; }
     for(i=0; i<n; i++)
     {
         for(j=0; j<p; j++)
         cout<<A[i][j]<<" ";
         cout<<endl;
     }
 return 0;
}
