#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    int r,g,b;
    scanf("%d", &t);
    vector<int> options(3);
    int ans;
    while(t--){
        scanf("%d %d %d", &r, &g, &b);
        options[0] = r, options[1] = g; options[2] = b;
        sort(options.begin(),options.end());
        if(r == 0 && g == 0 && b == 0) ans = 0;
        else if(r ==1 && g == 1 && b == 1) ans = 1;
        if(options[2] >= options[1] + options[0]){
            ans = options[1]+options[0];
        }else{
            ans = (options[2]+options[1] + options[0])/2;
        }
        cout << ans << endl;
    }
    return 0;
}

