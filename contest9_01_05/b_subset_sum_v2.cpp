#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;
#define MAX_INPUT_SIZE 100
#define MAX_SIZE 1000

int main(){
    int t, n;
    int s, ix;
    vector <int> input(MAX_INPUT_SIZE);
    int max_elem;
    int dp[MAX_INPUT_SIZE][MAX_SIZE];

    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        for(int i = 0; i < n; i++){
            scanf("%d", &input[i]);
        }
        max_elem = input[0];
        for(s = 0; s <= max_elem*n; s++){ dp[0][s] = 0;}
        for(int i = 1; i < n; i++){
            if (max_elem < input[i]) max_elem = input[i];
            dp[1][input[i]] = input[i];
        }
        
        for(int k = 2; k <= n; k++){
            dp[k][s] = dp[k-1][s-input[ix]] + dp[]
        }
        int ans = 0;
        for(s = 0; s <= max_elem*n; s++){
            if(dp[s] != 0) ans += s;
            printf("%d ", dp[s]);
        }
        printf("\n%d\n", ans);
        
    }
    return 0;
}
