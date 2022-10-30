#include <stdio.h>
#include <string.h>

int main()
{
    unsigned int serial = 0;
    char login[] = "AAAAAA";
    int len = strlen(login);

    serial = ((int)login[3] ^ 0x1337U) + 0x5eeded;
    for (int i = 0; i < (int)len; i = i + 1) {
        if (login[i] < ' ') {
            return 1;
        }
      serial = serial + ((int)login[i] ^ serial) % 0x539;
    }
    printf("Serial : %u\n", serial);
    return (0);
}