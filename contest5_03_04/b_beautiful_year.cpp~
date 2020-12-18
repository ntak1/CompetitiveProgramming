#include<cstdio>
using namespace std;

int main(){
    int n,ans,ans1;
    char present[10] = {0};
    bool found;
    scanf("%d", &n);
    n ++; 
    for(ans = n; ans <= 9012; ans++){
        for(int i = 0; i < 10; i++) present[i] = 0;
        found = true;
        ans1 = ans;
        while(ans1){
            if(present[ans1%10] == 1){
                found = false;
                break;
            }
            present[ans1%10] = 1;
            ans1 /= 10;
        }
        if(found) break;
    }
    printf("%d\n", ans);

    return 0;
}
