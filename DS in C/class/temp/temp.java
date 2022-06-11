public class temp {
    public static void main(String[] args) {
        double num= 16.5;
        double temp=0.0;
        double sq=num/2.0;
        do
        {
            temp=sq;
            sq=(temp+(num/temp))/2;
        }
        while((temp-sq)!=0.0);
        System.out.println("The square root of the given number is= " +sq);
    }
}