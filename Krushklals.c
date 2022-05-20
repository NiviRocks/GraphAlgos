#include <stdio.h>

struct graph{
	int u;
	int v;
	int weight;
};
struct graph G[20];
struct graph G_left[20]; //left subgraph of G for sorting
struct graph G_right[20]; //right subgraph of G for sorting
struct graph MST_seq[20];//MST sequence storing

void merge(int n, int left, int mid, int right){
	int n1=mid-left+1,n2=right-mid,i,j,k;

	for(i=0;i<n1;i++){
		G_left[i].u=G[left+i].u;
		G_left[i].v=G[left+i].v;
		G_left[i].weight=G[left+i].weight;
		
	}
	for(j=0;j<n2;j++){
		G_right[j].u=G[mid+1+j].u;
		G_right[j].v=G[mid+1+j].v;
		G_right[j].weight=G[mid+1+j].weight;	
	}
	i=0;j=0;k=left;
	while(i<n1 && j<n2){
		if(G_left[i].weight<=G_right[j].weight){
			G[k].u=G_left[i].u;
			G[k].v=G_left[i].v;
			G[k].weight=G_left[i].weight;
			k++;i++;
		}
		else{
			G[k].u=G_right[j].u;
			G[k].v=G_right[j].v;
			G[k].weight=G_right[j].weight;
			k++;j++;
		}
	}
	while(i<n1){
		G[k].u=G_left[i].u;
		G[k].v=G_left[i].v;
		G[k].weight=G_left[i].weight;
		i++;k++;
	}
	while(j<n2){
		G[k].u=G_right[j].u;
		G[k].v=G_right[j].v;
		G[k].weight=G_right[j].weight;
		j++;k++;
	}
}
void mergeSort( int n, int left, int right){
	if(left<right){
		int mid=(left+right)/2;
		mergeSort(n,left,mid);
		mergeSort(n,mid+1,right);
		merge(n,left,mid,right);
	}
}

int krushkals( int E,int V){
	int i,root[V-1], edge_count=0,mst_val=0;
	int e1,e2,k,c=0;
	//root is used to check circuit or not
	for (i=0;i<V-1;i++){ //initialize root with -1
		root[i]=-1;
	}
	for (i=0;i<E;i++){
		e1=G[i].u;
		e2=G[i].v;
		if (root[e1]==-1 && root[e2]==-1) { //new subtree (never forms circuit)
			root[e1]=e2;
			root[e2]=e2;

			edge_count++;
			mst_val+=G[i].weight;
			//adding u-v edge to MST_seq
			MST_seq[c].u=G[i].u;
			MST_seq[c].v=G[i].v;
			MST_seq[c].weight=G[i].weight;
			c++;
		}
		else if (root[e1]!=root[e2]){ //check circuit
			//adding an isolated edge to subtree
			if (root[e1]==-1) root[e1]=root[e2];
			else if (root[e2]==-1) root[e2]=root[e1];
			else{ //joining 2 subtree
				for (k=0;k<V-1;k++){
					if(root[k]!=root[e1] && root[k]!=-1) root[k]=root[e1]; 
				}
			}
			edge_count++;
			mst_val+=G[i].weight;
			//adding u-v edge to MST_seq
			MST_seq[c].u=G[i].u;
			MST_seq[c].v=G[i].v;
			MST_seq[c].weight=G[i].weight;
			c++;
			if (edge_count==V-1) return mst_val;
		}
	}
}
	
void main() {
	int V,i,mst_result,num_edge;

	printf("Enter number of vertices:");
	scanf("%d",&V);
	printf("Enter number of edges:");
	scanf("%d",&num_edge);
	//Creating undirected graph
	//Taking input for u-v with weight also signifies v-u has the same weight
	printf("Enter sorce node, destination node, weight:");
	for (i=0;i<num_edge;i++){
		scanf("%d %d %d",&G[i].u,&G[i].v,&G[i].weight);
	}
	mergeSort(num_edge,0,num_edge-1);
	
	mst_result=krushkals(num_edge,V);
	printf("The MST sequence is:\n");
	printf("Node\tweight\n");
	for(i=0;i<V-1;i++){
		printf("%d-%d:   %d\n",MST_seq[i].u,MST_seq[i].v,MST_seq[i].weight);
	}
	printf("MST cost is:%d",mst_result);
}
