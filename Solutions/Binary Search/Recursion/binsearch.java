class binsearch {
    public static void main(String[] args) {
        int arr[] = { 10, 20, 30, 40, 50, 90, 120, 765, 800 };
        int s=0;
        int e=arr.length-1;
        int target=120;
        System.out.println(search(arr,target,s,e));
    }
    static int search(int arr[],int target,int s,int e)
    {
        int mid=(s+e)/2;
        if(s>e)
        {
            return -1;
        }
        else if(arr[mid]==target)
            return mid;
        else if(target>arr[mid])
        {
            return search(arr, target, mid+1, e);
        }
        return search(arr, target, s, mid-1);
    }
}