#include<iostream>
#include<cmath>
using namespace std;

static int COUNT=0;


bool isPromising(int q[],int n){
for(int i=0;i<n;i++){
if(q[i]==q[n])return false;
if(q[i]-q[n]==(n-i))return false;
if(q[n]-q[i]==(n-i))return false;

}
return true;

}


void queens(int *q,int n,int size){
int N = sizeof(q)/sizeof(int);
	if(n==N){
	COUNT++;
	}else{

		for(int i=0;i<N;i++){
			q[n] = i;
			if(isPromising(q,n)){
				queens(q,n+i,size);
			}
		}
	}

}
void queens_s(int i){
int *q=new int[i];
queens(q,0,i);

}

int main(void){
	for(int i=1;i<14;i++){
	queens_s(i);
	cout<<"level"<<i<<"solution count"<<COUNT<<endl;
	COUNT=0;
	}
	return 0;
}
