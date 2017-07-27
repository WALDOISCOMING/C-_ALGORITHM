#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(void){
int n,i,len;

char str[100][100];
scanf("%d",&n);


    for(i=0;i<n;i++){
    scanf("%s",str[i]);
    }


    for(i=0;i<n;i++){
	len = strlen(str[i]);
	if(len>10){
	printf("%c%d%c\n",str[i][0],len-2,str[i][len-1]);

	}else{
	printf("%s\n",str[i]);
	}
    }



return 0;
}
