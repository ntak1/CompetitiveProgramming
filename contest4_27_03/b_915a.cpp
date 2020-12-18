#include<cstdio>
#include<iostream>
using namespace std;

int main(){

    int n, k, temp = 0, i = 0;
    int max_div = -1;

    scanf("%d %d", &n, &k);

    do{
        scanf("%d", &temp);
        if(temp > max_div && k%temp == 0){max_div = temp;}
        i++;
    }while(i < n);

    int hours = k /max_div; 
    cout << hours << endl;
    return 0;
}
