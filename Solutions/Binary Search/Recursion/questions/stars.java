public class stars {
    public static void main(String[] args) {
        print(4);
    }

    static void print(int n)
    {
        if(n==0)
            return;
        print1(n);
        System.out.println();
        n--;
        print(n);
    }

     static void print1(int n) {
        if(n==0)
            return ;
        System.out.print("*"+" ");
        n--;
        print1(n);
    }
}
