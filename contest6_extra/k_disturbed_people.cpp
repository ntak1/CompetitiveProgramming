#include<cstdio>
#include<bitset>
#define MAX_SIZE 101
using namespace std;

int main(){
    int n, i = 0;
    int temp;
    int ans = 0;
    bitset<MAX_SIZE>lights;
    
    scanf("%d\n", &n);
    while(i < n){
        scanf("%d", &temp);
        lights[i++] = temp;
    }

    for(i = 0 ; i < n-2; i++){
        if(lights[i] == 1 && lights[i+1] == 0 && lights[i+2] == 1){
            lights[i+2] = 0;
            ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}
