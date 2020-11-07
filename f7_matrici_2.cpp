#include<iostream>
using namespace std;
 int main()
 {
     int m, n, k, i, j, A[20][20];
     cin>>m>>n>>k;
     for(i=0; i<m; i++)
     {
          for(j=0; j<n; j++)
          {
             cout<<"A["<<i<<"]["<<j<<"]="; cin>>A[i][j];
          }
     }

     bool gasit=0;

     for(i=0; i<m;i++)
     {   bool toateDiferite=1;//pp ca toate elementele sunt diferite

     for(j=0; j<n; j++)
     {
          if(A[i][j]==A[k][j])
            toateDiferite=0;
     }

      if(toateDiferite==1){
        gasit=1;

            break;}
     }

     if(gasit==1){

     cout<<"DA";

     }else{

        cout<<"NU";}

     return 0;
 }
