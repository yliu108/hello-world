// The following three lines should be at the top and in this order
  // it lets us test for memory leaks .
# define _CRTDBG_MAP_ALLOC
# include <stdlib.h>
# include <crtdbg.h>
# include <stdio.h>
// main () is what you think it is. We ’ll deal with argv , argc later .
int main(int argc, char ** argv)
{
	// The line below turns on my memory bug detection
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	printf("My very first C program ! Well , at least for CNT.");
	printf("\n\n");
	fflush(stdout);
	// Let ’s create a memory leak so we can make sure it gets detected
	int * p = (int *)malloc(sizeof(int));
	*p = 10;
	printf("\nI ’m trying to leak %d bytes of memory \n Anarchy now !\n", sizeof(*p));
	system(" pause "); // Pause for return
	return 0; // Success
}