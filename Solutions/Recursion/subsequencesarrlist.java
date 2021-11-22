import java.util.ArrayList;
//Get all the The substrings in a given string in an ArrayList 

public class subsequencesarrlist {
    public static void main(String[] args) {
        ArrayList<String> arr=getsubseq("", "abcde" );
        for (String str : arr) {
            System.out.println(str);

        }
    }
    public static ArrayList<String> getsubseq(String p, String up) {
        if (up.isEmpty()) {
            ArrayList<String> arrr=new ArrayList<String>();
            arrr.add(p);
            return arrr;
        }
        char ch = up.charAt(0);
       ArrayList<String> left= getsubseq(p + ch, up.substring(1));
        ArrayList<String> right = getsubseq(p, up.substring(1));

        left.addAll(right);
        return left;
    }
}
