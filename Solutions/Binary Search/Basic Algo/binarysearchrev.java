import java.util.Scanner;

public class binarysearchrev 
{
    public static void main(String[] args)
    {
        // Binary Search for Reverse Sorted Arrays
        binarysearchrev ob=new binarysearchrev();
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
        int index =ob.binserch(arr, target);
        System.out.println("Target found at "+index);
    }
    int binserch(int arr[],int target)
    {
        int l=0;
        int r=arr.length-1;
        int mid;
        while(l<=r)
        {  
            mid=(l+r)/2;
            if(arr[mid]==target)
            return mid;
            else if(target<arr[mid])
            l=mid+1;
            else if(target>arr[mid])
            r=mid-1;
        }
        return -1;
    }

  
}
