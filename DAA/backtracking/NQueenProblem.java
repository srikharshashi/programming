/*
Input
4      ----> Matrix Dimension (4x4)
Output
0  0  1  0   ----> Resultant Matrix
1  0  0  0
0  0  0  1
0  1  0  0
--------------------
Input
3
Output
Solution does not exist
---------------------
Input
5
Output
1  0  0  0  0
0  0  0  1  0
0  1  0  0  0
0  0  0  0  1
0  0  1  0  0
------------------
Input
6
Output
0  0  0  1  0  0
1  0  0  0  0  0
0  0  0  0  1  0
0  1  0  0  0  0
0  0  0  0  0  1
0  0  1  0  0  0
*/
import java.util.*;
public class NQueenProblem {
	final int N;
	NQueenProblem(int n){
		this.N=n;
	}

	/* A utility function to print solution */
	void printSolution(int board[][])
	{
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++)
				System.out.print(" " + board[i][j]
								+ " ");
			System.out.println();
		}
	}
	boolean isSafe(int board[][], int row, int col)
	{
	    //let us check the row check first
	    for(int i=0;i<=col-1;i++)
	    {
	        if(board[row][i]==1)
	            return false;
	    }
	    
	    for(int i=0;i<=row-1;i++)
	    {
	        if(board[i][col]==1)
	            return false;
	    }
	    
	    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,k--)
	    {
	        if(board[i][j]==1)
	            return false;
	    }
	    
	    for(int i=row+1,j=col-1;i>=0 && j>=0;j++)
	    {
	        if(board[i][j]==1)
	            return true;
	    }
	    return true;
	   
		//Write your code here...
	
	}
	boolean solveNQUtil(int board[][], int col)
	{
	
	
	
		//Write your code here...
		
		return true;
		
		
	}
	boolean solveNQ()
	{
		int board[][] = new int[N][N];
		for (int i = 0; i < N; i++)   
        {  
            for (int j = 0; j < N; j++)   
            {  
                board[i][j] = 0;  
            }  
        }  
		

		if (solveNQUtil(board, 0) == false) {
			System.out.print("Solution does not exist");
			return false;
		}

		printSolution(board);
		return true;
	}

	
	
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		NQueenProblem Queen = new NQueenProblem(n);
		Queen.solveNQ();
	}
}
