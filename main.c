#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"
#include "pico/unique_id.h"

int main() {
    stdio_init_all();
    sleep_ms(2000);

    printf("\n=== Demonstração do ID Único do Raspberry Pi Pico ===\n\n");
    
    // Obter ID como string
    char id_str[2 * PICO_UNIQUE_BOARD_ID_SIZE_BYTES + 1];
    pico_get_unique_board_id_string(id_str, sizeof(id_str));
    printf("ID único (string completa): %s\n", id_str);

    // Criar um nome de host curto (últimos 6 caracteres)
    char hostname[20];
    snprintf(hostname, sizeof(hostname), "pico_%s", id_str + 10);
    printf("Nome de host curto: %s\n", hostname);

    // Obter ID como bytes
    pico_unique_board_id_t id_bytes;
    pico_get_unique_board_id(&id_bytes);

    printf("\nID único (bytes individuais): ");
    for (int i = 0; i < PICO_UNIQUE_BOARD_ID_SIZE_BYTES; i++) {
        printf("%02x", id_bytes.id[i]); // Imprime cada byte em hexadecimal
        if (i < PICO_UNIQUE_BOARD_ID_SIZE_BYTES - 1) printf(":"); // Separador entre bytes
    }
    printf("\n");

    while (true) {
        sleep_ms(1000);
    }
    return 0;
}