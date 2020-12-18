#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

typedef vector<int> vi;

int main(){
    int temp;
    int n;
    vi input;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        input.push_back(temp);
    }
    sort(input.begin(), input.end());
    vi aux;
    for(int i = 0; i < n; i++){
        if(i%2 == 1) aux.push_back(input[i]);
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 1){
            input[i] = aux[aux.size() - j -1];
            j++;
        }
    }    
    for(int i = 0; i < n-1; i++) printf("%d ", input[i]);
    printf("%d\n", input[n-1]);
    return 0;
}
