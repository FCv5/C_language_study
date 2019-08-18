#include <stdio.h>

main(){
	int a[6];
	int i, t, m, n = 1;
	int j = 0, k = 1;
	while (k == 1){
		j++;
		if (j < 6){
			printf("Please enter an integer: ");
			scanf("%d", &i);
			a[n] = i;
			printf("The %dth number is: %d\n", j, a[n]);
			n++;
		}
		else
			k = 0;
	}
	for (m = 1; m < 6; m++)
		for (n = 1; n < 6 - m; n++)
			if (a[n] > a[n + 1]){
				t = a[n];
				a[n] = a[n + 1];
				a[n + 1] = t;
			}
	printf("The sort is:\n");
	for (n = 1; n < 6; n++)
		printf("%d\n", a[n]);
		printf("The END\n");
}