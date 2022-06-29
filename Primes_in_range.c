#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,count=0;
    scanf("%d %d",&m,&n);
    while(m<=n)
    {
        int i=1,sum=0;
        for(i;i<=sqrt(m);i++)
        {
            if(m%i==0)
            {
                sum++;
            }
        }
        if(sum==1)
        {
            if(m!=1)
            {
                count++;
            }
        }
        m++;
    }
    printf("%d",count);
}