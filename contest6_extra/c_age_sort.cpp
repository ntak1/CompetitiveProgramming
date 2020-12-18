#include<cstdio>
#define MAX_SIZE 101
using namespace std;

typedef long long int lli;

int main(){
    lli n =0;
    int ages[MAX_SIZE] = {0};
    int temp, last = 0, ocourences;
   
    while(true){
        scanf("%d", &n);
        if(!n) break;
        for(lli i = 0; i < n; i++){
            scanf("%d", &temp);
            ages[temp]++;
        }
        for(int j = 99; j > 0; j--){
            if(ages[j]){
                last = j;
                break;
            }
        }
        for(int j = 0; j <= last; j++){
            while(ages[j]){
                if(j == last && ages[j] == 1){printf("%d", last);}
                else printf("%d ", j);
                ages[j]--;

            }
        }
        printf("\n");
    }
    return 0;
}
