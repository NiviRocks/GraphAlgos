# GraphAlgos

___
> **Krushkal's Algorithm**  
___
*[Get Code Link Here](https://github.com/NiviRocks/DataStructureAlgorithms/blob/cf6179890712dc5922da9171fa934cdad2510f7b/Krushklals.c)*
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
