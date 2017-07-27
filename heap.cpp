#include<iostream>
using namespace std;




class Heap{
private:
int mSize;
int mHeight;

int *mArr;


public:

	void Insert(int index,int value);
	void HeapSort(int index,int value);	
	void HeapPrint();
	Heap(){
		mSize=4;
		mArr= new int[mSize];
		mArr[0]=0;mArr[1]=0;mArr[2]=0;mArr[3]=0;	
		HeapPrint();
	}
	~Heap(){
		delete []mArr;
	}

};

void Heap::HeapPrint(){
	for(int i=0;i<mSize;i++){
	//if(mArr[i]<10)
		cout<<"["<<mArr[i]<<"]";
	}
	cout<<endl;
}


void Heap::Insert(int index,int value){
	if(index>=mSize){
	int* tmp = new int[mSize];
	int j = mSize;
	for(int i=0;i<mSize;i++){
	tmp[i] = mArr[i];
	}
	
	mSize=mSize*2;
	mArr = new int[mSize];


  	for(int i=0;i<mSize;i++){
        if(i<j){
	mArr[i] = tmp[i];
	}
	else{
	mArr[i] = 0;
	}
        }
	
	
	}

	//현 위치와 root를 비교한다.
	mArr[index] = value;
	HeapSort(index,value);
}



void Heap::HeapSort(int index,int value){
	HeapPrint();	
	
	if(index==0){
	return;
	}
	int parent = index%2==0?parent=(index/2)-1:(index/2);
	if(mArr[parent]<value){
	value = mArr[parent];
	mArr[parent] = mArr[index];
	mArr[index] = value;
	HeapSort(parent,mArr[parent]);
	}

}





int main(void){


Heap heap;
heap.Insert(0,2);
heap.Insert(1,9);
heap.Insert(2,6);
heap.Insert(3,4);
heap.Insert(4,7);

return 0;
}
