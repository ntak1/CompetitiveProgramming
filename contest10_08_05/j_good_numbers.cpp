#include<cstdio>
#include<vector>

using namespace std;

int main(){
    int t;
    int n = 20000;
    vector<int> powers;
    vector<int> dp(n+1);
    scanf("%d", &t);

    int pow = 1;
    int exp = 0;
    while(pow < n*9){
        powers.push_back(pow);
        pow = pow*3;
    }
    
    exp = 0;
    for(int i = 0; i < n; i++){
        if(i == powers[exp]){
            dp[i] = powers[exp];
            exp ++;
        }
        else if(i < powers[exp] && i > powers[exp-1]){
            if(dp[i - powers[exp-1]] == i - powers[exp-1]
               && (i-powers[exp-1] < powers[exp-1])){
                dp[i] = i;
            }else{
                dp[i] = -1;
            }
        }
    }

    while(t--){
        scanf("%d", &n);
        while(dp[n] == -1 && n < 20000) n++;
        printf("%d\n", dp[n]);
    }
    return 0;
}
