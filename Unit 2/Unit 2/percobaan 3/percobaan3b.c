#include <stdio.h>

#include <stdio.h>

int main() {
    int nilai;
    char indeks;

    printf("Masukan nilai responsi strukdat kamu: ");
    scanf("%d", &nilai);

    switch (nilai) {
        case 80 ... 100:
            indeks = 'A';
            break;
        case 70 ... 79:
            indeks = 'B';
            break;
        case 60 ... 69:
            indeks = 'C';
            break;
        case 50 ... 59:
            indeks = 'D';
            break;
        default:
            indeks = 'F';
            break;
    }

    printf("Indeks nilai kamu adalah: %c\n", indeks);

    return 0;
}

// int main() {
//     int nilai;
//     char indeks;

//     printf("Masukan nilai responsi strukdat kamu: ");
//     scanf("%d", &nilai);

//     if (nilai >= 80 && nilai <= 100) {
//         indeks = 'A';
//     } else if (nilai >= 70 && nilai <= 79) {
//         indeks = 'B';
//     } else if (nilai >= 60 && nilai <= 69) {
//         indeks = 'C';
//     } else if (nilai >= 50 && nilai <= 59) {
//         indeks = 'D';
//     } else {
//         indeks = 'F';
//     }

//     printf("Indeks nilai kamu adalah: %c\n", indeks);

//     return 0;
// }
