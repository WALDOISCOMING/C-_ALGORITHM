#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int check_str(char str[],int len){
	int fun_count=0;
	int fun_i=0;
	for(fun_i=0;fun_i<len;fun_i++){
	if(str[fun_i]=='1'){
		fun_count++;
	}
	}
	if(fun_count>=2){
		return 1;
	}else{
		return 0;
	}

}
int main(void){
	int n;
	int count=0;
	char str[6];
	scanf("%d",&n);
	getchar();
	while(n>0){
		fgets(str,sizeof(str),stdin);	
		count+=check_str(str,strlen(str));
		n--;
		getchar();
	}
	printf("%d",count);

	return 0;
}

