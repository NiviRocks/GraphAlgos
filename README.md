# GraphAlgos
*Find various Data Structure Algorithms on Graph Problems ahead*  

![GitHub language count](https://img.shields.io/github/languages/count/NiviRocks/GraphAlgos?color=%2314dd93&label=Coding%20Languages)
![GitHub top language](https://img.shields.io/github/languages/top/NiviRocks/GraphAlgos?color=%23a01feb)
![GitHub repo size](https://img.shields.io/github/repo-size/NiviRocks/GraphAlgos?color=%23ebd31f)
![GitHub commit activity](https://img.shields.io/github/commit-activity/w/NiviRocks/GraphAlgos?color=%23eb3a1f)
![GitHub last commit](https://img.shields.io/github/last-commit/NiviRocks/GraphAlgos)

## Find the Direct Link and Explaination for Codes of Algorithms here 👉   
___
> **Krushkal's Algorithm**  
___
*[Get Code Link Here](https://github.com/NiviRocks/GraphAlgos/blob/main/Krushklals.c)*
 - This algorithm finds the Minimum Spanning Tree (MST) for a connected undirected weighted Graph. 
 - The algorithm uses structure to represent graph:
 ```
  struct graph {
      int u;
      int v;
      int weight;
  }
  ```
 - Merge Sort is used to sort the graph in ascending order of its weights
 - The function `int krushkals( int E,int V)` to find MST
 - Time complexity of the Algorithm is: `O(E.logE)`  
   here, ***log*** represents *log (base 2)* and ***E*** is number of Edges in Graph
 - Output is displays edges in order of selection and their corresponding weights.  
___
> **Breadth First Search (BFS) Algorithm**  
___
*[Get Code Link Here](https://github.com/NiviRocks/GraphAlgos/blob/main/BFS.py)*
 - Function ```addNodes(item)``` creates the graph. 
 - Input should be an Adjecency List  
 - Example of graph is given below <details><summary>Click Here</summary>  
   <img width="300" height="200" alt="stack" src="https://github.com/NiviRocks/GraphAlgos/blob/main/image/bfs%20graph.png">
   </details>
 - Function ```Display_BFS(curr)``` displays BFS sequence of graph, takes parameter curr as starting node.
 - Dry Run :  
   INPUT: 
   ```
   g=[[1,2],[1,4],[2,4],[2,5],[4,7],[4,5],[5,3],[5,1],[5,6],[6,8],[6,3],[8,7]]
   Graph.graph(g) 
   print("Display Graph")
   Graph.ShowGraph()
   print("BFS Sequence")
   Graph.Display_BFS(1)
   ```  
   OUTPUT:  
   ```
   Display Graph
   1 -> [2, 4]
   2 -> [4, 5]
   4 -> [7, 5]
   5 -> [3, 1, 6]
   6 -> [8, 3]
   8 -> [7]
   BFS Sequence
   1 2 4 5 7 3 6 8 
   ```
 - Time complexity of the Algorithm is: `O(V+E)`  where V is the number of vertices and E is the number of Edges
