#include<cstdio>
#include<vector>
#define WHITE 0
#define BLACK 1
using namespace std;

typedef vector<int> vi;
typedef vector<pair<vi, int>> Graph;


bool dfs_visit(Graph &graph, int node){
    graph[node].second = BLACK;
    bool ret = true;
    if(graph[node].first.size() != 2) ret = false;
    for(int j = 0; j < graph[node].first.size(); j++){
        int node_j = graph[node].first[j];
        if(graph[node_j].second == WHITE){
            if(!dfs_visit(graph,node_j)) ret = false;
        }
    }
    return ret;
}

int dfs(Graph &graph){
    int n_nodes = graph.size();
    int ans = 0;
    for(int i = 0; i < n_nodes; i++){
            graph[i].second = WHITE;
    }

    for(int i = 0; i < n_nodes; i++){
        if(graph[i].second == WHITE){
            if(dfs_visit(graph,i)) ans ++;
        }
    }
    return ans;
}


int main(){
    int n,m;
    int v1,v2;

    scanf("%d %d", &n, &m);
    Graph graph;
    graph.resize(n);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &v1, &v2);
        v1--;v2--;
        graph[v1].first.push_back(v2);
        graph[v2].first.push_back(v1);
    }
    int ans = dfs(graph);
    printf("%d\n", ans);

    return 0;
}
