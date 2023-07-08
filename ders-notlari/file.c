#include <stdio.h>

int main() {
    FILE *file;

    // Dosyayı yazma modunda açıyoruz.
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // Dosyaya birkaç satır yazıyoruz.
    fprintf(file, "Merhaba, Dünya!\n");
    fprintf(file, "Bu bir testtir.\n");

    // Dosyayı kapatmayı unutmayın!
    fclose(file);

    // Şimdi dosyayı okuma modunda açıyoruz.
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // Dosyadan satırları okuyoruz.
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Dosyayı tekrar kapatıyoruz.
    fclose(file);

    return 0;
}

/*

#include <stdio.h>

int main() {
    FILE *fp;

    // Dosyayı yazma modunda açma
    fp = fopen("test.txt", "w");
    if(fp == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // Dosyaya bir şeyler yazma
    fprintf(fp, "Merhaba, Dünya!\n");
    
    // Dosyayı kapatma
    fclose(fp);

    // Dosyayı okuma modunda açma
    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // Dosyadan veri okuma
    char buffer[255];
    fgets(buffer, 255, fp);
    printf("%s\n", buffer);

    // Dosyayı kapatma
    fclose(fp);

    return 0;
}
*/

/*

#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0;

    // Dosyayı okuma modunda açma
    fp = fopen("numbers.txt", "r");
    if(fp == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    // Dosyadan sayıları okuma ve toplama
    while(fscanf(fp, "%d", &num) == 1) {
        sum += num;
    }

    printf("Toplam: %d\n", sum);

    // Dosyayı kapatma
    fclose(fp);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    FILE *file;

    // Dosyayı yazma modunda aç
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // Dosyaya metin yaz
    fprintf(file, "Merhaba Dünya\n");
    fclose(file);

    // Dosyayı okuma modunda aç
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    char line[100];

    // Dosyadan metni oku
    while(fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    // Dosyayı kapat
    fclose(file);

    return 0;
}
*/

/*
#include <stdio.h>

int main() {
    FILE *file;
    int line_number = 3;
    char line[150];
    int current_line = 0;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // belirtilen satırı oku
    while (fgets(line, sizeof(line), file)) {
        current_line++;
        if (current_line == line_number) {
            printf("%s", line);
            break;
        }
    }

    fclose(file);
    
    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    FILE *file;

    // Dosyayı yazma modunda aç
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // Dosyaya bir metin yaz
    fprintf(file, "Merhaba, Dünya!");

    // Dosyayı kapat
    fclose(file);
    
    return 0;
}

*/