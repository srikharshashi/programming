//Remove a paticular sub-string from a String
public class remstring {
    public static void main(String[] args) {
        System.out.println(remstring("njbsbapplebducb",""));
    }

    public static String remstring(String up,String p)
    {
        if(up.isEmpty())
        return p;
        char ch=up.charAt(0);
        if(up.startsWith("apple"))
        {
          return  remstring(up.substring(5), p);
        }
        else
            return remstring(up.substring(1), p+ch);
    }

}
