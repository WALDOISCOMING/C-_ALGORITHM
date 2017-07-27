#include<iostream>

using namespace std;

static int ARRAY[6]={5,6,2,4,3,1};

void printArray(int size){
	for(int i=0;i<size;i++){
		cout<<"["<<ARRAY[i]<<"]";
}

}
void bubbleSort(int size){

for(int i=0;i<size-1;i++){
	for(int j=i+1;j<size;j++){
	if(ARRAY[i]>=ARRAY[j]){
		int tmp = ARRAY[i];
		ARRAY[i] = ARRAY[j];
		ARRAY[j] = tmp;

	}
	}

}


}

int main(void){

	cout<<"bf bubble sort"<<endl;


	printArray(6);
	bubbleSort(6);

	cout<<"af bubble sort"<<endl;
	printArray(6);

	return 0;
}
