#include<cstdio>
#include<iostream>
using namespace std;
int reverse(int num){
    int temp = num;
    int i = 0;
    int digits[50];
    while(temp != 0){
        digits[i] = temp%10;
        temp = temp/10;
        i++;
    }
    i--;
    int pow = 1;
    int reversed = 0;
    while(i >= 0 && digits[i] == 0){
        i--;
    }
    while(i >= 0){
        reversed += (pow*digits[i]);
        pow = pow*10;
        i--;
    }
    return reversed;

}
int main(){
    int n;
    int a, b;
    int aReversed, bReversed;
    int digits[50];
    int i = 0;
    bool flag;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        int aReversed = reverse(a);
        int bReversed = reverse(b);
        int result = reverse(aReversed+bReversed);
        printf("%d\n", result); 
    }
    return 0;
}
