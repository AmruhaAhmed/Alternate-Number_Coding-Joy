import java.util.*;
class AlternateNumber
{
    Scanner ob=new Scanner(System.in);
     void main()
    {
        int n;//accepted number 
        int t;//dummy variable 1
        int r;//dummy variable 2
        int i;//loop counter
        int ctr=0;//counter for digits in the number
        int a[]=new int[100];//array to store digits of n
        int sumeven=0;//sum of digits in even position
        int sumodd=0;//sum of digits in odd position
        System.out.print("Enter a number:");
        n=ob.nextInt();
        t=n;
        r=n;
        while(n!=0)
        {
            ctr++;
            n=n/10;
            
        }
        if(ctr==1)
        {
            System.out.println("\n Alternate number operations cannot be performed on single digits");
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
            System.out.println(r+"  is an alternate number");
            else
            System.out.println(r+"  is not an alternate number");
        }
        
        
        
        
    }
}