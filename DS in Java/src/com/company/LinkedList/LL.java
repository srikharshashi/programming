package com.company.LinkedList;

class  LL {
    private Node head;
    private Node tail;
    private int size;

    public LL() {
        this.size = 0;
    }

    private class Node {
        private int value;
        private Node next;

        Node(int val) {
            this.value = val;
        }

        Node(int val, Node next) {
            this.value = val;
            this.next = next;
        }
    }

    public void insertfirst(int value) {
        Node new_head = new Node(value);
        new_head.next = head;
        head = new_head;
        if (tail == null) {
            tail = head;
        }
        this.size++;
    }

    public int getSize() {
        return size;
    }

    public void insert(int index,int value)
    {
        if(index==0)
        {
            insertfirst(value);
            return;
        }
        if(index==size-1)
        {
            insertlast(value);
            return;
        }

        Node prev=getnode(index-1);
        Node newnode=new Node(value);
        newnode.next=prev.next;
        prev.next=newnode;
        size++;
    }

    public void insertlast(int value) {
        Node end=new Node(value);
        tail.next=end;
        tail=end;
        size++;
    }

    public Node getnode(int index) {
        Node temp = head;
        for (int i = 1; i <= index; i++) {
            temp = temp.next;
        }
//        System.out.println("Value " +temp.value);
        return temp;
    }

    public void display() {
        Node temp = head;
        int c=0;
        while (temp != null) {
            System.out.print(c+" --> "+temp.value+" : ");
            temp=temp.next;
            c++;
        }
        System.out.println("END");
    }

    public void delete(int index)
    {
        if(index==0)
        {
            deletefirst();
            return;
        }
        if(index>=size-1)
        {
            deletelast();
            return;
        }
        Node temp=getnode(index-1);
        temp.next=temp.next.next;

        size--;
    }

    public void deletelast() {
        Node temp=getnode(this.size-2);
        temp.next=null;
        this.tail=temp;
        size--;
    }
    public void deletefirst()
    {
        head=head.next;
        size--;
    }


}