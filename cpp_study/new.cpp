#include<iostream>
using namespace std;
int main(void){

	int* pi = new int;
	*pi = 123;
	cout<<"값:"<<*pi<<"주소"<<pi<<endl;
	delete pi;
	cout<<"delete 이후"<<endl;
	cout<<"값:"<<*pi<<"주소"<<pi<<endl;


}
