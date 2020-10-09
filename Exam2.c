#include <stdio.h>
int main(int argc, char const *argv[])
{
	 int arr[10], i, j, tmp[10];

	 for(i = 0; i < 10; i++)
	 {
	 	printf("Number No.%d\n", i + 1);\
	 	scanf("%d", &arr[i]);
	 }

	 for(i = 0, j = 9; i < 10; i++, j--)
	 {
	 	tmp[j] = arr[i];
	 }
	 printf("\nResult: ");
	 for(i = 0, j = 0; i < 10; i++, j++)
	 {
	 	arr[i] = tmp[i];
	 	printf("%d  ", arr[i]);
	 }
	return 0;
}