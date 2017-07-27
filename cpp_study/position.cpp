#include<iostream>

using namespace std;


struct Position{
	int x;
	int y;
	char ch;
        void OutPosition();	
	
};

     void Position::OutPosition(){
        cout<<"p->x:"<<this->x<<"p->y"<<this->y<<"p->ch"<<this->ch<<endl;
        }




int main(void){
	Position p1;
	p1.x=1;p1.y=1;p1.ch='a';
	p1.OutPosition();
	return 0;

	
	
}
