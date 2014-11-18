#include<stdio.h>
void bubble(int [], int elem);
int main()
{
	int i;
	int a[20] = {10,20,6,3,56,87,67,8,9,7,12,2,5,34};
	bubble(a, 14);
	for(i = 0; i < 14; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
void bubble(int a[], int elem)
{
	int i,j,t;
	for(i= 0; i < elem; i++){
		for(j = 0; j < elem; j++){
			if(a[j] > a[j+1]){
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}
	}
}
