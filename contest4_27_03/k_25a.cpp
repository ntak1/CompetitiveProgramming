#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

typedef vector<int> vi;

int main(void){
    int n;
    int temp;
    int previous;
    int even;

    scanf("%d\n", &n);
    vi numbers(n,0);

    for(int i = 0; i < n; i ++){
        scanf("%d", &numbers[i]);
    }

    previous = numbers[0]%2;
    if(numbers[1]%2 != previous){
        if(previous != numbers[2]%2) even = 0;
        else even = 1;
    }else{
        for(int i = 2; i < n; i++){
            if(numbers[i]%2 != previous){
                even = i; break;
            }
        }
    }

    cout << even + 1 << endl;
    return 0;
}
