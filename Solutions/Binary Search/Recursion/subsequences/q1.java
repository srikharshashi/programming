public class q1 {
    // Given a String remove all the instances of the chatcter a in it
    // So to do that there must be two thing a processed and an unprocessed string
    // so that
    // all function calls are cool

    public static void main(String[] args) {
        System.out.println(rema("bcdashuaijqq", ""));
    }

    static String rema(String up, String p) {
        if (up.isEmpty())
            return p;

        char ch = up.charAt(0);
        if (ch == 'a')
            return rema(up.substring(1), p);
        else
            return rema(up.substring(1), p + ch);

    }
}
