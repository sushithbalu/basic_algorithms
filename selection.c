#include<stdio.h>
void selection(int a[], int elem);
int main()
{
	int i;
	int a[10] = {324, 54, 7, 112122, 121, 323, 99, 33, 111, 1};

	selection(a, 10);
	for(i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}

void selection(int a[], int elem)
{
	int i, j, temp, min;
	for(i = 0; i < elem; i++){
		min = i;
		for(j = min + 1; j < elem; j++){
			if(a[min] > a[j]){
				temp = a[j]; 
				a[j] = a[min]; 
				a[min] = temp;
			}
		printf("%d ", a[j]);
		}
		printf("\n");
	}
}

