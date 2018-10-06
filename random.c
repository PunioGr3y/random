#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_init(int max)
{
	return rand() % max;
}

int main(int argc, char *argv[])
{
	/* code */
	if(argc != 2){
		fprintf(stderr, "Usuage: %s<number>\n", argv[0] );
		return EXIT_FAILURE;
	}

	int max = atoi(argv[1]);

	srand(time(NULL));

	int result = random_init(max);
	printf("%d\n", result );
	return  EXIT_SUCCESS;
}