#include<cstdio>
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    map < string, int>  dict;
    char ckey[35];
    string key;
    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s",&ckey);
        key = string(ckey);
        if(dict.find(key) == dict.end()){
            dict[key] = 0;
            dict.insert(pair<string, int> (key,0));
            printf("OK\n");
        }
        else{
            dict[key] += 1;
            printf("%s%d\n",ckey,dict[key]);
        }
    }

    return 0;
}
