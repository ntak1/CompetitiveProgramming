#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x;
    int n_products = 1;

    scanf("%d %d", &n, &x);
    vector<int> prices(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &prices[i]);
    }
    sort(prices.begin(),prices.end());
    for(int i = 1; i < n; i++){
        if(prices[i]+prices[i-1] <= x) n_products++;
        else break;
    }
    printf("%d\n", n_products);
    return 0;
}
