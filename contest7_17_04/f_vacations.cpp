#include<cstdio>
#define MAX 101
#define REST 0
#define CONTEST 1
#define SPORTS 2
#define BOTH 3

using namespace std;

int main(){
    int input[MAX];
    int max_activities;
    int n;
    int i = 0;
    int today;

    scanf("%d", &n);
    while(i < n)
        scanf("%d", &input[i]),i++;

    if(input[0] == REST){max_activities = 0;}
    else{max_activities = 1;}

    int last_choice = input[0];

    if(last_choice == BOTH){
        if(input[1] == SPORTS){
            input[0] = CONTEST;
            last_choice = CONTEST;
        }
        else if(input[1] == CONTEST){
            input[0] = SPORTS;
            last_choice = SPORTS;
        }
    }
    for(i = 1; i < n; i++){
        today = 1;
        if(input[i] == REST || input[i] == last_choice){
            today = REST;
        }
        last_choice = input[i];
        if(last_choice == BOTH){
            if(input[i-1] == SPORTS){
                input[i] = CONTEST;
                last_choice = CONTEST;
            }
            else if(input[i-1] == CONTEST){
                input[i] = SPORTS;
                last_choice = SPORTS;
            }
        }
        if(today == 0){
            input[i] = 0;
            last_choice = 0;
        }
        max_activities = max_activities + today;
    }
    printf("%d\n", n-max_activities);
    return 0;
}
