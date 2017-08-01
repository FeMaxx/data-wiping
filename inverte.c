\\Algumas técnicas exigiam que em um dos seus passos fosse aplicado o complemento do número que está armazenado no disco rígido,
\\para realizar essa operação foram criados um programa na linguagem C.

#include <stdio.h>
#include <unistd.h>
#include <inttypes.h>
#define BUFSZ 4096
int main (void) {
    unsigned char buffer[BUFSZ];
    int i, check;
    uint64_t total = 0;

    while ((check = read(0, buffer, BUFSZ)) > 0) {
        for (i = 0; i < check; i++) buffer[i] = ~buffer[i];
        write(1, buffer, check);
        total += check;
    }
    fprintf(stderr, "Operação de complemento realizada, total de bytes processados %lu.\n", total);
    return 0;
