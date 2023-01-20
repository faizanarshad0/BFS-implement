#include<iostream>
#include<queue>
using namespace std;

const int max_node=20;

bool graph[max_node];

int u;

bool visited[max_node];
void BFS(int i)
{int q;
	visited[i]=1;
	 q.enqueue(i);
	while(!q.is empty())
	{
		int current=q.front;
		cout<<current" "<<endl;
		u=q.dequue();
		
		for(int i=0;i<n;i++)
		if(graph[u][v]==1&&visited[v]==0)
		{
			q.enqueue(v);
			visited[i]=1;
		}
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
	  for(int j=0;j<n;j++)
	  {
	  	cin>>graph[i][j];
	  }
	}
	
	BFS(0);
	
	return 0;
}
