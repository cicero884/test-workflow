#include <stdio.h>
#include <assert.h>
 
int main()
{
	// Defining variables
	int a;
 
	// Assigning value of a=2
	a = 2;
 
	// Displaying the value of a
	printf("Value of a is:%d\n", a);
 
	// assert function will not exit till the value of a =0
	assert(a);
 
	// now change the value of a=0
	a = 1;
 
	// Displaying the value of a
	printf("Value of a is:%d\n\n", a);
 
	// again calling the function with different parameter
	assert(a);
 
	return 0;
 
}
