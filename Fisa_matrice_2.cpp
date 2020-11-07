#include<iostream>
using namespace std;
int main()
{
   int A[20][20], n, i, j, k, s;
   cin>>n>>k;
   for(i=0; i<n; i++)
   {
        for(j=0; j<n; j++){
            cout<<"A["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];}
   }
   if((n%2==0)&&(n!=0))
   { s=0;
  {
        for(j=0; j<n/2; j++)
        {
            if(A[k][j]%2==1)
                s+=A[k][j];
        }
   } cout<<s;
} return 0;
}

