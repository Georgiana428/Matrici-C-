#include<iostream>
using namespace std;
int main()
{
     int A[20][20], i, j, l,c, k=0;
     cin>>l>>c;
     for(i=0; i<l; i++)
     {
         for(j=c-1; j>=0;j--)
         {
             A[i][j]=++k;
         }
     }
     for(i=0; i<l; i++)
     {
         for(j=0; j<c; j++)
         {
             cout<<A[i][j]<<" ";
         } cout<<endl;
     } return 0;
}
