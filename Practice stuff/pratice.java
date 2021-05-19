public class pratice
 {

    public static void main(String[] args)
    {
        int nums[]={0,1,2,2,3,3,3};
        int first_index=0;int val=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            if(val!=nums[i])
            {
                nums[first_index]=val;
                 first_index++;
                  val=nums[i];
            }
        }
        for(int i=0;i<nums.length;i++)
        {
            System.out.println(nums[i]);
        }
    }
    
}
