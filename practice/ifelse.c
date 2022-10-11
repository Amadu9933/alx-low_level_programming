#include <stdio.h>
/**
 * program to check if user is old or young
 */
int main() {
	int age;

	printf("please enter your age : ");
	scanf("%d", &age );

	if(age<40 )
	{
		printf("you are young\n");
	}

	else if ( age==40 ) 
	{ 
		printf( "you are old\n" );
	}
	else 
	{
	       	( "you are really old\n" );
	}

}
