#include<stdio.h>
int main(void){
int n;
scanf("%d",&n);
    if(n==2){
    printf("NO");	    
    }else{
    printf("%s",n%2==0?"YES":"NO");
    }

}
