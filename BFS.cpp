/*
	Author: Efriem Desalew, efidesalew@gmail.com 
	Desc: This Program Demonstarte how to implement Breadth First Search Algorithm
	Compiling: g++ -o [object file name] [source file name]
	Running: ./[object file name]
*/
#include<iostream>
#include<vector>
#include<queue>

using namespace std;
/* used to store the graph */
vector<int> v[10];
/* required to store the level of the nodes*/
int level[10];
/* required to mark if the node is visited or not */
bool vis[10];
/* breadth first search algorithm */
void bfs(int source);
void display(int nodes);
int main(){
	int x,y,nodes,edges;
	/* accepting the number of nodes from the user */
	cout<<"Enter Number of Nodes \n";
	cin>>nodes;
	/* accepting the number of edges from the user */
	cout<<"Enter Number of Edges \n";
	cin>>edges;
	/* accepting the graph from the user */
	for(int i=0;i<nodes;i++){
		int x=0;
		do{
			cout<<"Enter nodes connected to node"<<i+1<<endl;
			cin>>x;
			v[i].push_back(x-1);
			cout<<"Enter 0 to move to another node."<<endl;
			cin>>x;
		}while(x!=0);
	}
	/* displaying the graph accepted from the user */
	display(nodes);
	bfs(0);
	return 0;
}
/* breadth first search algorithm */
void bfs(int source){
	queue<int> q;
	q.push(source);
	/* setting the level of the source as 0 */
	level[source]=0;
	/*setting the source as visited */
	vis[source] = true;
	
	while(!q.empty()){
		int p = q.front();
		q.pop();
		for(int i=0;i<v[p].size();i++){
			if(vis[v[p][i]]==false){
				level[v[p][i]]= level[p]+1;
				q.push(v[p][i]);
				vis[v[p][i]]=true;			
			}
		}
	}
}
void display(int nodes){
	for(int i=0;i<nodes;i++){
		cout<<"Node "<<i+1<<":->";
		for(int j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]+1<<" ";
		}	
		cout<<endl;
	}
}
