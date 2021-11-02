 // Given a String remove all the instances of the sting apple in it
    // So to do that there must be two thing a processed and an unprocessed string
    // so that
    // all function calls are cool
public class q2 {

    public static void main(String[] args) {
        System.out.println(rema("bcdashuaijqq", ""));
    }

    static String rema(String up, String p) {
        if (up.isEmpty())
            return p;

        char ch = up.charAt(0);
        if (up.startsWith("apple"))
            return rema(up.substring(4), p);
        else
            return rema(up.substring(1), p + ch);

    }
}

