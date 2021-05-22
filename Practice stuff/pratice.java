import java.util.ArrayList;
import java.util.Scanner;

class practice 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int n=sc.nextInt();
        System.out.println("Enter the number of colums");
        int m=sc.nextInt();
        int matrix[][]=new int[n][m];
        int transpose[][]=new int[m][n];
        System.out.println("Enter the elements");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            matrix[i][j]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
           transpose[j][i] = matrix[i][j];
        }
        ArrayList<Integer> arr=new ArrayList<>()
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            System.out.print(transpose[i][j]);
            System.out.println();
        }
    }
    // public int[][] transpose(int[][] matrix) 
    // {
    //     int n=matrix.length;//rows
    //     int m=matrix[0].length;//column
        
        
    //     for(int i=0;i<m;i++)
    //     {
    //         for (int j=0;j<n;j++)
    //         {
    //             matrix[j][i]=transpose[i][j];
    //         }
    //     }
    //     return transpose; 
    // }
}