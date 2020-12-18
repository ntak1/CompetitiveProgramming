#include<cstdio>

using namespace std;

int main(){
    int h1,m1;
    int h2, m2;
    int h3,m3;
    int min_total1, min_total2,min_total3;
    scanf("%d:%d", &h1,&m1);
    scanf("%d:%d", &h2,&m2);
    min_total1 = m1 + 60*h1;
    min_total2 = m2 + 60*h2;
    min_total3 = (min_total1 + min_total2)/2;
    m3 = min_total3%60;
    h3 = min_total3/60; 
    printf("%02d:%02d\n",h3,m3);
    return 0;
}
