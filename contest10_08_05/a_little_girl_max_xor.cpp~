#include<iostream>
#include<algorithm>
using namespace std;
typedef unsigned long long int lli;


lli SETBIT( lli  n, int pos){
     lli temp  = (1ULL << (pos));
     temp = temp | (n);
     return temp;
 }
 lli CLEANBIT(lli n, int pos){
    lli temp = (~(1ULL << pos));
    temp = temp & n;
    return temp;
 }


int main(){
    lli a, b,c;
    int i;
    int digitsA[64] = {0}, sizeA = 0;
    int digitsB[64] = {0}, sizeB = 0;
    int digitsR[64] = {0};

    cin >> a;
    cin >> b;
    //cout << a << " " << b << endl;
    if(b > a){
        c = a; a = b; b = c;
    }
    lli auxa2 = a, auxa = a;
    lli auxb2 = b, auxb = b;

    while(a > 0){
        digitsA[sizeA] = a%2;
        a = a/2;
        sizeA++;
    }
    while(b > 0){
        digitsB[sizeB] = b%2;
        b = b/2;
        sizeB++;
    }
    if(sizeA != 0) sizeA--;
    if(sizeB != 0) sizeB--;

    for(int i = sizeA; i >= 0; i--){
        if((digitsA[i]^digitsB[i]) == 0){
            if(digitsA[i] == 0){
                lli temp = SETBIT(auxa2,i);
                if(temp >= auxb && temp <= auxa){
                    auxa2 = temp;
                    digitsA[i] = 1;
                }else{
                    temp = SETBIT(auxb2,i);
                    if(temp >= auxb && temp <= auxa){
                        auxb2 = temp;
                        digitsB[i] = 1;
                    }
                }
            }else if(digitsA[i] == 1){
                lli temp = CLEANBIT(auxa2,i);
                if(temp <= auxa && temp >= auxb){
                    digitsA[i] = 0;
                    auxa2 = temp;
                }else{
                    temp = CLEANBIT(auxb2,i);
                    if(temp <= auxa && temp >= auxb){
                        digitsB[i] = 0;
                        auxb2 = temp;
                    }
                }
            }
        }
        digitsR[i] = digitsA[i]^digitsB[i];
    }
    lli result = 0;
    for(int i = 63; i > 0; i--){
        result += digitsR[i];
        result = result << 1;
    }
    result += digitsR[0];
    cout << result << endl;
    return 0;
}
