#include  <stdio.h>

main(){
	int i, num = 0, a[101];
	for (i = 1; i < 100; ++i)
		a[i] = i;
	for (i = 2; i <= 10; ++i){
		for (int j = i + 1; j <= 100; ++j){
			if (a[j] % i == 0)
				a[j] = 0;
		}
	}
	printf("The prime number in 100 is:");
	for (i = 2; i <= 100; ++i){
		if (a[i] != 0){
			printf("%d\n", a[i]);
			num++;
		}
	}
	printf("\n");
	printf("The total is:\n %d\n", num);
}