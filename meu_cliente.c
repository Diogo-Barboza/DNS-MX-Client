#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Uso: %s DOMINIO IP_DO_SERVIDOR\n", argv[0]);
        return 1;
    }

    printf("Dominio: %s\n", argv[1]);
    printf("Servidor DNS: %s\n", argv[2]);

    return 0;
}
