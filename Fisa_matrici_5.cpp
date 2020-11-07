#include<iostream>
using namespace std;
 int main()
 {
     int A[20][20], i, j, n, m;
     cin>>n>>m;


     for(i=1; i<=n; i++)
     {
         for(j=1; j<=m; j++)
         {
             if(i<=j)
                A[i][j]=j;
             else
             A[i][j]=i;
         }
     }
     for(i=1; i<=n; i++)
     {
          for(j=1; j<=m; j++)
            cout<<A[i][j]<<" ";
       cout<<endl;
     } return 0;
 }

