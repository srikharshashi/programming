//Get all the subsets of a given string


public class q3 {
    public static void main(String[] args) {
        printsubsets("", "abc");
    }
    static void printsubsets(String p,String up)
    {
        if(up.isEmpty())
        {
            System.out.println(p);
            return;
        }
        
        char ch=up.charAt(0);
        //Part 1 of the recursion Tree
        //Include the removed charcter in the substring
        printsubsets(p+ch, up.substring(1));
        //Part 2 of the recursion tree
        //Do not include the character in the substring
        printsubsets(p, up.substring(1));

    }
}
