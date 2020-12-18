#include<cstdio>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>

using namespace std;
typedef vector<int> vi;
typedef vector<pair<int, vi>> vii;

int bfs (vii &tree, int source = 0){
    int distance = 0;
    tree[source].first = 0;
    queue<int> q;
    q.push(source);
    int ans = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        vi adjList = tree[node].second;
        distance++;
        for(int i = 0; i < adjList.size(); i++){
            if(tree[adjList[i]].first == INT_MAX){
               tree[adjList[i]].first = tree[node].first+1;
                q.push(adjList[i]);
                ans = max(tree[node].first+1,ans);
            }
        }
    }
    return ans;
}

int longest_path(vii &tree){
    int max_distance = bfs(tree);
    int new_source = -1;
    for(int i = 0; i < tree.size(); i ++){
        if(max_distance == tree[i].first){
            new_source = i;
            break;
        }
    }
    for(int i = 0; i < tree.size(); i++){
        tree[i].first = INT_MAX;
    }
    max_distance = bfs(tree, new_source);
    return max_distance;
}


int main(){
    int n;
    
    scanf("%d", &n);
    vii tree;
    tree.assign(n, pair<int,vi>());
    if(n <= 1){
        printf("%d\n", 0);    
    }
    else{
        for(int i = 0; i < n -1; i++){
            int node1, node2;
            scanf("%d %d", &node1, &node2);        
            tree[node1-1].second.push_back(node2-1);
            tree[node2-1].second.push_back(node1-1);
        }
        for(int i = 0; i < tree.size(); i++){
            tree[i].first = INT_MAX;
        }
        int long_path = longest_path(tree);
        printf("%d\n", long_path);
    }
    return 0;
}
