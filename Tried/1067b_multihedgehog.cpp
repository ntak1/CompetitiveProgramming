#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef vector <int> vi;

int main(){
    // AdjList[i] is a vector of neighbor nodes
	vector<vi> AdjList;
    int n, k;
    int node1, node2;

    // number of vertices and hedgehog parameter
    scanf("%d %d", &n, &k);

    //ADJLIST
    //quick way to initialize AdjList with n entries of vi
    AdjList.assign(n, vi());

	for (int i = 0; i < n-1; i++){
        scanf("%d %d", &node1, &node2);
        AdjList[node1-1].push_back(node2-1); // id-1: index adjustment
        AdjList[node2-1].push_back(node1-1); // id-1: index adjustment
    }

    bool found;
    bool allOne;
    bool kHedgehog = false;
    for (int i = 0; i < n; i++){
        // Find the center
        if(AdjList[i].size() == (k + 1)){
            // Analize the degree of the neighbors
            found = true;
            allOne = true;
            for(int j = 0; j < AdjList[i].size(); j++){
                if(AdjList[AdjList[i][j]].size() == 1){
                    found = false;
                }else{
                    allOne = false;
                }

            }
            if(allOne == true && k == AdjList[i].size()-1){
                kHedgehog = true;
                break;
            }
            if(found){
                // Verify if all the j's neighbor has degree 1'
                for(int j = 0; j < AdjList[i].size(); j++){
                    for(int m = 0; m < AdjList[AdjList[i][j]].size(); m++){
                        int node = AdjList[AdjList[i][j]][m];
                        printf("m = %d\n", m);
                        printf("i = %d Adj[i][j] = %d\n", i+1, AdjList[i][j]+1);
                        printf("node %d size %d\n\n", node+1, AdjList[node].size());
                        if (AdjList[node].size() != 1 && node != i
                            && node != AdjList[i][j]){
                            found = false;
                            break;
                        }
                    }
                    if(!found) break;
                }
                if(found){
                    kHedgehog = true;
                    break;
                }
            }
        }
    }
    if(kHedgehog) printf("Yes\n");
    else printf("No\n");

    return 0;
}

