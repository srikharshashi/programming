import java.util.ArrayList;

class ListNode {
        int val;
        ListNode next;
        ListNode(int x) {
            this.val = x;
            this.next = null;
        }
        ListNode(int x,ListNode next) {
            this.val = x;
            this.next = next;
        }
    }
    


public class llcycle {
    public static void main(String[] args) {
        ArrayList<ListNode> nodes=new ArrayList<>(); 
        nodes.add(new ListNode(1));
        for(int i=2;i<=8;i++)
        {
            nodes.add(new ListNode(i));
            nodes.get(i-2).next=nodes.get(i-1);
        }
        ListNode t1=nodes.get(3);
        ListNode t2=nodes.get(7);
        System.out.println(t1.val + "--> "+ t2.val);
        t2.next=t1;

        ListNode head=nodes.get(0);

        detect(head);
        
        
    }

   public static void detect(ListNode head)
    {
        ListNode slow=head;
        ListNode fast=head;

        while(fast!=null && fast.next!=null)
        {
            fast=fast.next.next;
            slow=slow.next;
            System.out.println(slow.val+" "+fast.val);

            if(fast.val==slow.val)
                {
                    System.out.println("Cycle found at "+fast.val);
                    break;
                }
        }
        int c=1;
        slow=slow.next;
        while(slow.val!=fast.val)
        {
            c++;
            slow=slow.next;
        }
        System.out.println(c);
    }
}
