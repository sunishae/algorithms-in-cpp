// number : 9506
// description : 약수들의 합
// date : 2024.03.28

#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int sum = 0;
	int tmp;
	int cnt;

    for(int i=0; i<N; i++){
		scanf("%d", &tmp);
		cnt = 0;
		for(int j=1; j<=tmp; j++){
			if(tmp % j == 0) cnt++;
		}
		if(cnt == 2){
			sum++;
		}
    }

	printf("%d\n", sum);

    return 0;
}