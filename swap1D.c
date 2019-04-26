#include<stdio.h>
#include<stdlib.h>


void swap(float **f, float **fn)
{
	float *tmp = *f;
	*f = *fn;
	*fn = tmp;
}

int main()
{

int imax = 8;

float *arr1;
float *arr2;

arr1 = (float *)malloc(imax*sizeof(float));
arr2 = (float *)malloc(imax*sizeof(float));


printf("Before swap\n");
for(int i=0; i<imax; ++i){
	arr1[i] = (float)(i+1);
	arr2[i] = 0.0;
printf("arr1[%d] = %f\t arr2[%d] = %f\n", i, arr1[i], i, arr2[i]);
	}


printf("\n");
swap(&arr1, &arr2); /*Magic! How does it work?*/

printf("After swap\n");
for(int i=0; i<imax; ++i){
printf("arr1[%d] = %f\t arr2[%d] = %f\n", i, arr1[i], i, arr2[i]);
	}


free(arr1);
free(arr2);


return 0;
	
}
