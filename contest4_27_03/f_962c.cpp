#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
#define INF 1000000
using namespace std;


int makeSquare(int n,int op){
    // If the number has only one digit (and it is not 0), to be a perfect square
    if(n/10 == 0){
        if(n == 1 || n == 4 || n == 9) return op;
        return -1;
    }

    // Else if the number is a perfect square
    double root = sqrt(n);
    int iroot = (int)root;
    if(iroot*iroot == n) return op;

    // Else, test the numbers formed by deleting some digit
    char nscopy[14];
    int minop = INF;
    int temp = 0, temp1 =0;
    string ns = to_string(n);
    for(int i = 0; i < ns.size(); i++){
        int k = 0;
        temp = temp1 = 0;
        for(int j = 0; j < ns.size(); j++)
            if(i != j){ nscopy[k++] = ns[j]; }
        nscopy[k] = 0;

        k=0;
        while(nscopy[k++] == '0') temp1++;
        
        temp = makeSquare(atoi(nscopy), op);
        if(temp >= 0 && temp < minop)  minop = temp + temp1+ 1;
    }
    if(minop != INF) return minop;
    return -1;
}


int main(){
    int n;
    scanf("%d", &n);
    cout << makeSquare(n,0) << endl;
    return 0;
}
