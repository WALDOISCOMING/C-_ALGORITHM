#include<iostream>
using namespace std;

static int BACKGROUND_COLOUR=0;
static int IMAGE_COLOUR=1;
static int ALREADY_COUNTED=2;

static int SIZE=8;
static int IMAGE[][8]={
	{1,0,0,0,0,0,0,1},
	{0,1,1,0,0,1,0,0},
	{1,1,0,0,1,0,1,0},
	{0,0,0,0,0,1,0,0},
	{0,1,0,1,0,1,0,0},
	{0,1,0,1,0,1,0,0},
	{1,0,0,0,1,0,0,1},
	{0,1,1,0,0,1,1,1},
};

void printCell(){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
		cout<<"["<<IMAGE[i][j]<<"]";
		}
		cout<<"\n";
	}

}

int countCell(int x,int y){

	if(x<0||y<0||x>=SIZE||y>=SIZE){
	return 0;
	}
	else if(IMAGE[x][y]!=IMAGE_COLOUR){
	return 0;
	}else{
	IMAGE[x][y] = ALREADY_COUNTED;
		return 1+countCell(x-1,y-1)+countCell(x-1,y)+countCell(x-1,y+1)
			+countCell(x,y-1)+countCell(x,y+1)
			+countCell(x+1,y-1)+countCell(x+1,y)+countCell(x+1,y+1);
	}

}
int main(void){

	cout<<"bf count"<<endl;
	printCell();
	cout<<"af count count IMAGE[0][0]!!! count numbering is "<<countCell(0,0)<<endl;

	printCell();
	return 0;
}
