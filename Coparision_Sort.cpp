#include<iostream>
using namespace std;


class Radix{

	private:
	int* Que;
	int* tmp;
	int Big;
	public:
	int findBiggest(int *Array,int size);
	void RadixSort(int Array[],int size);
	void printQue(int size);
	
};



int Radix::findBiggest(int *Array,int size){
	int tmp=-1;
	for(int i=0;i<size;i++){
		if(Array[i]>tmp){
			tmp=Array[i];
		}
	}
	Big = tmp; 
	cout<<"천체 숫자중에서 최대는:"<<Big<<endl;
	return Big;
}

/*

void InsertQue(int Array[],int size){
Que = new int[size];
	for(int i=0;i<size;i++){
		Que[i]=Array[i];
	}

}
*/

void Radix::printQue(int size){
	for(int i=0;i<size;i++){
	cout<<"["<<Que[i]<<"]";
	}
	cout<<endl;

}
void Radix::RadixSort(int Array[],int size){
	int Big = findBiggest(Array,size);
	
//	InsertQue(Array,size);
	int decimal=1;
	
	
	while(decimal<Big){
	




	decimal=decimal*10;
	}



	for(int i=1;i<Big;i=i*10){
	//자리수로 큐를 넣기.
	
	

	

//	printQueue();
	}


}

int main(void){
	Radix ra;
	int Array[] ={1,4,3,5,11,12,2,8,19,10};
	//cout<<sizeof(A)/sizeof(int)<<endl;
//	ra.RadixSort(Array,sizeof(Array)/sizeof(int));
	cout<<245%100<<"\n";
}
//Comparision sort, 비교를 통한 알고리즘은 결국 nlgn보다 좋아질 수 없다.
//Non  Comparision sort 정렬한 데이터에 대한 사전 지식을 이용한다.
//Bucket sort,Radix sort.
//bucket sort는 이미 시험 체점과 같은 경우에 유용.
//
//counting sort: n개를 정렬.단 모든 정수는 0~k(사전 지식이 있는것.)
//이때는 비교적 k가 작을때 사용 가능.
//A={2,5,3,0,2,3,0,3}->n=8,k=5->{2,0,2,3,0,1}.0이 2개, 1이 0개.,.. 5가 1개 의 방식 이용
//이것은 결국 {0,0,2,2,3,3,3,5}로 나오는 것이다.i
//raidx sort. n개의 d자리 정수들. 가장 낮은 자리수부터 정렬한다.radix는 큐를 사용하는것이 편하다.
