// number : 14681
// description : 사분면 판단
// date : 2024.03.28

#include <stdio.h>

int main() {
    int x,y;
	scanf("%d",&x);
	scanf("%d",&y);

    if(x > 0 && y > 0)
		printf("1\n");
    else if(x < 0 && y > 0)
		printf("2\n");
    else if(x < 0 && y < 0)
        printf("3\n");
    else
		printf("4\n");

    return 0;
}
