#include<cstdio>

using namespace std;

int main(){
    int n;
    int max_seq = 0;
    int seq = 0;

    scanf("%d", &n);
    int previous;
    int temp;
    scanf("%d", &previous);
    while(--n){
        scanf("%d", &temp);
        if(temp >= previous) seq++;
        else{
            seq = 0;
        }
        if(seq > max_seq) max_seq = seq;
        previous = temp;
    }
    printf("%d\n", max_seq+1);
    return 0;
}
