#include<iostream>
using namespace std;
 int main()
 { int n, k, i, l,j, A[30][30];
 cin>>n>>k;
for(i=1; i<=n*k; i++)
{
    for(j=1; j<=n; j++)
    {
        A[i][j]=((i-1)/k+1)+j-1;
    }
}

 for(i=1; i<=n*k; i++)
 {
     for(j=1; j<=n; j++)
     {
         cout<<A[i][j]<<" ";
     } cout<<endl;
 } return 0;
 }
