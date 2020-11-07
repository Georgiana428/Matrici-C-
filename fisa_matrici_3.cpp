#include<iostream>
using namespace std;
 int main()
 {
     int A[30][30],i, j, n, k=0;
     cin>>n;


     for(i=0; i<n; i++)
     { k=n;
         for(j=0; j<n; j++)
         {
             A[i][j]=k--;
             if(i==j)
                A[i][j]=0;

         }
     }
      for(i=0; i<n; i++)
     {
         for(j=0; j<n; j++)
         {cout<<A[i][j]<<" ";
         }cout<<endl;}
         return 0;

 }

