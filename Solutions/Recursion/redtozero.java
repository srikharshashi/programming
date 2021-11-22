//1342. Number of Steps to Reduce a Number to Zero

// Given an integer num, return the number of steps to reduce it to zero.

// In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.

 

// Example 1:

// Input: num = 14
// Output: 6
// Explanation: 
// Step 1) 14 is even; divide by 2 and obtain 7. 
// Step 2) 7 is odd; subtract 1 and obtain 6.
// Step 3) 6 is even; divide by 2 and obtain 3. 
// Step 4) 3 is odd; subtract 1 and obtain 2. 
// Step 5) 2 is even; divide by 2 and obtain 1. 
// Step 6) 1 is odd; subtract 1 and obtain 0.

class redtozero {
    public static void main(String[] args) {
        System.out.println(numberOfSteps(20));
    }
    public static int numberOfSteps(int num) {
        return getsum(num,0);
    }
    private static int getsum(int n,int c)
    {
        if(n==0)
            return c;
        
        if(n%2==0)
        {
            n=n/2;c=c+1;
            return getsum(n,c);
        }
        
       else 
           return getsum(n-1,++c);
        
    }
}