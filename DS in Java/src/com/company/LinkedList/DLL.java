package com.company.LinkedList;

public class DLL {
    private Node head;
    private Node tail;
    private int size;

    private Node getnode(int index) {
        Node temp = head;
        for (int i = 1; i <= index; i++) {
            temp = temp.next;
        }
        return temp;
    }

    public void insertfirst(int value) {
        Node first = new Node(value);
        first.previous = null;
        first.next = head;
        if(head!=null)
        {
            head.previous=first;
        }
        head = first;
        if (tail == null) {
            tail = head;
        }
        size++;
    }

    public void insertlast(int value) {
        Node newnode = new Node(value);
        tail.next = newnode;
        newnode.next = null;
        newnode.previous = tail;
        tail = newnode;
        size++;
    }

    public void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.value + "-->");
            temp = temp.next;
        }
        System.out.print("END \n");

    }

    public void deleteLast() {
        Node newtail = tail.previous;
        newtail.next = null;
        tail = newtail;
        size--;

    }

    public void deletefirst() {
        Node newnode = head.next;
        newnode.previous = null;
        head = newnode;
        size--;
    }

    public void delete(int index) {
        if (index == 0) {
            deletefirst();
            return;
        }
        if (index == size - 1) {
            deleteLast();
            return;
        }

        Node temp = getnode(index);
        Node node1 = temp.previous;
        Node node2 = temp.next;
        node1.next = node2;
        node2.previous = node1;
        size--;

    }

    private class Node {
        private Node next;
        private Node previous;
        private int value;

        Node(int val) {
            this.value = val;
        }
    }


}
