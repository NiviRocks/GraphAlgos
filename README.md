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
 - Input should be like ```1,2,3,4,5,None,6,7,None,None,None,8,9``` for graph as below <details><summary>Click Here</summary>  
   <img width="250" height="200" alt="stack" src="https://github.com/NiviRocks/GraphAlgos/blob/main/image/bfs%20graph.jpg">
   </details>
 - Function ```Display_BFS()``` displays BFS sequence of graph.
 - Dry Run :  
   INPUT: 
   ```
   g=[1,2,3,4,5,None,6,7,None,None,None,8,9]
   Graph.addNodes(g)
   Graph.Display_BFS()
   ```  
   OUTPUT:  
   ```
   succesfully added all nodes in graph
   start-> 1 2 3 4 5 None 6 7 None None None 8 9 <-End
   ```
 - Time complexity of the Algorithm is: `O(V^2)`  where V is the number of vertices
