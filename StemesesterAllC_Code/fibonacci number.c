
#include<stdio.h>
int main()
{
    int first=0,secound=1,count=0,fibo,n;
    printf("enter n=");
    scanf("%d",&n);
    while( count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=first+secound;
            first=secound;
            secound=fibo;
        }

        printf("%d",fibo);
        count++;
    }


}
