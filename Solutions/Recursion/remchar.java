//Write a program to remove all the instances of a paticular character in the String

public class remchar {
    public static void main(String[] args) {
        System.out.println(getprstr("","bcabauugabuhauga"));
    }

    public static String getprstr(String p,String up)
    {
        if(up.isEmpty())
        return p;

        char ch=up.charAt(0);

        if(ch=='a')
            return getprstr(p, up.substring(1));
        else
            return getprstr(p+ch, up.substring(1));    
    }
}
