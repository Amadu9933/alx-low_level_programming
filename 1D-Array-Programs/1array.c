#include <stdio.h>
#include <stdlib.h>
#define size 10
/*
 *C program to display array elements with addreses
 *
 */*
int main(){
      
	int a[3]={11,23,33};
       int i;
       for(i=0; i<3;i++){
       printf("\n a[%d], value=%d : address=%u", i,i+a[i],&a[i]);
       }

}
