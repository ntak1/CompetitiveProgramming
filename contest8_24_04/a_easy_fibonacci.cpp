#include<cstdio>
#define MOD 100000007
#define MAX 500001

int main(){
    int fibonacci[MAX];
    int t, n;
    
    scanf("%d", &t);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for(int i  = 2; i < MAX; i++){
        fibonacci[i] = (fibonacci[i-1] + fibonacci[i-2])%MOD;
    }
    while(t--){
        scanf("%d", &n);
        printf("%d\n", fibonacci[n]);
    }
    return 0;
}
