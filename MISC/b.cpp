#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    while(a||b)
    {
             c=a+b;
             b=a>b?a:(b);
             i=0;
             while(b)
             {
                     if(b%10>(c%10))
                     i++;
                     b=b/10;
                     c=c/10;
             }
             if(i==0)
             printf("No carry operation.\n");
             else if(i==1)
             printf("1 carry operation.\n");
             else
             printf("%d carry operations.\n",i);
             scanf("%d%d",&a,&b);
    }
    return 0;
}
