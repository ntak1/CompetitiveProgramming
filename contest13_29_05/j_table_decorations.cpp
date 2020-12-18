#include<cstdio>

using namespace std;
inline unsigned long min(unsigned long a,unsigned long b){
    unsigned long m;
    if(a < b) m = a;
    else m = b;
    return m;
}

int main(){
    unsigned long r, g, b;
    scanf("%lu %lu %lu", &r, &g, &b);

    unsigned long ans = 0;
    unsigned long aux = min(r,g);
    unsigned long  m = min(aux,b);
    ans = ans + m;
    
    r = r - m;
    g = g - m;
    b = b - m;

    unsigned long m1, m2;
    if(r == 0UL){
        m1 = g; m2 = b;
    } 
    if(g == 0UL){
        m1 = r; m2 = b;
    }
    if (b == 0UL){
        m1 = r; m2 = g;
    }

    aux = (m1+m2)/3;
    unsigned long aux2 = min(m1,m2);  
    if(m1 != 0UL && m2 != 0UL)
        ans = ans +  min(aux2, aux);
    printf("%lu\n", ans);
    return 0;
}
