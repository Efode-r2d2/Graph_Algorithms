/*
	Author: Efriem Desalew, efidesalew@gmail.com 
	Desc: A program on how to represent a graph in adjacebcy matrix
	Compilong: g++ -o [object file name] [source filename]
	Running: ./[object file name]
*/
#include<iostream>

using namespace std;
/* adjacency matrix to represent a graph */
bool ** array;
/* initializing the matrix */
void init(int nodes);
/* displaying the graph */
void disp(int nodes);
int main()
{
	int x,y,nodes,edges;
	/* Accepting the number of nodes from the user */
	cout<<"Enter Number of Nodes \n";
	cin>>nodes;
	/* Dynamic memory allocation for 2D arrays */
	array = new bool * [nodes];
	for(int i=0;i<nodes;i++){
		array[i]= new bool [nodes];
	}
	/* Initailizing the nodes */
	init(nodes);
	/* Accepting the number of nodes from the user */
	cout<<"Enter Number of Edges \n";
	cin>>edges;
	/* Accepting inputs from the user */
	for(int i=0;i<edges;i++){
		cout<<"Enter Edge "<<i+1<<endl;
		cin>>x>>y;
		array[x][y]=true;	
	}
	cout<<"The graph you entered is \n";
	disp(nodes);
	return 0;
}
/* initializing the matrix */
void init(int nodes){
	for(int i=0;i<nodes;i++)
		for(int j=0;j<nodes;j++)
			array[i][j]=false;
}
/* displaying the graph */
void disp(int nodes){
	for(int i=0;i<nodes;i++){
		for(int j=0;j<nodes;j++){
			cout<<array[i][j]<<" ";
		}
	cout<<endl;
	}
}

