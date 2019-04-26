#include<iostream>

#include<algorithm>

//#include<utility>
#include<vector>
#include<array>

using namespace std;

void swap2d_ptr(float **a, float **b)
{
float *temp = *a;

*a = *b;
*b = temp;
	
}

int main()
{
	int imax = 3;
	int jmax = 3;
	
	float *array1;
	float *array2;
	
	array1 = new float[imax*jmax];
	array2 = new float[imax*jmax];
	
	for(int i=0; i<imax; ++i){
		for(int j=0; j<jmax; ++j){
			int index = i*jmax + j;
			array1[index] = (float)index;
			array2[index] = 0.0;
			}
		}
		
		cout<<"Before swap\n";
		for(int i=0; i<imax; ++i){
		for(int j=0; j<jmax; ++j){
			int index = i*jmax + j;
			cout<< array1[index] <<"  "<< array2[index] << endl;
			}
		}
		
		swap2d_ptr(&array1, &array2);
		
		std::swap(array1,array2);
		
		cout<<"After swap \n";
		for(int i=0; i<imax; ++i){
		for(int j=0; j<jmax; ++j){
			int index = i*jmax + j;
			cout<< array1[index] <<"  "<< array2[index] << endl;
			}
		}
	
	float a[3]={1,2,3};
	float b[3]={0,0,0};
		
		std::swap(a,b);
		int nsize = sizeof(a) / sizeof(a[0]);
		for(int i=0; i<nsize; ++i){
			cout <<a[i]<<" "<<b[i]<<endl;
			}
	
	float a2D[3][3]={1,2,3,4,5,6,7,8,9};
	float b2D[3][3]={0,0,0,0,0,0,0,0,0};
	
	std::swap(a2D,b2D); //yes, swap can swap array!!!
		for(int i=0; i<3; ++i){
			for(int j=0; j<3; ++j){
				cout<<a2D[i][j]<<" "<<b2D[i][j]<<endl;
				}
			}
	
	/*
	float a1 = 10, a2 = 20;
	std::swap(a1,a2);
	cout<< a1 <<" "<< a2 <<endl;
	*/
	
	vector< vector<float> > vector2D_1, vector2D_2;
	
	vector2D_1.resize(imax);
	vector2D_2.resize(imax);
	
	for(int i=0; i<imax; ++i){
		vector2D_1[i].resize(jmax);
		vector2D_2[i].resize(jmax);
		}
	 
	 for(int i=0; i<imax; ++i){
		for(int j=0; j<jmax; ++j){
			int index = i*jmax + j;
			vector2D_1[i][j] = (float)index;
			vector2D_2[i][j] = 0.0;
			}
		}
	 
	 std::swap(vector2D_1, vector2D_2);
	 
	 cout<<"After swap vector container \n";
		for(int i=0; i<imax; ++i){
		for(int j=0; j<jmax; ++j){
			cout<< vector2D_1[i][j] <<"  "<< vector2D_2[i][j] << endl;
			}
		}
	
	/*swap array container*/
	std::array< array<float,3 >, 3> myarray1, myarray2;
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			int index = i*3 + j;
			myarray1[i][j] = (float)index;
			myarray2[i][j] = 0.0;
			}
		}
		
		cout<<"Array object before swap\n";
		for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout<< myarray1[i][j] <<"  "<< myarray2[i][j] << endl;
			}
		}
		std::swap(myarray1, myarray2);
		cout<<"Array object after swap\n";
		for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cout<< myarray1[i][j] <<"  "<< myarray2[i][j] << endl;
			}
		}
	
	
	
}
