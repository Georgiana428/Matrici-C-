#include<iostream>
using namespace std;
 int main()
 {
     int A[20][20], i, j, n, m;
     cin>>n>>m;


     for(i=1; i<=n; i++)
     {  A[i][1]=1;
         for(j=1; j<=m; j++)
         {  A[1][j]=1;
             if(i<=j)
                A[i][j]=i;
             else
             A[i][j]=j;
         }
     }
     for(i=1; i<=n; i++)
     {
          for(j=1; j<=m; j++)
            cout<<A[i][j]<<" ";
       cout<<endl;
     } return 0;
 }
