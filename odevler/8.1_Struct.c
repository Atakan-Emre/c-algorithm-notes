#include <stdio.h>

// Car struct tanımı
struct Car {
    char marka[50];
    char model[50];
    int yil;
};

int main() {
    // car1, car2 ve car3 olmak üzere üç adet Car struct'ı tanımlanıyor ve değerleri atanıyor
    struct Car car1 = {"BMW", "X5", 1999};
    struct Car car2 = {"Ford", "Mustang", 1969};
    struct Car car3 = {"Toyota", "Corolla", 2011};

    // car1, car2 ve car3'ün değerleri ekrana yazdırılıyor
    printf("marka: %s, model: %s, yil: %d\n", car1.marka, car1.model, car1.yil);
    printf("marka: %s, model: %s, yil: %d\n", car2.marka, car2.model, car2.yil);
    printf("marka: %s, model: %s, yil: %d\n\n", car3.marka, car3.model, car3.yil);

    // car1.marka, car1.model ve car1.yil'in byte cinsinden boyutları yazdırılıyor
    printf("car1.marka kac byte: %d\n", sizeof(car1.marka));
    printf("car1.model kac byte: %d\n", sizeof(car1.model));
    printf("car1.yil kac byte: %d\n\n", sizeof(car1.yil));

    // car1'in tamamının byte cinsinden boyutu yazdırılıyor
    printf("car1 tamami kac byte: %d\n\n", sizeof(car1));

    return 0;
}
