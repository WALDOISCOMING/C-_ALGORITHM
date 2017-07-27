#include<stdio.h>
#include<stdlib.h>
int main(void){

	int n,a,b,count,c,check;
	scanf("%d %d %d",&n,&a,&b);
	count=0;
	check=0;
	getchar();
	while((c=getchar())!='\n'){
	
	if(c==49&&a>0){
	a--;
	continue;
	}
	if(c==49&&b>0&&check==0){
	b--;
	check=1;
	continue;
	}
	if(c==49&&check==1){
	check=0;
	continue;
	}

	if(c==50&&b>0){
	b--;
	continue;
	}

	if(c==50&&b<=0){
	count+=2;
	}

	if(c==49){
	count++;
	}

	}


	printf("%d",count);
	return 0;
}
