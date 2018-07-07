#include <bits/stdc++.h>
using namespace std;

typedef long long int llint;
typedef size_t ullint;

// Prim's algorithm to find the minimum spanning tree in a connected graph
// using adjacency list representation

const long long int MAX = 1e9 + 7;

// Note that the index of each vertex counts from 0.

struct edge
{
	llint weight, targetVertex;
	// for each vertex
	// its adjacency list entry will contain informations about its neighbour(s)
	// including the weight of the edge(s) connecting them
};

vector <vector <edge> > adjacencyList;

main()
{
	llint verticesCount; cin >> verticesCount;
	
	// prepare adjacency list
	adjacencyList.resize(verticesCount);

	for (llint i = 0 ; i <= verticesCount - 1 ; i++)
	{
		llint neighbour_count; cin >> neighbour_count;
		while (neighbour_count--)
		{
			// edge between vertex[i] and vertex[push.targetVertex] with weight = push.weight
			edge push; cin >> push.targetVertex >> push.weight;
			adjacencyList[i].push_back(push);
		};
	};
}