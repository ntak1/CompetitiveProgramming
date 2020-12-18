#include<cstdio>
#include<vector>
#include<numeric>
#include<algorithm>
#define WHITE 0
#define BLACK 1

using namespace std;

typedef struct Node{
    int id;
    int value;
    char color;
    vector<Node *> adj_list;
} Node;

typedef struct Graph{
    vector<Node> nodes_list;
    vector<int> indices;
}Graph;

template <typename Node>
vector<int> sort_indices(const vector <Node> &v){
    vector<int> idx(v.size());
    iota(idx.begin(), idx.end(), 0);
    sort(idx.begin(),idx.end(),
        [&v](int i1, int i2){return v[i1].value > v[i2].value;});
    return idx;
}

int destroy_toy(Graph &graph){
    int cost = 0;
    int node_id;
    // Sort in decreasing order of value
    graph.indices = sort_indices(graph.nodes_list);
    for(int i = 0; i < graph.indices.size(); i++){
        node_id = graph.indices[i];
        graph.nodes_list[node_id].color = BLACK;
        for(int j = 0; j < graph.nodes_list[node_id].adj_list.size(); j++){
            if(graph.nodes_list[node_id].adj_list[j]->color == WHITE)
                cost += (graph.nodes_list[node_id].adj_list[j]->value);
        }
    }
    return cost;
}

int main(){
    int n, m;
    int v1, v2;
    int value;
    Graph graph;
    Node aux_node;

    scanf("%d %d", &n, &m);
    
    graph.nodes_list.assign(n,Node());

    int i  = 0;
    while(i < n){
        scanf("%d", &value);
        aux_node.id = i;
        aux_node.value = value;
        aux_node.color = WHITE;
        graph.nodes_list[i] = aux_node;
        i++;
    }

    i = 0;
    while(i < m){
        scanf("%d %d", &v1, &v2);
        graph.nodes_list[v1 -1].adj_list.push_back(&(graph.nodes_list[v2-1]));
        graph.nodes_list[v2 -1].adj_list.push_back(&(graph.nodes_list[v1-1]));
        i++;
    }

    int cost = destroy_toy(graph);
    printf("%d\n",cost);
    return 0;
}
