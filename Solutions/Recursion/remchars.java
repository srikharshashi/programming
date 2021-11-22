//Wap to remove subsequent duplicate  charcters in Java

public class remchars {
    public static void main(String[] args) {
        System.out.println(remchar("", "abbcddfghhhi"));
    }

    public static String remchar(String p, String up) {
        if (up.isEmpty())
            return p;

        if (up.length() != 1) {
            char ch1 = up.charAt(0);
            char ch2 = up.charAt(1);

            if (ch1 == ch2) {
                return remchar(p + ch2, up.substring(2));
            } else
                return remchar(p + ch1, up.substring(1));
        } else {
            char ch = up.charAt(0);

            return remchar(p + ch, "");
        }
    }
}
