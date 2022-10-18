#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	size_t spn = 0;
	size_t cspn = 0;

	if (argc > 1) {
		cspn = strcspn("PwBLgNa8p8MTKW57S7zxVAQCxnCpV8JqTTs9XEBv\n", "\n");
		spn = strspn("PwBLgNa8p8MTKW57S7zxVAQCxnCpV8JqTTs9XEBv\n", "\n");
		printf ("strcspn : %lu\n", cspn);
		printf("strspn : %lu\n", spn);
	}
	return (0);
}
