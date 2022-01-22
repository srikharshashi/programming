
class LL
{
    private Node head;
    private Node tail;
    private int size;

    public LL() {
        this.size = 0;
    }

    private class Node
    {
        private int value;
        private Node next;

        Node(int val)
        {
            this.value=val;
        }
        Node(int val,Node next)
        {
            this.value=val;
            this.next=next;
        }
    }

    public void insertfirst(int value)
    {
        Node new_head=new Node(value);
        new_head.next=head;
        head=new_head;
        if(tail==null)
        {
            tail=head;
        }

    }

    public int getSize() {
        return size;
    }
    public Node getnode(int index)
    {
        Node temp=head;
        for(int i=1;i<=index;i++)
        {
            temp=temp.next;
        }
        return temp;
    }

    public void display()
    {
        Node temp=head;
        while(temp!=null)
        {
            System.out.print(temp.value + "-->");
            temp=temp.next;
        }
        System.out.println("END");
    }
}