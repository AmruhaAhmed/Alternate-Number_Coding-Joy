#include<stdio.h>
int main()
{//program for alternate number
    int n;//accepted number 
    int a[100];//array to store digits of n
    int t;//dummy variable 1
    int r;//dummy variable 2
    int i;//loop counter
    int ctr=0;//counter for digits in the number
    int sumeven=0;//sum of digits in even position
    int sumodd=0;//sum of digits in odd position
    printf("\n Enter a number:");
    scanf("%d",&n);
    t=n;
    r=n;
    while(n!=0)//loop 1
    {
        ctr++;
        n=n/10;
    }
    if(ctr==1)
    {
    printf("\n Alternate number operations cannot be performed on a single digit number");
    
    }
    else
    {
    for(i=0;i<ctr;i++)//loop 2
    {
        a[i]=t%10;
        t=t/10;
    }
    for(i=0;i<ctr;i++)//loop 3
    {
        if(i%2==0)
        sumeven+=a[i];
        else
        sumodd+=a[i];
    }
    if(sumeven==sumodd)
    {
        printf("\n %d is an alternate number",r);
        
    }
    else
    {
        printf("\n %d is not an alternate number",r);
    }
    }
    return 0;
}