import java.util.Scanner;

//   Moore's Vooting Algorithm is used to find the majority element in the array
//   Majority Element is an element that occurs more than n/2 times.
class mva
{
    public static void main(String [] args)
    {
        mva obj=new mva();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the array length");
        int n=sc.nextInt();
        System.out.println("Enter the array elements");
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        int mj=obj.findmajority(arr,n);
        int ret_code=obj.findifmaj(arr, n,mj);


        if(ret_code==0)
        System.out.println("Eleemnt not found "+mj);
        else
        System.out.println(mj+" is the majority elemnt");

    }
    public int findmajority(int arr[],int n)
    {
        int mj=arr[0],count=0;
        for(int i=0;i<n;i++)
        {
            count++;
            if(arr[i]==mj)
            {
                count++;
            }
            else
            count--;
            
            if(count ==0)
            {
                mj=i;
                count =1;
            }
        }
        return mj;
    }
    public int findifmaj(int arr[],int n,int mj)
    {
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==mj)
            c++;
        }
        if(c>n/2)
        {
            return 1;
        }
        else
        return 0;
    }
}
