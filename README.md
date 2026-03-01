# Security-Log-Parser
Analizzatore di tentativi di accesso (Auth Log)

Immagina di avere un file di log di un server Linux (il famoso /var/log/auth.log). Questo file registra ogni tentativo di accesso. Il tuo programma deve leggerlo e "scovare" i potenziali attacchi hacker.

Cosa dovrebbe fare il tuo software:
Parsing delle stringhe: Cercare parole chiave come "Failed password" o "Invalid user".

Estrazione dati: Usare le Regex (Espressioni Regolari) o funzioni di manipolazione stringhe (strstr, strtok in C) per estrarre l'IP dell'attaccante e l'ora del tentativo.

Logica di soglia: Se un IP fallisce l'accesso più di 5 volte, segnalalo come "Sospetto" o "Attacco Brute Force".

Report finale: Generare un file report.txt pulito con la lista degli IP cattivi.

Struttura del Codice (Esempio in C)
In C, questo progetto ti obbliga a gestire i puntatori e i buffer in modo magistrale. Ecco come potresti impostarlo:
