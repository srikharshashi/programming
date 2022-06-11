package kruskals;

// Sets are represented by a root element 
// Elelemnts of a ser are stored in a tree
// find() :- gets the root of the tree
//union makes a on tree subtree of another 
//root of the tree becomes a child of some other root 
//path compression is done in a union operation 
//become the child of root than a sub child  







/*
Kruskal's Minimus spanning tree.

Input
4      Number of vertices in graph
5      Number of edges in graph
0 1 10  ---> src,dest and weight for edge1 
0 2 6   ---> src,dest and weight for edge2
0 3 5   ---> src,dest and weight for edge3
1 3 15   ---> src,dest and weight for edge4
2 3 4    ---> src,dest and weight for edge5
Output
2 3 4   the edges in the constructed MST
0 3 5    (src, dest and weight)
0 1 10
19      ---> Minimum Cost Spanning Tree
--------------------------------------------
Input
6
8
0 1 4
0 2 4
1 2 2
2 3 3
2 5 2
2 4 4
3 4 3
5 4 3
output
1 2 2
2 5 2
2 3 3
3 4 3
0 1 4
14
*/
import java.util.*;	

class a {
	
	class Edge implements Comparable<Edge>
	{
		int src, dest, weight;

		public int compareTo(Edge compareEdge)
		{
			return this.weight - compareEdge.weight;
		}
	};


	//subset
	class Set
	{
		int parent, rank;
	};

	int V, E; // V-> no. of vertices & E->no.of edges
	//edge
	Edge edges[]; // collection of all edges

	// Creates a graph with V vertices and E edges
	a(int v, int e)
	{
		V = v;
		E = e;
		edges = new Edge[E];
		for (int i = 0; i < e; ++i)
			edges[i] = new Edge();
	}

	// A utility function to find set of an
	// element i (uses path compression technique)
	int find(Set sets[], int i)
	{
		//Write your code here...
		if(i==sets[i].parent){
		    return i;
		}
		else{
		    int root=find(sets,sets[i].parent);
		    sets[i].parent=root;
		    return root;
		}
	}

	// A function that does union of two sets
	// of x and y (uses union by rank)
	void Union(Set sets[], int x, int y)
	{
		//Write your code here...
		int root1=find(sets,x);
		int root2=find(sets,y);
		if(root1==root2){
		    return;
		}
		if(sets[root1].rank<sets[root2].rank){
		    sets[root1].parent=root2;
		}
		else if(sets[root1].rank>sets[root2].rank){
		    sets[root2].parent=root1;
		}
		else{
		    sets[root2].parent=root1;
		    sets[root1].rank=sets[root1].rank+1;
		}
	}

	// The main function to construct MST using Kruskal's
	// algorithm
	void KruskalMST()
	{
		//Write your code here...
		int mincost=0;
		Set<Edge> eset = new HashSet<Edge>();
		
		Set sarr[]=new Set[V];
		for(int i=0;i<V;i++){
		    sarr[i]=new Set();
		    sarr[i].parent=i;
		    sarr[i].rank=0;
		}
		Arrays.sort(edges);
		for(Edge e:edges){
		    int root1=find(sarr,e.src);
		    int root2=find(sarr,e.dest);
		    if(root1!=root2){
		        mincost=mincost+e.weight;
		        Union(sarr,e.src,e.dest);
		        eset.add(e);
		        if(eset.size()==V-1){
		            break;
		        }
		    }
		}
		System.out.println(mincost);
	}

	// Driver Code
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);

		
		int V = sc.nextInt(); // Number of vertices in graph
		int E = sc.nextInt(); // Number of edges in graph
		b graph = new b(V, E);

		for(int i=0;i<E;i++){
			graph.edges[i].src = sc.nextInt();
			graph.edges[i].dest = sc.nextInt();
			graph.edges[i].weight = sc.nextInt();
		}

		// Function call
		graph.KruskalMST();
	}
}
