#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

// put16 ou get16
// encode_qname
// make_query
// read_name
// parse_response
// now_ms e exchange

void put16(uint8_t *saida, uint16_t ent){
    // Garantir pelo menos 2 bytes disponíveis
    saida[0] = (uint8_t)(ent >> 8);
    saida[1] = (uint8_t)ent;
}


int main(int argc, char *argv[]) {

    if (argc != 3) {
        fprintf(stderr, "Uso: %s DOMINIO IP_DO_SERVIDOR\n", argv[0]);
        return 1;
    }

    printf("Dominio: %s\n", argv[1]);
    printf("Servidor DNS: %s\n", argv[2]);

    return 0;
}
