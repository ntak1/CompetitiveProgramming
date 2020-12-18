#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;
typedef vector <int> vi;

bool bk(int n, vi &digits){
    bool ret;
    //cout << n << endl;
    if(n == 0){
        ret =true;
    }else if (n < 0) ret = false;
    else{
        if(bk(n-7, digits)){
            digits.push_back(7);
            ret= true;
        }else if (bk(n -4, digits)){
            digits.push_back(4);
            ret = true;
        }else {ret = false;}
    }
    return ret;
}
int main(){
    vi digits;
    int n;
    bool ans = false;
    scanf("%d", &n);
    if(n != 0)
        ans = bk(n, digits);
    if(ans){
        sort(digits.begin(), digits.end());
        for(int i  = 0; i < digits.size(); i++){
            cout << digits[i];
        }
        cout << endl;
    }else{
        cout << "-1" << endl;
    }
    return 0;
}
