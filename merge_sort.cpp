#include<iostream>
//기본적으로 귀납을 사용 처음에 천제를 분할 이것은 짝수일때 홀수일때 다르다.
//이때 전체를 반으로 나누어 계산하므로 T(n) = 분할 ->2*T(n/2)+결합->c*n이다.
//이 경우 이 merge sort의 높이는 lgn만큼의 크기를 가진다. 2개가 1개의 높이이고
//4개가 2개의 높이라고 하는것이니. 그러므로 T는 lgn만큼의 반복을 가진다.
//이러한 이유로 시간복잡도는 T(n) = O(lgn*n)으로 수렴한다.
using namespace std;

//p는 처음 q는 중간 r을 마지막
//
void printArray(int A[]){
	for(int i=0;i<7;i++){
	cout<<"["<<A[i]<<"]";
	}
	cout<<endl;

}

void merge(int data[],int p,int q,int r){

        int i = p;
        //두번째 배열
        int j = q+1;
        int k = p;
        int tmp[7];
	//절반의 끝
        while(i<=q&&j<=r){
                if(data[i]<=data[j]){
                tmp[k++]=data[i++];
                }else{
                tmp[k++]=data[j++];
                }

        }

        while(i<=q){
        tmp[k++] = data[i++];
        }
        while(j<=r){
        tmp[k++] = data[j++];
        }
        for(i=p;i<=r;i++){
        data[i] = tmp[i];
        }

}


void merge_sort(int A[],int p,int r){
	if(p<r){
		int q = ((p+r)/2);
		merge_sort(A,p,q);
		merge_sort(A,q+1,r);
		merge(A,p,q,r);
		printArray(A);
	}


}

int main(void){
	int arr[7]={9,2,3,1,5,6,7};
	merge_sort(arr,0,6);
}
