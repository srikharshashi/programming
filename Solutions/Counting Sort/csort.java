import java.util.ArrayList;
import java.util.Scanner;
class csort
{

public static void main(String[]args)
{
    int len;
    int i;
    int j;
    int range;
    Scanner sc= new Scanner(System.in);
    csort ob=new csort();
    ArrayList<Integer> sortedarr=new ArrayList<Integer>();
    System.out.println("Enter length of array ");
    len=sc.nextInt();
    System.out.println("Enter Array elements ");
    int[] arr=new int[len];
    for(i=0;i<len;i++)
    {
    arr[i]=sc.nextInt();
    }
    range =ob.findmaxin(arr,len);
    int[] count=new int[range+1];
    for(i=0;i<range+1;i++)
    {
     count[i]=0;
    }
    for(i=0;i<len;i++)
    {
        ++count[arr[i]];
    }
    for(i=0;i<range+1;i++)
    {
        for( i=0;i<range+1;i++)
        {
            for(j=0;j<count[i];j++)
            {
                sortedarr.add(i);
            }

        }
    }
    System.out.println("The sorted Array is :");
    for(int k:sortedarr)
    System.out.print(k+" ");
}
public int findmaxin(int arr[],int len)
{
    int maxin=0;
    for(int i=1;i<len;i++)
    {
            if(arr[i]>arr[maxin])
            maxin=i;
    }
    return arr[maxin];
}
}