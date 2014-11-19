#include<stdio.h>
void insertion(int a[], int elem);
int main()
{
	int i, a[10] = {434,76,76,87,6789,3211,3,3456,56,87};
	insertion(a, 11);
	for(i = 0; i < 10; i++)
	printf("%d ", a[i]);
	return 0;
}

void insertion(int a[], int elem)
{
	int i, j, temp;

	for(i = 1; i <= elem;i++){
		temp = a[i]; 
		j = i;
		while (a[j-1] > temp){
			a[j] = a[j-1]; 
			j--;
		}
		a[j] = temp;
	}
}
