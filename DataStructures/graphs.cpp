#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> ii;
typedef vector <ii> vii;

int main(){
	int V, E, total_neighbors, id, weight, a, b;
	int AdjMat[100][100];
	vector<vii> AdjList;

	priority_queue <pair <int, ii> > EdgeList;
	scanf("%d", &V);

	// ADJACENCY MATRIX
    // It's C style
	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++)
			scanf("%d", &AdjMat[i][j]);
		
	printf("Neighbors of vertex 0\n");
	for (int  j = 0; j < V; j++)
		if (AdjMat[0][j])
			printf("Edge 0-%d (weight = %d)\n", j, AdjMat[0][j]);

    //ADJLIST
    scanf("%d", &V);
    AdjList.assign(V, vii());//quick way to initialize AdjList with V entries of vii

	for (int i = 0; i < V; i++){
        scanf("%d", &total_neighbors);
        for (int j = 0; j < total_neighbors; j++){
            scanf("%d %d", &id, &weight);
            // The node i receives a pair type ii that consists on
            // the id (adjusted) and the weight
            AdjList[i].push_back(ii(id-1, weight)); // id-1: index adjustment
        }
    }
    printf("Neighbors of vertex 0:\n");
    for(vii::iterator j = AdjList[0].begin(); j != AdjList[0].end();j++)
        // AdjList[0] selects the node 0
        // the iterator then runs in the adj list of node 0, which is a vector
        // O(k), where the k is the number of neighbors
        printf("Edge 0-%d (weight - %d)\n", j->first, j->second);

    // EDGELIST
    scanf("%d", &E);
    for (int i = 0; i < E; i++){
        scanf("%d %d %d", &a, &b, &weight);
        EdgeList.push(make_pair(-weight, ii(a,b))); // Trick to reverse sort order
    }

    //edges sorted by weight (Smallest to largest)
    for(int i = 0; i < E; i++){
        // stack behaviour?
        pair<int, ii> edge = EdgeList.top();EdgeList.pop();
        printf("weight %d (%d-%d)\n",-edge.first, edge.second.first, edge.second.second);
    }

    return 0;
}

