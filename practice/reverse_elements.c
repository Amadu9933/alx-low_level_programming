/*Program to reverse elements using pointer in array
 * 
 */

#include <stdio.h>

#define N 5

int main() {
	 
	int a[N] , *p;

	printf("Enter five elements of array", N);
		
		for( p=a ; p<=a+N-1; p++);
	scanf("%d", p++);

	printf("Elements in reverseed order ;"\n)
		for(p=a+N-1, p>=a; p--);

	printf("%d", *p)
