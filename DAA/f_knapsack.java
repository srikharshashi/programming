// o-1 Knapsack either take it or leave
// Fractional Knapsack is a a method in which you can chop the number up to fit it in the knapsack
// An array must be be descending sorted on the basic of proft/weight ratio



/*
Fractional Knapsack

Sample test cases:

Input
7       				----> Total number of Objects
10 20 5 15 90 50 30   	----> Profits
2 1 4 2 1 5 8      		-----> weights
20                      ---->Knapsack capacity
Output
216.25    ----> Final Profit
------------------------------------
Input
7                 ----> Total number of Objects
10 5 15 7 6 18 3  ----> Profits
2 3 5 7 1 4 1     -----> weights
15                ---->Knapsack capacity
Output
55.33     ----> Final Profit

*/

import java.util.*; 

class Item
{
    int weight;
    int profit;
    float p_w;
    Item(int p,int w)
    {
        this.weight=w;
        this.profit=p;
        this.p_w=(float)p/w;
    }
}

public class f_knapsack 
{ 
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in); 
		int object,m;
		
		//System.out.println("Enter the Total Objects");
		object=sc.nextInt();
		
	
	//write code here to Create arrays for weight[] and profit[] of the object size
		int weight[]=new int[object];
		int profit[]=new int[object];
		Item items[]=new Item[object];
		
		
		
		for(int i=0;i<object;i++) 
		{
			//write code here to enter profit[] array values 
			profit[i]=sc.nextInt();
		}
		for(int i=0;i<object;i++) 
		{
			//write code here to enter weight[] array values
			weight[i]=sc.nextInt();
		}
// 		System.out.println("Enter the Knapsack capacity");

		m=sc.nextInt();
		
		for(int i=0;i<object;i++)
	    {
	        items[i]=new Item(profit[i],weight[i]);
	    }
		
	    Arrays.sort(items,(a,b)->(int)(b.p_w-a.p_w));
	    
	    float total_profit=0.0f;
	    
	    for(Item i:items)
	    {
	        if(i.weight<=m)
	        {
	            total_profit+=i.profit;   
	            m-=i.weight;
	        }
	        else
	        {
	            total_profit+=(i.profit*m)/i.weight;
	            break;
	        }
	        
	    }
	}
}




























