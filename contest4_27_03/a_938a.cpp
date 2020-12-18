#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){
    int n;
    string s;
    string corrected;
    
    scanf("%d\n", &n);
    getline(cin, s);
    bool previous  = false;
    for(int i = 0; i < s.size(); i++){
        switch(s[i]){
            case 'a': case 'e': case 'i': case'o': case'u': case'y':
                if(!previous) corrected.push_back(s[i]);
                previous = true;
                break;
            default:
                corrected.push_back(s[i]);
                previous = false;
                break;
        }
    }

    cout << corrected << endl;

    return 0;
}
