#include<stdio.h>

#define imax 3
#define jmax 3
#define kmax 2

void swapArray(float *a, float *b, size_t n)
{

for(size_t i=0; i<n; ++i){
int tmp = a[i];
a[i] = b[i];
b[i] = tmp;
}

}

int main()
{

int N = 4;
//float a[N];
//float b[N];

float a[] = {1,2,3,4};
float b[] = {1,1,1,1};

swapArray(a, b, N);

printf("a = ");
for(int i=0; i<N; ++i){
printf("%f ", a[i]);
}
printf("\n");
printf("b = ");
for(int i=0; i<N; ++i){
printf("%f ", b[i]);
}
printf("\n");

/*
float array2d[imax][jmax] ={ {1,2,3},
					 {4,5,6},
					 {7,8,9}
					};
*/

float array2d[imax][jmax] ={ 1,2,3,4,5,6,7,8,9
					};

float new_array2d[imax][jmax] ={ {0,0,0},
					 {0,0,0},
					 {0,0,0}
					};

float array3d[imax][jmax][kmax] = { 1,2,3,4,5,6,7,8,9,10,
	11,12,13,14,15,16,17,18
					};

for(int i=0; i<imax; ++i){
	for(int j=0; j<jmax; ++j){
		for(int k=0; k<kmax; ++k){
			printf("array[%d][%d][%d] = %f\n", i,j,k, array3d[i][j][k] );
			}
		}
	}

ptr_to_array(array2d);
printf("\n");
ptr_to_array3d(array3d);

//swap2d(array2d, new_array2d);

/*
for(int i=0; i<imax; ++i){
	for(int j=0; j<jmax; ++j){
	printf( "new_array2d[%d][%d] = %f\t array2d[%d][%d]=%f\n", 
	i,j, new_array2d[i][j], i,j, array2d[i][j] );
		}
	}
*/

/*
printf("\n");
swap2d_ptr(new_array2d, imax, jmax);
*/

/*
printf("\n");
float *ptr2 = &array2d[0][0];
	for(int j=0; j<imax*jmax; ++j){
		printf("array2d(cell number=%d)  = %f\n", j,  *(ptr2 + j) );
		}
*/
printf("\n");		
swap2d_array_ptr(array2d, new_array2d, imax, jmax);

for(int i=0; i<imax; ++i){
	for(int j=0; j<jmax; ++j){
	printf( "new_array2d[%d][%d] = %f\t array2d[%d][%d]=%f\n", 
	i,j, new_array2d[i][j], i,j, array2d[i][j] );
		}
	}
	
printf("\n");
float *ptr_array2d = &array2d[0][0];

	for(int i=0; i<imax; ++i){	
	for(int j=0; j<jmax; ++j){
printf("array2d[%d][%d] = %f\n", i,j, *((ptr_array2d + i*jmax) +j) );
			}
		}

return 0;

}

void swap2d_array_ptr(float (*arr1), float (*arr2), int lx, int ly)
{
	/*
	float temp;
	temp = *arr1;
	*arr1 = *arr2;
	*arr2 = temp;
	*/
	
	float temp;
	int i, j;
	for(i=0; i<lx; ++i){	
	for(j=0; j<ly; ++j){
		temp = *((arr1+i*ly) +j);
		*((arr1+i*ly) +j) = *((arr2+i*ly) +j);
		*((arr2+i*ly) +j) = temp;
			}
		}
	
}

void swap2d_ptr(float (*arr), int mmax, int nmax )
{
	printf("%d %d\n", mmax, nmax);
	int i, j;
	for(i=0; i<mmax; ++i){	
	for(j=0; j<nmax; ++j){
			printf("array[%d][%d] = %f\n", i,j, *((arr+i*nmax) +j) );
			}
		}
}

void swap2d(float arr[][jmax], float newarr[][jmax])
{
	int i, j;
	float temp;
	for(i=0; i<imax; ++i){
		for(j=0; j<jmax; ++j){
			
			temp = (*arr)[j];
			(*arr)[j] = (*newarr)[j];
			(*newarr)[j] = temp;
			
			}
			arr++;
			newarr++;
			
		}
	
}

void ptr_to_array(float arr[][jmax])
{
	int i, j;
	for(i=0; i<imax; ++i){
		for(j=0; j<jmax; ++j){
			
			printf("%f\t", (*arr)[j]);
			
			}
			arr++;
			printf("\n");
		}
}

void ptr_to_array3d(float arr[][kmax])
{
	int i, j, k;
	for(i=0; i<imax; ++i){
		for(j=0; j<jmax; ++j){
			for(k=0; k<kmax; ++k){
			
			printf("%f\t", (*arr)[k]);
 		       
 		       }
 		       arr++;
			}

			printf("\n");
		}
}
