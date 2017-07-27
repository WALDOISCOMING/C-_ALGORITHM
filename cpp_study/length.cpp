#include<iostream>
using namespace std;
class Length{
	private:
		double mili;
		
	public:
		void SetMili(double m){this->mili=m;};
		double GetMili(){return this->mili;}
		void OutMili(){cout<<"mili:"<<GetMili()<<endl;}
		void SetInch(double i){this->mili=i*25.4;}
		double GetInch(){return this->mili/25.4;}
		void OutInch(){cout<<"inch:"<<GetInch()<<endl;}
	~Length(){cout<<"by!"<<endl;}
};

int main(void){
Length m;
m.SetInch(3);
m.OutMili();
Length *mm = new Length();
mm->SetInch(10);
mm->OutMili();
delete mm;
return 0;
}
