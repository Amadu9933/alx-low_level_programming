#include <stdio.h>
/*C program to read array elements from user
 *
 */
int main(){
    int i, arr[50], num;

    printf("\nEnter number of elements :");

    scanf("%d", &num);

    printf("\nEnter the values :");
    for(i=0; i<num; i++){
    
    scanf("\n%d", &arr[i]);
    }

    for(i=0; i<num; i++){
	    printf("\narr[%d]=%d", i,arr[i]);
    }
    return(0);




}
