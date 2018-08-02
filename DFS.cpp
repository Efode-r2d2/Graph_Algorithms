/*
	Author: Efriem Desalew, efidesalew@gmail.com
	Desc: this program implement iterative based depth first search algorithm 
	Compiling: g++ -o [object file name] [source file name] 
	Running: ./[object file name]
*/
#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[10];
bool visited[10];
/* depth first search algorithm */
void dfs(int s);
/* initialize visited */
void init();
int main(){
	int x,y,nodes,edges,connectedComponents=0;
	cout<<"Enter Number of Nodes \n";
	cin>>nodes;
	cout<<"Enter Number of Edges \n";
	cin>>edges;
	for(int i=0;i<10;i++){
		cin>>x>>y;
	adj[x].push_back(y);                   //Edge from vertex x to vertex y
	adj[y].push_back(x); 
	}
	init();
		for(int i = 1;i <= nodes;++i) {
         if(visited[i] == false)     {
             dfs(i);
             connectedComponents++;
         }
        }
        cout << "Number of connected components: " << connectedComponents << endl;
	return 0;
}
/* depth first search algorithm */
void dfs(int s){
	visited[s]=true;
	for(int i=0;i<adj[s].size();i++){
		if(visited[adj[s][i]]=false)
			dfs(adj[s][i]);	
	}
}
/* initialize visited */
void init(){
	for(int i=0;i<10;)
		visited[i]=false;
}
