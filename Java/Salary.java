 interface Company {
    final int pt=200;
    final int pf=180;
    final int ta=2000;
    final int da=5000;

     void gross_sal();
    
}

class Employee
{
    String name;
    int basic_sal;

    Employee(String name,int basic_sal)
    {
        this.name=name;
        this.basic_sal=basic_sal;
    }

    void display()
    {
        System.out.println("Employee :"+this.name);
        System.out.println("Basic Salary :"+this.basic_sal);
    }

}

class Salary  extends Employee implements Company
{
    
    int hra;
    int gross_total;
    Salary(String name,int basic_sal,int hra)
    {
        super(name, basic_sal);
        this.hra=hra;
    }

    void disp()
    {
        super.display();
        System.out.println("Gross Total:"+gross_total);
    }

     void gross_sal()
    {
        this.gross_total=this.basic_sal+this.hra+ta-pf-pt;
    }
    public static void main(String[] args) {
        Salary obj=new Salary("Ramesh", 1000000, 2000);
        obj.gross_sal();
        obj.disp();
    }

}




// create a java program that will calculate bill for patient in a hospital
// implement using method overload and atleast two java interfaces
// use following parameters :- registration fee , doctor fee ,medicines amount ,type of surgery,surgery fee
// name of teh patient 
// age of the patient
// total bill 
// 


