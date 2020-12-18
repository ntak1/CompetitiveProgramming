#include<iostream>
#include<cstdio>
#include<bitset>
#include<vector>
#define MAX_SIZE 100001

using namespace std;

int main(){
	bitset<MAX_SIZE> present;
	//for(int j =0; j < MAX_SIZE; j++) present[j] = 0;
	int x;
	// Read input	
	int n = 0;
	cin >> n;
	int i = 0;
	int wait = n;
	int k;
	while(i<n){
		scanf("%d", &x);	
		present[x] = 1;
		if(x == wait){
			while(present[wait] == 1 && wait > 0){
				if(wait > 0 && present[wait-1] == 1)
					printf("%d ", wait);
				else{printf("%d", wait);}
				wait--;
			}
			printf("\n");
		}else{printf("\n");}
		i++;
	}
	return 0;
}
