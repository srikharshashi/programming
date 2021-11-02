//Recursive Programs to find Minimum and Maximum elements of array
// Difficulty Level : Easy
// Last Updated : 23 Apr, 2021
// Given an array of integers arr, the task is to find the minimum and maximum element of that array using recursion.
public class minmaxarr {
    public static void main(String[] args) {
        int arr[]={1,2,3,4,5};
        System.out.println(findmax(arr, 1, arr[0]));
        System.out.println(findmin(arr, 1, arr[0]));
        
    }
   static int findmax(int arr[],int c,int max)
    {
        
        if(arr[c]>max)
        {
            max=arr[c];
        }
        if(c==arr.length-1)
            return max;
        c++;
        return findmax(arr, c, max);
       
    }
    static int findmin(int arr[],int c,int min)
    {
        
        if(arr[c]<min)
        {
            min=arr[c];
        }
        if(c==arr.length-1)
            return min;
        c++;
        return findmin(arr, c, min);
       
    }
}
