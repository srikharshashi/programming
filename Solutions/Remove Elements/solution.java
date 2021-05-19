class solution 
{
    public int removeElement(int[] nums, int val)
    {
        int first_index=0;
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]!=val)
            {
                nums[first_index]=nums[i];
                first_index++;
            }
                
        }
        return first_index;
    }
}