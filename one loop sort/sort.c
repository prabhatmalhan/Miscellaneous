# include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;++i)
        {
            scanf("%d",&a[i]);
        }
        int k;
        scanf("%d",&k);
        int j;
        for(i=0;i<n;)
        {
            j=i+1;
            if(a[j]<a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                i=0;
            }
            else
                ++i;
            
        }
            printf("%d\n",a[k-1]);
    }
    return 0;
}