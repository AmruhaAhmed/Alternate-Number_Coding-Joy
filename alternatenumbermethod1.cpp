#include<iostream>
using namespace std;
main()
{
    int n;//accepted number 
    int a[100];//array to store digits of n
    int t;//dummy variable 1
    int r;;//dummy variable 2
    int i;//loop counter
    int ctr=0;//counter for digits in the number
    int sumeven=0;//sum of digits in even position
    int sumodd=0;//sum of digits in odd position
    cout<<"Enter a number"<<endl;
    cin>>n;
    t=n;
    r=n;
    while(n!=0)
    {
        ctr++;
        n=n/10;
        
    }
    if(ctr==1)
    {
        cout<<"Alternate number operations cannot be performed on a single digit number"<<endl;
        
    }
    else
    {
        for(i=0;i<ctr;i++)
        {
            a[i]=t%10;
            t=t/10;
        }
        for(i=0;i<ctr;i++)
        {
            if(i%2==0)
            sumeven+=a[i];
            else
            sumodd+=a[i];
        }
        if(sumeven==sumodd)
        {
            cout<<r<<"  is an alternate number"<<endl;
        }
        else
        {
            cout<<r<<"  is not an alternate number"<<endl;
        }
    }
    
}