#include<cstdio>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

typedef vector<int> vi;

void dp_sum(vector<int> &input){
    int k;
    int s;
    int n = input.size();
    int total = accumulate(input.begin(), input.end(),0);
    vector <vector<int>> mask(input.size(),vector<int>(total+1,0));
    vi dp(total+1,0);
    for(k = 0; k < n; k++){
        for(s = total; s >  0; s--){
            if(s  >=  input[k]){
                // Verify if the sum s can be formed
                if(s == input[k]
                    || (s-input[k] >= 0
                        && dp[s - input[k]] == 1
                        && (mask[k][s] == 0 || mask[k][s-input[k]] == 0))){
                    //printf("s = %d input[%d] = %d\n", s, k, input[k]);fflush(stdout);
                    dp[s] = 1;
                }
            }
        }
    }
    int ans = 0;
    for(s = 0; s <= total; s++){
        if(dp[s] == 1){
           // printf("%d ", s);
            ans += s;
        }
    }
    //printf("\n%d\n", ans);
    printf("%d\n", ans);
}

int main(){
    int t, n;
    int s;

    scanf("%d", &t);
    while(t--){
        scanf("%d",&n);
        vector <int> input(n);
        for(int i = 0; i < n; i++){
            scanf("%d", &input[i]);
        }
        dp_sum(input);
    }
    return 0;
}
