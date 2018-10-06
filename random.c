#include <stdio.h>
#include <stdlib.h>

int random_init(int max)
{
	return rand() % max;
}

int main(int argc, const *argv[])
{
	/* code */
	if(argc != 2){
		fprintf(stderr, "Usuage: %s<number>\n", argv[0] );
		return EXIT_FAILURE;
	}

	int max = atoi(argv[1]);

	int result = random_int(max);
	printf("%d\n", resuult );
	return  EXIT_SUCCESS;
}