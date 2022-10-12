
#include<stdio.h>
int main()
{
    int t,n,i;+
    printf("how many number you input");
    scanf("%d",&t);
    for(i=1;i<=t;i++)

    {
        printf("enter numbers=");
        scanf("%d",&n);
        int s1=n/10000;
        int s2=n%10;
        int sum=s1+s2;
        printf("sum = %d\n",sum);

    }

}
