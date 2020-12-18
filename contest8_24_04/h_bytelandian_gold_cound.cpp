#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

#define TABLE_SIZE 1000000

unsigned long int trade_coin(unsigned long int n, vector<unsigned long int> &trade){
    unsigned long int splited_value;
    if(n <= TABLE_SIZE) return trade[n];
    else{
        splited_value =   trade_coin(n/2,trade)
                                + trade_coin(n/3,trade)
                                + trade_coin(n/4,trade);
    }
    return max(n,splited_value);
}

int main(){
    unsigned long int n;
    vector<unsigned long int> test(10);
    unsigned long int i = 0, n_tests;
    unsigned long int max_n;

    scanf("%lu", &test[0]);
    max_n = test[0];
    i = 1;
    while(scanf("%d",&test[i]) > 0){
        if(max_n < test[i]) max_n = test[i];
        i++;
    }
    n_tests = i;
    vector <unsigned long int> trade(TABLE_SIZE);

    unsigned long int k = 0;
    for(k = 0; k < 5; k++) trade[k] = k;
    for(k = 5; k <= TABLE_SIZE; k++){
        if(trade[k/2] + trade[k/3] + trade[k/4] <= k) trade[k] = k;
        else trade[k] = trade[k/2] + trade[k/3] + trade[k/4];
    }

    for(i = 0; i < n_tests; i++){
        printf("%lu\n",trade_coin(test[i], trade));
    }

    return 0;
}
