import java.util.*;
class AlternateNumber
{
    Scanner ob=new Scanner(System.in);

    void main()
    {
    int n;//accepted number
    int temp=0;//checking variable
    int d;//dummy variable
    int s1=0;//sum of alternate digits
    int s2=0;//sum of other alternate digits
    System.out.print("Enter a number:");
    n=ob.nextInt();
    d=n;
    if(n/10==0)
    System.out.println("\n Alternate number operations cannot be performed on single digits");
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
        System.out.println(d+"  is an alternate number");
        else
        System.out.println(d+"  is not an alternate number");
    }
    
}
}
