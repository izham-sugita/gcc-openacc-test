#include<stdlib.h>
#include<stdio.h>

void swap(int **p2p, int **p2pnew)
{
	int *temp = *p2p;
	*p2p = *p2pnew;
	*p2pnew = temp; /* Meaning? */
}

int main()
{

int imax = 8;

int var;

int *ptr;
int *ptrnew;

int **pptr;

var =1000;

/*ptr take the address of var*/
ptr = &var;	

/* pptr take the address of ptr using &ptr */
pptr = &ptr;

printf(" var = %d\t *ptr = %d\t **ptr = %d\n ", var, *ptr, **pptr);


ptr = (int *)malloc(sizeof(int) * imax );
ptrnew = (int *)malloc(sizeof(int) * imax );
for(int i=0; i<imax; ++i) {ptr[i] = i+1; ptrnew[i] = 0;}
for(int i=0; i<imax; ++i) {printf( "ptr[%d]=%d\t ptrnew[%d]=%d\n", 
	i, ptr[i], i, ptrnew[i] );
	}


swap(&ptr, &ptrnew);
printf("\n");
for(int i=0; i<imax; ++i) {printf( "ptr[%d]=%d\t ptrnew[%d]=%d\n", 
	i, ptr[i], i, ptrnew[i] );
	}
	
}
