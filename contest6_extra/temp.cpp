#include<cstdio>
using namespace std;

int main(){
    int n = 2;
    int i = 0;
    int a[10];
    while(n--){
       scanf("%d", &a[i++]);
    }

    printf("%d\n%d\n", a[0], a[1]);
    int test = 42;
    printf("%d\n",test);

    return 0;
}
