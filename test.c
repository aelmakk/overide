#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <time.h>


int main(int argc, char *argv[])
{
	int fork_ret;
 	fork_ret = fork();
	if (fork_ret == 0)
	{
		printf("fork equal 0\n");
	}
	else {
	printf("after fork\n");
		printf("not zero\n");
	}
	return (0);
}
