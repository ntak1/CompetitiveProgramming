#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
typedef vector <int> vi;

int main(){
	int n, k;
	vi numbers;
	int tmp;
	scanf("%d %d\n", &n, &k);
	for(int i = 0; i < n; i++){
		scanf("%d", &tmp);
		numbers.push_back(tmp);
	}	
	sort(numbers.begin(),numbers.end());
    k--;
    int ans;
	if(k >= 0 && k < n  && numbers[k+1] == numbers[k])
		ans = -1;
	else if (k == -1) ans = numbers[0]-1;
    else ans = numbers[k];

    if(ans > 0) printf("%d\n",ans);
    else printf("-1\n");

	return 0;
}
