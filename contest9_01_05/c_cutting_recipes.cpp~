#include<stdio.h>
#define MIN(x,y) (x) < (y) ? (x): (y)

int gcd (int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a > b)  return gcd(a%b, b);
    else       return gcd(a, b%a); 
}

int main(){
    int t;
    int n;
    int input[51];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &input[i]);
        }
        int min_gcd = input[0];
        for(int i = 1;i < n; i++){
            min_gcd = MIN(min_gcd, gcd(min_gcd, input[i]));
        }
        if(min_gcd == 0) min_gcd = 1;
        for(int i = 0; i < n-1; i++) printf("%d ", input[i]/min_gcd);
        printf("%d\n", input[n-1]/min_gcd);
    }
    return 0;
}
