#include<stdio.h>
int main()
{
    int n,reminder,reverse=0;
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        reverse=reverse*10+reminder;
        n=n/10;
    }
    printf("%d",reverse);
}