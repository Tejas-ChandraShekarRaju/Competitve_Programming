// Online Java Compiler
// Use this editor to write, compile and run your Java code online

import java.util.*;


 class DFS {
    LinkedList<Integer> adj[];
    int v;
    
    
    public DFS(int n){
        v = n;
        adj = new LinkedList[n];
        for(int i=0;i<n;i++){
            adj[i] = new LinkedList<>();
        }
        System.out.println("DFS created");
    }
    
    public void addEdge(int s, int d){
        this.adj[s].add(d);
        this.adj[d].add(s);
    }
    
    public void printConnections(){
        for(LinkedList<Integer> l: adj){
            System.out.println(l);
        }
    }
    
    public void dfs(int source, boolean visited[]){
        System.out.print("Visited"+" "+source);
        visited[source] = true;
        for(int i: adj[source]){
            if(!visited[i]){
                dfs(i,visited);
            }
        }
        
    }
    
    public void bfs(int source){
        boolean visited[] = new boolean[5];
        Queue<Integer> q = new LinkedList<>();
        q.add(source);
        visited[source] = true;
        while(!q.isEmpty())
        {
            int item = q.poll();
            System.out.print(" Visited "+ item);
            for(int i: adj[item]){
                if(!visited[i]){
                    visited[i] = true;
                    q.add(i);
                }
            }
        }
    }
    
    public static void main(String[] args) {
        System.out.println("Try programiz.pro");
        DFS dfs = new DFS(5);
        dfs.addEdge(0, 1);
        dfs.addEdge(0, 2);
        dfs.addEdge(0,3);
        dfs.addEdge(2, 3);
        dfs.addEdge(1,4);
        boolean visited[] = new boolean[5];
        dfs.dfs(0,visited);
        dfs.bfs(0);
        dfs.printConnections();
    }
}
