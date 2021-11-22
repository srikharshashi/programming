
//Get all the The substrings in a given string
// (2^n) - 1
public class subsequences 
{
    public static void main(String[] args) {
        getsubseq("", "abcde");
      
    }
    public static void getsubseq(String p, String up) {
        if (up.isEmpty()) {
            System.out.println(p);
            return;
        }
        char ch = up.charAt(0);
        getsubseq(p + ch, up.substring(1));
        getsubseq(p, up.substring(1));
    }
    
}
