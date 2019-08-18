#include <stdio.h>

main(){
	int array[16][16];
	int i, j, k, m, n;
	/*变量初始化*/
	m = 1;
	while (m == 1){
		printf("Please input n(0 < n <= 15), n is odd number\n");
		scanf("%d", &n);
	/*判断n是否是大于0小于等于15的奇数*/
		if ((n != 0) && (n <= 15) && (n % 2 != 0)){
			printf("The square is %d\n", n);
			m = 0;
		}
	}
	/*数组赋值为0*/
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			array[i][j] = 0;
	/*建立魔方阵*/
	j = n / 2 + 1;
	array[1][j] = 1;
	for (k = 2; k <= n * n; k++){
		i--;
		j++;
		if ((i < 1) && (j > n)){
			i = i + 2;
			j--;
		}
		else{
			if (i < 1)
				i = n;
			if (j > n)
				j = 1;
		}
		if (array[i][j] == 0)
			array[i][j] = k;
		else{
			i = i + 2;
			j--;
			array[i][j] = k;
		}
	}
	/*输出魔方阵*/
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++)
		printf("%5d", array[i][j]);
	printf("\n");	
	}
}