#include <iostream>
#include <vector>
#include <list>

template<class T>
T** alloc(int x, int y)
{
	T** v = (T**)malloc(sizeof(T) * x);
	for (int i = 0; i < x; i++)
	{
		v[i] = (T*)malloc(sizeof(T) * y);
	}
	return v;
}
int main()
{

	int** o = (int**)alloc<int>(3, 4);
	o[1][2] = 8;
	printf("%d", o[1][2]);
	return 0;
}