#include<iostream>
#include<cstring>
using namespace std;

struct tag_F{
char Name[100];
int Age;
double Height;
};
int main(void){

	tag_F *pF =new tag_F;
	strcpy(pF->Name,"아무개");
	pF->Age=22;
	pF->Height=177.7;
	cout<<pF->Name<<endl;
	delete pF;
}
