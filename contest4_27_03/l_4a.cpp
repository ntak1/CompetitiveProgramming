#include<cstdio>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    if(n%2 == 0 && n > 3) printf("YES\n");
    else printf("NO\n");

    return 0;
}
