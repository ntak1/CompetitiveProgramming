#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

#define SIZE 26
#define MAX_INPUT_SIZE 101
int main(){
	char matrix[SIZE][SIZE];
	string str;

	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			matrix[i][j] = 0;
		}
	}
	int n;
	scanf("%d\n", &n);
	getline(cin, str);
	
	for(int i=0; i<str.size()-1; i++){
		matrix[(int)(str[i]-'A')][(int)(str[i+1]-'A')]++;
		//printf("(%d %d) %d\n", (int)(str[i]-'A'),
		//		(int)(str[i+1]-'A'),
		//		matrix[(int)(str[i]-'A')][(int)(str[i+1]-'A')]);
	}

//	for(int i=0; i<str.size()-1; i++){
//		cout << (int)str[i]-'A';
//	}
	//cout << endl;

	int max_i = 0, max_j = 0;
	int max_oc = 0;
	for(int i = 0; i < SIZE; i++){
		for(int j = 0; j < SIZE; j++){
			if(max_oc < matrix[i][j]){
//				cout << i << " " << j << " " << matrix[i][j] << endl;
				max_oc = matrix[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	
	printf("%c%c\n",(char)(max_i + 'A'),(char)( max_j + 'A'));
	return 0;
}
