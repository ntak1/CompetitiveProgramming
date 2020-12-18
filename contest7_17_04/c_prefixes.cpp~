#include<cstdio>
#include<string>
#include<iostream>

using namespace std;

int main(){
    string input;
    int ans = 0;
    int n;
    scanf("%d\n", &n);
    getline(cin, input);
    
    for(int i  = 0; i < n; i += 2){
       if(input[i] == input[i+1]){
            if(input[i] == 'a')
                input[i+1] = 'b';
            else
                input[i+1] = 'a';
            ans++;
       }
    }

    cout << ans << endl;
    cout << input << endl;
    return 0;
}
