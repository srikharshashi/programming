class Solution {
    public static void main(String[]args)
    {
        Solution obj=new Solution();
        // int aolution[]=obj.twoSum(nums, target);
        // Pass the arguments to run the solution
    }
    public int[] twoSum(int[] nums, int target)
    {
        int len=nums.length;
        if(len==2)
        {
            int arr[]={1,0};
            return arr;
        }
        else
        {
        int solution[] =new int[2];
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(i!=j)
                {
                if(target==nums[i]+nums[j])
                {
                    solution[0]=i;
                    solution[1]=j;
                }
                }
            }
        }
        return solution;
        }
    }
}