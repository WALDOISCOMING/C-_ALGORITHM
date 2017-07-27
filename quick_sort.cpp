#include<iostream>

using namespace std;

//merge sort와 같이 분할- 정복 -합병의 과정이지만 이 분할과 정복이 다르다.
//여기서는 마지막을 pivot(기준)으로 삼는다. pivot위치가 속도에 영향을 끼치지
//않는다고 말 할수없지만 빅오에서 본다면 어디든 같다.
//분할일 때 
//pivot보다 작은것을 앞 큰것ㅇㄹ 뒤로 보낸다. 최악의 경우 전체가 n개라면 
//한쪽에 n-1개로 정렬되는 경우가 최악인 경우이다.
//정복일 때 다시 pivot을 삼고 앞 뒤를 둘다 재귀시킨다.
//
//
static int ARRAY[] = {31,8,48,73,11,3,20,29,65,15};
static int SIZE = 10;

void printArray(){
	for(int i=0;i<SIZE;i++)
			cout<<"["<<ARRAY[i]<<"]";
	cout<<endl;
			
}


int partition(int p,int r){
//이때 r을 pivot이라 생각하고 시작한다.
//무조건 이동은 메모리 낭비. 크고 작은걸 기억해둔 뒤 한다.
int i = p-1;
int j = p;
int tmp;

while(j<r){
	if(ARRAY[j]>=ARRAY[r]){
		j++;
	}
	else{
		i++;
		tmp = ARRAY[j];
		ARRAY[j] = ARRAY[i];
		ARRAY[i] = tmp;
		j++;

	}

	}


   	i++;
        tmp = ARRAY[i];
        ARRAY[i] = ARRAY[r];
        ARRAY[r] = tmp;
        return i;

}

void quickSort(int p,int r){
	if(p<r){
	//피벗 중심으로 크고 작은것을 나눈다.
	int q = partition(p,r);
	quickSort(p,q-1);
	quickSort(q+1,r);
	}

}

int main(void){
	printArray();
	quickSort(0,SIZE-1);
	printArray();
	return 0;
}
