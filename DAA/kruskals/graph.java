import java.util.*;
public class graph{
    class Edge implements Comparable<Edge>
    {
        int src,dest,weight;
        public int compareTo(Edge compareEdge)
        {
            return this.weight-compareEdge.weight;
        }
    }

    class Set
    {
        int parent,rank;
    }

    int V,E;
    Edge edges[];
    graph(int V,int E)
    {
        this.E=E;
        this.V=V;
        edges=new Edge[E];
        for (int i = 0; i < E; i++) {
            edges[i]=new Edge();
        }
    }

    //method to find the root 
    int find(Set sets[],int i)
    {
        if(i==sets[i].parent)
        {
            return i;
        }
    }

    
}
