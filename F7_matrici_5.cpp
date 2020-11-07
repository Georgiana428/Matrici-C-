#include<iostream>
using namespace std;
int main()
{ int i, j, l, c, k=0;
cin>>l>>c;
int A[20][20];
   for(j=0;j<c; j++ )
   {
       for(i=0; i<l; i++)
       {
          A[i][j]=++k;
       }
   }
    for(i=0;i<l;i++)
    {for(j=0;j<c;j++)
       cout<<A[i][j]<<' ';
       cout<<endl;
    }
     return 0;
}
