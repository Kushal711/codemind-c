#include<stdio.h>
int main()
{
    int n,a[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        c=0;
        for(j=1;j<n-1;j++)
        {
            if(a[j]%2 &&a[j+1]%2 &&a[j-1]%2)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}