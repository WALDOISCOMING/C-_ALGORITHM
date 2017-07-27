#include<iostream>
using namespace std;

static int ARRAY[6] = {3,6,4,5,1,2};
static int SIZE=6;
void printArray(){
	for(int i=0;i<6;i++){
	cout<<"["<<ARRAY[i]<<"]";
	}
	cout<<endl;
}

void selectionSort(){
int biggest=-1;
int index;
int tmp;
	if(SIZE==0){
	return;
	}
	for(int i=0;i<SIZE;i++){
	if(ARRAY[i]>=biggest){
	biggest = ARRAY[i];
	index=i;
	}	

	}

	tmp = ARRAY[SIZE-1];
	ARRAY[SIZE-1] = ARRAY[index];
	ARRAY[index] = tmp;
	
	

	SIZE--;
	selectionSort();

}
int main(void){
	cout<<"bf sort"<<endl;

	printArray();

	cout<<"af sort"<<endl;

	selectionSort();
	printArray();

	return 0;
}
