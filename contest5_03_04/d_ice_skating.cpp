#include<cstdio>
#include<numeric>
#include<vector>
#define SIZE 1001
using namespace std;

int main(){
    int n;
    int x, y;
    vector <int> x_coord(SIZE,0), y_coord(SIZE,0);
    

    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        x_coord[x] = 1;
        y_coord[y] = 1;
    }

    int diff = min(accumulate(x_coord.begin(), x_coord.end(),0),
                    accumulate(y_coord.begin(), y_coord.end(),0));
    if(diff)    printf("%d\n", (diff+1)/2);
    else printf("%d\n", 0);

    return 0;
}
