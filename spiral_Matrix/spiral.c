#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    //inputting the array
    for(int i=0 ; i<m ; ++i)
        for(int j=0 ; j<n ; ++j)
            scanf("%d",&arr[i][j]);
    int rl=0,cl=0,ru=m-1,cu=n-1,count=1;
    while(count<=m*n)
    {
        //right to left        
        for(int i=cl;i<=cu && count<=m*n;++i)
        {
            printf("%d\t",arr[rl][i]);
            ++count;
        }
        //up to down
        for(int i=rl+1;i<=ru && count<=m*n;++i)
        {
            printf("%d\t",arr[i][cu]);
            ++count;
        }
        //right to left
        for(int i=cu-1;i>=cl && count<=m*n;--i)
        {
            printf("%d\t",arr[ru][i]);
            ++count;
        }
        //down to up
        for(int i=ru-1;i>=rl+1 && count<=m*n;--i)
        {
            printf("%d\t",arr[i][cl]);
            ++count;
        }
        //updating value
        cl++;
        rl++;
        ru--;
        cu--;
    }
    return 0;
}