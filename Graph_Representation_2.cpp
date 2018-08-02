/*
	Author: Efriem Desalew,efidesalew@gmail.com
	Desc: a program on how to reprsent a graph using adjacency list 
	Compiling: g++ -o [object file name] [source file name] 
	Running: ./[object file name]
*/
#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[10];
/* display graph*/
void disp(int nodes);
int main(){
	int x,y,nodes,edges;
	cout<<"Enter number of nodes\n";
	cin>>nodes;
	cout<<"Enter number of edges\n";
	cin>>edges;
	for(int i=0;i<nodes;i++){
		int x=0;
		cout<<"Enter nodes connected to node"<<i+1<<endl;
		do{
			cin>>x;
			adj[i].push_back(x-1);
			cout<<"Enter 0 to move to another node."<<endl;
			cin>>x;
		}while(x!=0);
	}
	/*display graph*/
	cout<<"The graph you entered is \n";
	disp(nodes);
	return 0;
}
/* display graph */
void disp(int nodes){
	for(int i=0;i<nodes;i++){
		cout<<"Node "<<i+1<<":->";
		for(int j=0;j<adj[i].size();j++)
		{
			cout<<adj[i][j]+1<<" ";
		}	
		cout<<endl;
	}
}
