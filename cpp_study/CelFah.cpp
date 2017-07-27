#include<iostream>
using namespace std;
class Fah;
class Cel
{
public:
	double Tem;
	Cel(){}
	Cel(double aTem){Tem=aTem;}
	operator Fah();
	void OutTem(){cout<<"섭씨"<<Tem<<endl;}

};
class Fah
{
public:
	double Tem;
	Fah(){}
	Fah(double aTem){Tem=aTem;}
	operator Cel();
	void OutTem(){cout<<"화씨"<<Tem<<endl;}
};

Cel::operator Fah(){
	Fah F;
	F.Tem = Tem*1.8+32;
	return F;
}
Fah::operator Cel(){
	Cel C;
	C.Tem = (Tem-32)/1.8;
	return C;
}

int main(void){
	Cel C(100);
	Fah F=C;
	C.OutTem();
	F.OutTem();

	return 0;
}
