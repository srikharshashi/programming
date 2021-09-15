import java.util.Scanner;

public class binarysearch 
{
    public static void main(String[] args)
    {
        binarysearch ob=new binarysearch();
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length of array");
        int len=sc.nextInt();
        int arr[]=new int[len];
        System.out.println("Enter the elements of array");
        for(int i=0;i<len;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Emter Target");
        int target=sc.nextInt();
        int index =ob.binarysearchindex(arr, target);
        System.out.println("Target found at "+index);
    }
    int binserch(int arr[],int target)
    {
        int l=0;
        int r=arr.length-1;
        int mid= -1;
        while(l<=r)
        {  
            mid=(l+r)/2;
            if(arr[mid]==target)
            return mid;
            else if(target<arr[mid])
            r=mid-1;
            else if(target>arr[mid])
            l=mid+1;
        }
       return mid;
    }
    int binarysearchlastindex(int arr[],int target)
    {
        //To find last occurence return r
        
        int l=0;
        int r=arr.length-1;
        int mid= -1;
        while(l<=r)
        {  
            mid=(l+r)/2;
            if(arr[mid]==target)
            l=mid+1;
            else if(target<arr[mid])
            r=mid-1;
            else if(target>arr[mid])
            l=mid+1;
        }
       return mid;
    
    }
    int binarysearchindex(int arr[],int target)
    {
        //This method is used to serach for the target's position if and only if it is not in the array
        
        int l=0;
        int r=arr.length-1;
        int mid= -1;
        while(l<=r)
        {  
            mid=(l+r)/2;
            if(arr[mid]==target)
            ;
            else if(target<arr[mid])
            r=mid-1;
            else if(target>arr[mid])
            l=mid+1;
        }
       return l;
    
    }


  
}
