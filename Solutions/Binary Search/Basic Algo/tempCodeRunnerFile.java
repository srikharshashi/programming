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