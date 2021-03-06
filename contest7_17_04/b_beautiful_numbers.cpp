#include<cstdio>
#include<bitset>
#include<vector>
#define MAX 200001

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int main(){
    int t, n,i;
    int input[MAX] = {0};
    vii neighbor(2*MAX, ii());
    int indices[MAX] = {0};
    int n_temp;
    bitset<MAX> beautiful;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        i = 1;
        while(i <= n){
            scanf("%d", &n_temp);
            input[i] = n_temp;
            indices[input[i]] = i;
            i++;
        }
        
        beautiful[indices[1]] = 1;
        neighbor[1].first = indices[1]-1;
        neighbor[1].second = indices[1]+1;
        neighbor[0].first = -1;
        neighbor[0].second = -1;
        for(i = 1; i <= n; i++) printf("%d",indices[i]);
        printf("\n");

        for(i  = 2; i <= n; i++){
            if( indices[i] == neighbor[i-1].first){
                neighbor[i].first = indices[i] -1;
                neighbor[i].second = neighbor[i-1].second;
                if(neighbor[i].second - neighbor[i].first == i + 2)
                    beautiful[indices[i]] = 1;
            }
            else if ( indices[i] == neighbor[i-1].second){
                neighbor[i].first = neighbor[i-1].first;
                neighbor[i].second = indices[i]+1;
                if(neighbor[i].second - neighbor[i].first == i + 2)
                    beautiful[indices[i]] = 1;
            }else{
                neighbor[i].first = min(indices[i] - 1, neighbor[indices[i-1]].first);
                neighbor[i].second = max(indices[i] + 1, neighbor[indices[i-1]].second);
            }
        }
        for(i = 1; i <= n; i++) printf("%d",(int)beautiful[i]);
        printf("\n");
    }
    
    return 0;
}
