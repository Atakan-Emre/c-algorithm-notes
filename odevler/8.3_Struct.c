/* 
Soru 2: Bir rehber oluşturun ve struct yapısında isim ve numara kayıt edilsin.
String fonksiyonlarını kullanarak rehberde isim arayınız.
isim bulundu ise isim ve numara ekrana kayıt ediniz.
*/

#include <stdio.h>
#include <string.h>

// Rehberdeki kişi bilgilerini tutan struct yapısı tanımlanır.
struct rehber {
    char name[50];
    char phone[50];
};

int main() {
    // Telefon rehberi için bir dizi oluşturulur.
    struct rehber phonebook[100];

    // Telefon rehberine bazı örnek kayıtlar eklenir.
    strcpy(phonebook[0].name, "Halil");
    strcpy(phonebook[0].phone, "123-456-7890");

    strcpy(phonebook[1].name, "Bob");
    strcpy(phonebook[1].phone, "234-567-8901");

    strcpy(phonebook[2].name, "Charlie");
    strcpy(phonebook[2].phone, "345-678-9012");

    // Aranacak isim kullanıcıdan alınır.
    char isim[50];
    printf("Rehberde isim ara: ");
    scanf("%s", isim);

    // Telefon rehberindeki kayıtlar aranır.
    for (int i = 0; i < 100; i++) {
        if (strcmp(phonebook[i].name, isim) == 0) {
            // İsim bulunduğunda ilgili kayıt ekrana yazdırılır.
            printf("%s's phone number is %s.\n", phonebook[i].name, phonebook[i].phone);
            return 0;
        }
    }

    // İsim bulunamadığında mesaj ekrana yazdırılır.
    printf("Contact not found.\n");
    return 0;
}