
#include<stdio.h>


int main(void){
long long m,n,a;

scanf("%lld %lld %lld",&m,&n,&a);
printf("%lld",(m%a==0?m/a:m/a+1)*(n%a==0?n/a:n/a+1));

return 0;
}

