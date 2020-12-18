#include<vector>
#include<iostream>
#include<string>

using namespace std;

bool isEquivalent(string &a, string &b, int la, int ra, int lb, int rb){
    int size = ra -la +1;
    int ma = (ra + la)/2;
    int mb = (rb + lb)/2;
    if(size <= 0) return false;
    if(size == 1 && (a[la] == b[lb])){
        return true;
    }
    else if(size == 1) return false;
    if(a.compare(la,size,b,lb,size) == 0) return true;
    if(size%2 == 1) return false;
    if(isEquivalent(a,b,la,ma,lb,mb) && isEquivalent(a,b,ma+1,ra,mb+1,rb)) return true;
    if(isEquivalent(a,b,la,ma,mb+1,rb) && isEquivalent(a,b,ma+1,ra,lb,mb)) return true;
    return false;
}

int main(){
    string a,b;
    getline(cin, a);
    getline(cin, b);

    if(isEquivalent(a,b,0,a.size()-1,0,b.size()-1)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
