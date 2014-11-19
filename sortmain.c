int b[9];
#include"sorting.h"
#include<stdlib.h>
#define MAX 10

int main()
{
	int a[MAX]={5,4,3,8,1,9,2,7,6,0};
	
	print(a);
	quicksort(a,0,MAX-2);
	print(a);
	return 0;
}

