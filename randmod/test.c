#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int number;
	int f;
	openat(f, "/dev/randmod", O_RDONLY);
	if (f == -1)
	{
		printf("Failed to open!");
		return -1;
	}
	read(f, &number, 4);
	printf("Random number: %d\n",number);
	close(f);
	return 0;
}
