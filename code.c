#include <stdio.h>

main(){
	char i[100], j;
	gets(i);
	printf("The Ori_text is; %s\n", i);
	for (j = 0; i[j] != '\0'; j++)
		i[j] = i[j] + 26 - j;
	printf("The Enc_text is; %s\n", i);
	
	for (j = 0; i[j] != '\0'; j++)
		i[j] = i[j] - 26 + j;
	printf("The Dnc_text is; %s\n", i);	
}