#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

// encode_qname
// make_query
// read_name
// parse_response
// now_ms e exchange

// put16 ou get16
void put16(uint8_t *saida, uint16_t ent){
    // Garantir pelo menos 2 bytes disponíveis
    saida[0] = (uint8_t)(ent >> 8);
    saida[1] = (uint8_t)ent;
}

static uint16_t get16(const uint8_t *entrada){
    return (uint16_t)(((uint16_t)entrada[0] << 8) | entrada[1]);
}




int main(int argc, char *argv[]) {

    uint8_t buff[512];

    put16(buff + 2, 0x1234);

    printf("%02x " , buff[2]);
    printf("%02x\n" , buff[3]);

    printf("%04x\n", get16(buff + 2));

    if (argc != 3) {
        fprintf(stderr, "Uso: %s DOMINIO IP_DO_SERVIDOR\n", argv[0]);
        return 1;
    }

    printf("Dominio: %s\n", argv[1]);
    printf("Servidor DNS: %s\n", argv[2]);

    return 0;
}
