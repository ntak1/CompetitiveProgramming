#include <cstdio>
#include<algorithm>
#define MAX 4001
using namespace std;

int main(){
    int max_cut[MAX] = {0};
    int cut_values[3];
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    cut_values[0] = a;
    cut_values[1] = b;
    cut_values[2] = c;

    int index_min = 0;
    for(int i = 0; i < 3; i++){
        if(cut_values[i] < cut_values[index_min]) index_min = i;
    }
    int n_temp = 0;
   max_cut[cut_values[0]] = 1;
   max_cut[cut_values[1]] = 1;
   max_cut[cut_values[2]] = 1;
   bool perform = true;
   int k = 0;
    for(int i = 0; i < n+1; i++){
        if(max_cut[i] != 0 && n_temp!= i){
            n_temp = i;
            perform = true;
        }
        else if (i != 0) perform = false;
        for(int j = 0; j< 3; j++){
            if (perform && n_temp + cut_values[j] <= n)
                max_cut[n_temp + cut_values[j]] = 
                    max(max_cut[n_temp + cut_values[j]], max_cut[n_temp]+1);
        }
    }

   // int index_max = 0;
   // for(int i = 0; i < n+1; i++){
   //     printf("%d ", max_cut[i]);
   // }
   // printf("\n");
    printf("%d\n", max_cut[n]);

}
