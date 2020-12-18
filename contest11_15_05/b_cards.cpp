#include<iostream>
#include<string>

using namespace std;

int countOnes(string &str){
    int ans = 0;
    for(auto x: str){
        if((x) == 'n'){
            ans++;
        }
    }
    return ans;
}
int countZeros(string &str){
    int ans = 0;
    for(auto x: str){
        if((x) == 'z') ans++;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    getline(cin, str);
    int ones = countOnes(str);
    int zeros = countZeros(str);
    
    for(int i = 0; i < ones-1; i++){
        cout << "1 ";
    }
    if(ones -1 >= 0 && zeros == 0) cout << "1";
    else if(ones -1 >= 0 && zeros > 0) cout << "1 ";
    
    for(int i = 0; i < zeros -1; i++){
        cout << "0 ";
    }
    if(zeros -1 >= 0) cout << "0";
    cout << endl;
    return 0;
}
