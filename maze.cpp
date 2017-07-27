#include<iostream>

using namespace std;


static int PATHWAY_COLOUR=0;
static int WALL_COLOUR=1;
static int BLOCKED_COLOUR=2;
static int PATH_COLOUR=3;

static int MAZE_SIZE=8;
static int maze[][8]={
                {0,0,0,0,0,0,0,1},
                {0,1,1,0,1,1,0,1},
                {0,0,0,1,0,0,0,1},
                {0,1,0,0,1,1,0,0},
                {0,1,1,1,0,0,1,1},
		{0,1,0,0,0,1,0,1},
                {0,0,0,1,0,0,0,1},
                {0,1,1,1,0,1,0,0},
        };

void printMaze(int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
		cout<<"["<<maze[i][j]<<"]";
		}
		cout<<"\n";
	}

}
bool searchMaze(int x,int y){
	if(x<0||y<0||x>=MAZE_SIZE||y>=MAZE_SIZE){
		return false;
	}
	else if(x==MAZE_SIZE&&y==MAZE_SIZE){
		maze[x][y]=PATH_COLOUR;
		return true;

	}else if(maze[x][y]!=PATHWAY_COLOUR){
		return false;
	}else{
		maze[x][y]=PATH_COLOUR;
		if(searchMaze(x,y-1)||searchMaze(x+1,y)||searchMaze(x,y+1)||searchMaze(x-1,y)){

			return true;
		}

		maze[x][y]=BLOCKED_COLOUR;
		return false;

	}

}
int main(void){
	cout<<"bf maze search"<<endl;	
	printMaze(MAZE_SIZE);

	cout<<"af maze search"<<endl;
	searchMaze(0,0);
	printMaze(MAZE_SIZE);

	return 0;

}
