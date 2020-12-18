#include<cstdio>
#include<vector>
#include<numeric>
#define SIZE 101

using namespace std;
typedef vector <int> vi;

int main(){
    int n, k;
    int temp;
    vi scores(SIZE, 0);
    vi students(SIZE,0);

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(scores[temp] == 0) students[i] = 1;
        scores[temp] = 1;
    }

    int sum  = accumulate(scores.begin(), scores.end(), 0);
    if(sum < k) printf("NO\n");
    else{
        printf("YES\n");
        int j = 0;
        int m = 0;
        while(m < k-1 && j < SIZE){
            if(students[j] == 1){
                printf("%d ", j+1);
                m ++;
            }
            j++;
        }
        while(j < SIZE){
            if(students[j] == 1){
                printf("%d", j+1);
                break;
            }
            j++;
        }
    }

    return 0;
}
