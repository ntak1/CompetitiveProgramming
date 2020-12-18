#include<cstdio>
#include<map>

using namespace std;

int main(){
    map <int, pair< int, int> >  errors;
    int n, temp, val1, val2;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &temp);
        if(errors.find(temp) == errors.end()){
            errors[temp].first = 1;
            errors[temp].second = 0;
        }
        else{
            errors[temp].first += 1;
        }
    }
    for(int i = 0; i < n -1; i++){
        scanf("%d", &temp);
        (errors[temp].second)++;
    }

    for(auto &m:errors){
        if(m.second.first != m.second.second){
            val1 = m.first;
        }
        m.second.first = 0;
    }

    for(int i  = 0; i < n-2; i++){
        scanf("%d", &temp);
        errors[temp].first += 1;
    }
    for(auto &m:errors){
        if(m.second.first != m.second.second){
            val2 = m.first;
        }
        m.second.first = 0;
    }
    printf("%d\n%d\n", val1, val2);
    
    return 0;
}
