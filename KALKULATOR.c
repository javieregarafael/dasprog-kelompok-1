#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// === Deklarasi Fungsi ===
void hukumOhm();
void dayaListrik();
void resistorSeri();
void resistorParalel();
void desimalKeLain();
void binerKeDesimal();
void oktalKeDesimal();
void heksaKeDesimal();

void pause() {
    printf("\nTekan Enter untuk kembali ke menu utama...");
    getchar(); // buang newline tersisa
    getchar(); // tunggu enter
}

// === Implementasi Fungsi ===
void hukumOhm() {
    int pilihan;
    double V, I, R;

    printf("\n--- Kalkulator Hukum Ohm ---\n");
    printf("Hitung apa?\n1. Tegangan (V)\n2. Arus (I)\n3. Hambatan (R)\nPilihan: ");
    scanf("%d", &pilihan);

    switch(pilihan) {
        case 1:
            printf("Masukkan Arus (I dalam Ampere): ");
            scanf("%lf", &I);
            printf("Masukkan Hambatan (R dalam Ohm): ");
            scanf("%lf", &R);
            V = I * R;
            printf("Tegangan (V) = %.2f Volt\n", V);
            break;

        case 2:
            printf("Masukkan Tegangan (V dalam Volt): ");
            scanf("%lf", &V);
            printf("Masukkan Hambatan (R dalam Ohm): ");
            scanf("%lf", &R);
            I = V / R;
            printf("Arus (I) = %.2f Ampere\n", I);
            break;

        case 3:
            printf("Masukkan Tegangan (V dalam Volt): ");
            scanf("%lf", &V);
            printf("Masukkan Arus (I dalam Ampere): ");
            scanf("%lf", &I);
            R = V / I;
            printf("Hambatan (R) = %.2f Ohm\n", R);
            break;

        default:
            printf("Pilihan tidak valid.\n");
    }
    pause();
}

void dayaListrik() {
    double V, I, P;

    printf("\n--- Kalkulator Daya Listrik ---\n");
    printf("Masukkan Tegangan (Volt): ");
    scanf("%lf", &V);
    printf("Masukkan Arus (Ampere): ");
    scanf("%lf", &I);

    P = V * I;
    printf("Daya (P) = %.2f Watt\n", P);

    pause();
}

void resistorSeri() {
    int n;
    double total = 0, R;

    printf("\n--- Kalkulator Resistor Seri ---\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Masukkan nilai Resistor %d (Ohm): ", i);
        scanf("%lf", &R);
        total += R;
    }

    printf("Total Hambatan Seri = %.2f Ohm\n", total);
    pause();
}

void resistorParalel() {
    int n;
    double total = 0, R;

    printf("\n--- Kalkulator Resistor Paralel ---\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("Masukkan nilai Resistor %d (Ohm): ", i);
        scanf("%lf", &R);
        total += 1.0 / R;
    }

    if (total != 0)
        printf("Total Hambatan Paralel = %.2f Ohm\n", 1.0 / total);
    else
        printf("Error: tidak bisa menghitung.\n");

    pause();
}

void desimalKeLain() {
    int num;

    printf("\n--- Konversi Desimal ---\n");
    printf("Masukkan bilangan desimal: ");
    scanf("%d", &num);

    printf("Biner        : ");
    int leadingZero = 1;

    for(int i = sizeof(num) * 8 - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if(bit == 1) leadingZero = 0;
        if(!leadingZero) printf("%d", bit);
    }

    if(leadingZero) printf("0");
    printf("\n");

    printf("Oktal        : %o\n", num);
    printf("Heksadesimal : %X\n", num);

    pause();
}

void binerKeDesimal() {
    char bin[65];
    long long des = 0;

    printf("\n--- Konversi Biner ke Desimal ---\n");
    printf("Masukkan bilangan biner: ");
    scanf("%s", bin);

    for(int i = 0; bin[i] != '\0'; i++)
        des = des * 2 + (bin[i] - '0');

    printf("Desimal = %lld\n", des);
    pause();
}

void oktalKeDesimal() {
    char oct[65];
    long long des = 0;

    printf("\n--- Konversi Oktal ke Desimal ---\n");
    printf("Masukkan bilangan oktal: ");
    scanf("%s", oct);

    for(int i = 0; oct[i] != '\0'; i++)
        des = des * 8 + (oct[i] - '0');

    printf("Desimal = %lld\n", des);
    pause();
}

void heksaKeDesimal() {
    char hex[65];
    long long des = 0;

    printf("\n--- Konversi Heksadesimal ke Desimal ---\n");
    printf("Masukkan bilangan heksadesimal: ");
    scanf("%s", hex);

    for(int i = 0; hex[i] != '\0'; i++) {
        char c = hex[i];
        int val;

        if(c >= '0' && c <= '9') val = c - '0';
        else if(c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else if(c >= 'a' && c <= 'f') val = c - 'a' + 10;
        else val = 0;

        des = des * 16 + val;
    }

    printf("Desimal = %lld\n", des);
    pause();
}

// === Fungsi Utama ===
int main() {
    int pilihan;

    do {
        system("cls||clear");

        printf("=========================================\n");
        printf("|     KALKULATOR DASAR PEMOGRAAMAN      |\n");
        printf("=========================================\n");
        printf("| --- Verifikasi Rangkaian Elektrik --- |\n");
        printf("| 1. Kalkulator Hukum Ohm (V = I * R)   |\n");
        printf("| 2. Kalkulator Daya Listrik (P = V * I)|\n");
        printf("| 3. Kalkulator Resistor Seri           |\n");
        printf("| 4. Kalkulator Resistor Paralel        |\n");
        printf("|                                       |\n");
        printf("| --- Utilitas Sistem Digital ---       |\n");
        printf("| 5. Desimal -> Biner / Oktal / Heks    |\n");
        printf("| 6. Biner -> Desimal                   |\n");
        printf("| 7. Oktal -> Desimal                   |\n");
        printf("| 8. Heksadesimal -> Desimal            |\n");
        printf("|                                       |\n");
        printf("| 9. Keluar                             |\n");
        printf("=========================================\n");

        printf("Masukkan pilihan Anda (1-9): ");
        scanf("%d", &pilihan);

        switch(pilihan) {
            case 1: hukumOhm(); break;
            case 2: dayaListrik(); break;
            case 3: resistorSeri(); break;
            case 4: resistorParalel(); break;
            case 5: desimalKeLain(); break;
            case 6: binerKeDesimal(); break;
            case 7: oktalKeDesimal(); break;
            case 8: heksaKeDesimal(); break;
            case 9: printf("Terima kasih telah menggunakan toolkit ini!\n"); break;
            default: printf("Pilihan tidak valid.\n"); pause(); break;
        }

    } while (pilihan != 9);

    return 0;
}
