#include<cstdio>
using namespace std;

typedef unsigned long long int ulli;
int main(){
    int q;
    ulli  n;
    ulli ans = 0;
    scanf("%d", &q);
    while(q--){
        scanf("%llu", &n);
        ans = 0;
        while(n != 1){
            if(n%2 == 0){
                n = n/2;ans++;continue;
            }
            if(n%3 == 0){
                n = 2*(n/3);ans++;continue;
            }
            if(n%5 == 0){
                n = 4*(n/5);ans++;continue;
            }
            ans = -1;break;
        }
        printf("%d\n", ans);
    }
    return 0;
}
