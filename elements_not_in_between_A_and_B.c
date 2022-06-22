#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,c=0;
    scanf("%d %d",&x,&y);
    for(int i=0;i<n;i++)
    {
        if(!(a[i]>=x && a[i]<=y))
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0)
    {
          printf("-1");
    }
}