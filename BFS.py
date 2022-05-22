class Node:
    def __init__(self,data=None):
        self.data=data
        self.right=None
        self.left=None
        
class Graph:
    start=Node()
    queue=[]
    front=0
    def addNodes(item):
        # nodes added in BFS order
        i=0
        curr=Graph.start
        Graph.queue.append(curr) #add start in queue
        while i <len(item):
            if i%2!=0: #left node occur in odd places in BFS
                curr.left=Node(item[i])
                Graph.queue.append(curr.left)
            else:
                #right node occur in even places in BFS
                curr.right=Node(item[i]) 
                Graph.queue.append(curr.right)
            Graph.front+=1   
            #print(Graph.front,Graph.queue)
            curr=Graph.queue[Graph.front]
            i+=1
        Graph.queue=[]
        Graph.front=0
        print("succesfully added all nodes in graph")
    def Display_BFS(curr="start"):
        if curr=="start":
            curr=Graph.start
            Graph.queue.append(curr) #add start to queue
            print("start->",end=" ") 
        # left child   
        if curr.left!=None and curr.left not in Graph.queue:
            Graph.queue.append(curr.left)
        #right child
        if curr.right!=None and curr.right not in Graph.queue:
            Graph.queue.append(curr.right)
        #display data for current node other that start
        if curr!=Graph.start: print(curr.data,end=" ") 
        Graph.front+=1 
        if Graph.front >=len(Graph.queue): 
            print("<-End")
            return
        Graph.Display_BFS(Graph.queue[Graph.front]) #go to next node
    
