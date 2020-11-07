#include<iostream>
using namespace std;
int main()
{
    int A[20][20], i, j, n, k;
    cin>>n;
    k=n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            A[i][j]=k;
            if(i+j==n+1)
                A[i][n+1-i]=0;
        } k--;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++){
            cout<<A[i][j]<<" ";}cout<<endl;
    } return 0;
}
