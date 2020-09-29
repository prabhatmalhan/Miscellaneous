#include<stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    int n;
    scanf("%d",&n);
    int arr[m][n];
    //inputting the array
    for(int i=0 ; i<m ; ++i)
        for(int j=0 ; j<n ; ++j)
            scanf("%d",&arr[i][j]);
    int x=1,j=0 ;
    for(int i=0 ; i<m ; ++i)
    {
        for(; j<n && j>=0 ; j+=x)
            printf("%d\t",arr[i][j]);
        printf("\n");
        //updating value
        x=-x;
        j+=x; //initial value of j for next loop 
    }
    return 0;
}