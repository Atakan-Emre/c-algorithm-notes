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
