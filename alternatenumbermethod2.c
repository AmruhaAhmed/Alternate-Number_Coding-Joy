#include<stdio.h>
main()
{
    int n;//accepted number
    int temp=0;//checking variable
    int d;//dummy variable
    int s1=0;//sum of alternate digits
    int s2=0;//sum of other alternate digits
    printf("\n Enter a number:");
    scanf("%d",&n);
    d=n;
    if(n/10==0)
    printf("\n Alternate number condition is invalid for single digit numbers");
    else
    {
        while(n!=0)
        {
            if(temp==0)
            {
                s1=s1+n%10;
                temp=1;
            }
            else
            {
                s2=s2+n%10;
                temp=0;
            }
            n=n/10;
            
        }
        if(s1==s2)
        printf("\n %d is an alternate number",d);
        else
        printf("\n %d is not an alternate number",d);
    }
}