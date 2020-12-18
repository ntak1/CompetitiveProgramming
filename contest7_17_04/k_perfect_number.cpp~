#include<cstdio>

using namespace std;

int main(){
    int k;
    int x, x_temp;
    int s = 0;
    scanf("%d", &k);


    x = 0;
    while(k > 0){
        x_temp = x;
        s = 0;
        while(x_temp){
            s += x_temp%10;
            x_temp = x_temp/10;
        }
        if(s == 10){
            k--;
        }
        x++;
    }

    printf("%d\n", --x);
    return 0;
}
