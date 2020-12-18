#include<cstdio>
#include<algorithm>
#include<vector>
#define MAX 2001
using namespace std;

int main(){
    int s, n; // capacity and number of items
    int i = 0;
    int size[MAX];
    int value[MAX];
    vector<vector<int>> knapsack(MAX,vector<int>(MAX));

    scanf("%d %d", &s, &n);
    i = 0;
    while(i < n){
        scanf("%d %d", &size[i], &value[i]);
        i++;
    }

    for(int subset = 0; subset <= n; subset++){
        for(int capacity = 0; capacity <= s; capacity++){
            if(capacity == 0 || subset == 0){
                knapsack[subset][capacity] = 0;
            }else{
                if(size[subset-1] > capacity){
                    knapsack[subset][capacity] = knapsack[subset-1][capacity];
                }else{
                    knapsack[subset][capacity] 
                        = max(knapsack[subset-1][capacity],
                          knapsack[subset-1][capacity-size[subset-1]] + value[subset-1]);
                }
            }
        }
    }

    //for(i = 0; i <= n; i++){
    //    for(int j = 0; j <= s; j++){
    //        printf("%2d ", knapsack[i][j]);
    //    }
    //    printf("\n");
    //}

    printf("%d\n", knapsack[n][s]);
    return 0;
}
