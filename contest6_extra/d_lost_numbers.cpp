#include<cstdio>

int main(){
    int a[7];
    printf("? 1 2\n");fflush(stdout);
    scanf("%d %d", &a[1], &a[2]);
    printf("? 3 4\n");fflush(stdout);
    scanf("%d %d", &a[3], &a[4]);
    printf("? 5 6\n");fflush(stdout);
    scanf("%d %d", &a[5], &a[6]);

    printf("! %d %d %d %d %d\n", a[1], a[2], a[3],a[4],a[5],a[6]);
    fflush(stdout);

    return 0;
}
