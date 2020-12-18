#include<cstdio>

using namespace std;

int main(){
    unsigned long int t;
    unsigned long int n;
    unsigned long int k;
    unsigned long int x;
    unsigned long int pow;

    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        pow = 2;
        for(k = 2; k <= 31; k++){
            pow = pow*2;
            if(n%(pow-1) == 0){
                x = n/(pow -1);
                printf("%d\n",x);
                break;
            }
        }
    }
    return 0;
}
