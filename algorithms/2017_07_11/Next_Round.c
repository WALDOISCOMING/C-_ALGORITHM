#include<stdio.h>
#include<stdlib.h>

int char_to_int(int c){
c = c-48;
return c;
}

int add_to_pointer(int* p,int index,int i){

        p[index] = i;
}





int main(void){

        int n,k,c,i,convert,index;
        int *p;
        scanf("%d %d",&n,&k);
        p = (int*)malloc(sizeof(int)*n);
    getchar();
        i=0;
        index=0;


   while((c=getchar())!='\n')
   {
           convert = char_to_int(c);
           if(c==32){
                   add_to_pointer(p,index,i);
                   index++;
                   i=0;
           }else{
                   i=i*10+convert;}
   }
    add_to_pointer(p,index,i);
    index=0;
    for(i=0;i<n;i++){
            if((p[k-1]<=p[i])&&(p[i]>0)){
                    index++;
                   }

    }
    printf("%d",index);

        return 0;
}

