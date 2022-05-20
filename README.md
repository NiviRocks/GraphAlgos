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
