#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int Status;
 
//--������Ԫ��ָ��
typedef int * Triplet;
 
//--������������
Status IniTriplet(Triplet & T,int v1, int v2, int v3);
Status Get(Triplet T, int i, int &e);
Status DestroyTriplet(Triplet &T);

//--������������
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

Status Get(Triplet T, int i, int & e) //�����e�����ô���
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