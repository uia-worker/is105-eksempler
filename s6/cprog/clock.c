#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
//#include <conio.h>

int main() {
    int hours, minutes, seconds;

    while (1) {
        // Få gjeldende tid
        time_t now = time(NULL);
        struct tm *t = localtime(&now);
        hours = t->tm_hour;
        minutes = t->tm_min;
        seconds = t->tm_sec;

        // Skriv ut klokkeslettet
        printf("%02d:%02d:%02d", hours, minutes, seconds);

        // Vent i 1 sekund
        sleep(1);

        // Rengjør konsollvinduet (kun for Windows)
        //system("cls");
        system("clear");
        fflush(stdout);
    }

    return 0;
}
