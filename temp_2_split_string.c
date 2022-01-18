#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Let's go to walk";
	int sizeLen = strlen(str);
	char delim[] = " ";

	char *ptr = strtok(str, delim);

	while(ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, delim);
	}

	printf("\n");

    return 0;
}
