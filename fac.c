#include<stdio.h>
void main()
{
    int i,n;
    int fact=1;
    printf("Enter the number :" );
    scanf("%d",&n);
    for(i=0;i<=n;++i)
    {
        fact=fact*i;
        
    }

    printf("The factorial of %d! is %d",n,fact);
}
