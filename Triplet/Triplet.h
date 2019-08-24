#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int Status;
 
//--定义三元组指针
typedef int * Triplet;
 
//--操作函数声明
Status IniTriplet(Triplet & T,int v1, int v2, int v3);
Status Get(Triplet T, int i, int &e);
Status DestroyTriplet(Triplet &T);

//--操作函数定义
Status IniTriplet(Triplet & T,int v1, int v2, int v3)
{
	T = (int * )malloc(3 * sizeof(int));
	if (! T)
		exit(OVERFLOW);
	T[0] = v1;
	T[1] = v2;
	T[2] = v3;
	return OK;
}

Status Get(Triplet T, int i, int & e) //这里的e是引用传递
{
	if (i < 1 || i > 3)
		return ERROR;
	e = T[i - 1];
	return OK;
}

Status DestroyTriplet(Triplet &T)
{
	free(T);
	T = NULL;
	return OK;
}