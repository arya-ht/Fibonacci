#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#pragma warning(disable:4996)
// created by Arya HajiTaheri
#define SIZE 10000
int main(void) {
	FILE *file;
	int arr[SIZE];
	int i = 0;
	file = fopen("10000.dat", "r");
	if (file == NULL) {
		printf("Error: can't open file to read\n");
		return 1;
	}
	while (!feof(file)
		&& (i < SIZE))
	{
		fscanf(file, "%d", &(arr[i++]));
	}
	fclose(file);

	unsigned long  int a, first = 0, next = 0;
	printf("Enter the desired location of arr: to find fibonacci sequence:\n");
	scanf("%d", &a);
	unsigned long  int second = arr[a - 1];
	for (int j = 0; j < 50; j++) {
		next = second + first;
		first = second;
		second = next;
	}									
	printf("Answer: %lu\n", next);
	system("pause");
	return 0;
}
