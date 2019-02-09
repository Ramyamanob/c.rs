# c.rs
#include<stdio.h>
int main()
{
    int n,r,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==t)
    {
        printf("%d is a palindrome",sum);
    }
    else
    {
        printf("%d is not a palindrome",sum);
    }
    return 0;
}
