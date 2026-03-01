#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 512

void analizza_log(const char *filename) {
    FILE *file = fopen(filename, "r");
    char riga[MAX_LINE_LENGTH];

    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return;
    }

    printf("--- Analisi in corso ---\n");

    while (fgets(riga, sizeof(riga), file)) {
        // Cerchiamo la stringa "Failed password"
        if (strstr(riga, "Failed password") != NULL) {
            printf("[ALERT] Tentativo fallito trovato: %s", riga);
            // Qui potresti aggiungere la logica per estrarre l'IP
        }
    }

    fclose(file);
}
