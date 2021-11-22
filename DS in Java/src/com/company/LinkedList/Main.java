package com.company.LinkedList;
public class Main {

    public static void main(String[] args) {
//        LL list = new LL();
//        list.insertfirst(20);
//        list.insertfirst(30);
//        list.insertfirst(40);
//        list.insertfirst(50);
//        list.insertfirst(60);
//        list.display();
//        list.delete(2);
//        list.display();
//        list.deletelast();
//        list.display();
//        list.insert(1, 55);
//        list.display();
//        list.insert(3, 40);
//        list.display();

        DLL dll=new DLL();
        dll.insertfirst(10);
        dll.insertfirst(20);
        dll.insertfirst(30);
        dll.display();
        dll.insertlast(50);
        dll.display();
        dll.deleteLast();
        dll.display();
        dll.delete(1);
        dll.display();
    }
}
