#include<stdio.h>

#define SIZE 50

void shift_elements(int *arr, i);
void insertion_sort(int *arr, int len);
void swap(int *i1, int *i2);

int main()
{
int *arr;
for(int i=0; i<SIZE; i++)
{
scanf("%d\n", &(arr+i));
}
insertion_sort(*arr, SIZE);
for(int i=0; i<SIZE; i++)
{
printf("%d,", (arr+i));
}
return 0;
}

void shift_elements(int *arr, i)
{
while(i>=0)
{
swap(*(arr+i),*(arr+i+1));
i--;
}
}

void swap(int *i1,int *i2)
{
int *temp = i1;
*i1=i2;
*i2=temp;
}

insertion_sort(int *arr, int len)
{
int i=0;
int counter = 0;
for(i=0; i<len; i++)
{
counter = 0;
	for(int j = i; j>0; j--)
	{
	if(arr+i < arr+j)
	{
		counter++;
	}
	}
shift_elements(*(arr+i), counter);
}
}














