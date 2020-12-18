#include<cstdio>
#include<vector>

using namespace std;

typedef vector<int> vi;

int main(){
    int n, t;
    int temp;

    scanf("%d %d\n", &n, &t);
    vi route(n+1);
    for(int i = 1; i < n; i++){
        scanf("%d", &temp);
        route[i] = i + temp;
    }
    int j = 1;
    bool found = false;
    while(true){
        if(route[j] == t){
            found = true;
            break;
        }
        j = route[j];
        if(j > t) break;
    }

    if(found) printf("YES\n");
    else printf("NO\n");
    return 0;
}
