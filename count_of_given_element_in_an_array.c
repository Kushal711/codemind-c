#include<stdio.h>
int main()
{
    int n,a[100],i,key,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}