  // 2) functional interfaces are interfaces but with lambda programming 
//conceptually it is an interface with only one method 
// the purpose of functional interfaces is to enable functional programming 


@FunctionalInterface
interface F {
void m1();

}


//Java creates an anonymous class and instantiates the class in here 
/**
 * d
 */
public class d {

    public static void main(String[] args) {
        //the basis of functional programming is to assign code a variable 
        //the uniqueness of functional programming is to provide runtime comparision 
        F f=()->{System.out.println("I am a function");};
        f.m1();

    }
}

