#include<cstdio>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>> chapters(100,pair<int,int>());
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &chapters[i].first, &chapters[i].second);
    }

    int lastPage;
    scanf("%d", &lastPage);
    int read = 0;
    while(lastPage > chapters[read].second){
        read++;
    }
    printf("%d\n",n-read);
}
