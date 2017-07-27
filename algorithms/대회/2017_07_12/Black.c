#include<stdio.h>
#include<stdlib.h>
int main(){

	int n,m,i,c,j;
	int count=0;
	int first=-1;
	int last;
	int black=0;
	int white=0;



	int best_short_x=0;
	int best_short_y=0;
	int best_long_x=0;
	int best_long_y=0;


	int width;

	char **p;
	scanf("%d %d",&n,&m);
	p = (char**)malloc(sizeof(char*)*n);
	
	for(i=0;i<n;i++){
	p[i] = (char*)malloc(sizeof(char)*m);
	}
	for(i=0;i<n;i++){
	scanf("%s",p[i]);
	}



	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(p[i][j]==87){
		black=-1;
		}
		if(p[i][j]==66&&first==-1){
		first=0;
		white=-1;
		best_short_x=j;
		best_short_y=i;
		}
		if(p[i][j]==66){

			if(j>=best_long_x){
			best_long_x=j;
			}
			if(i>=best_long_y){
			best_long_y=i;
			}
			if(j<=best_short_x){
			best_short_x=j;
			}
			if(i<=best_short_y){
			best_short_y=i;
			}
	

		count++;
		}
	}

	}


	if(black==0){
	printf("-1");
	}else if (white==0){
	printf("1");
	}else{
	
	best_long_x = best_long_x-best_short_x;
	best_long_y = best_long_y-best_short_y;
	if(best_long_x<0)
		best_long_x=best_long_x*(-1);
	if(best_long_y<0)
		best_long_y=best_long_y*(-1);
	best_long_x++;best_long_y++;
	printf("%d",(best_long_x>best_long_y?(best_long_x*best_long_x)-count:(best_long_y*best_long_y)-count));

	}




	//free
	for(i=0;i<n;i++)
		free(p[i]);
	free(p);
}
