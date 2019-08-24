#include <stdio.h>
#include <stdlib.h>
#include "Triplet.h"

void printTriplet(Triplet t){
	printf("begin print triplet!\n");
	for(int i=0;i<3;i++)
		printf("%d\n",t[i]);
}

int main(){
	Triplet t;
	//测试初始化操作
	IniTriplet(t,66,77,88);
	printTriplet(t);
	
	//测试get操作
	int e;
	Get(t,1,e);
	printf("get value is %d\n",e);
	
	//测试DestroyTriplet
	printf("当前分配到的地址:%d\n",t);
	DestroyTriplet(t);
	printf("get value is %d\n",t);
}



