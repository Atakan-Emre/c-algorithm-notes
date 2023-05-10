// Fig. 10.3: fig10_03.c
// Structures ile kart karıştırma ve dağıtma programı
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// Kart yapısı tanımı
struct card {
    const char *face; // pointer face tanımlanır
    const char *suit; // pointer suit tanımlanır
};

typedef struct card Card; // struct card için yeni bir isim tanımlanır

// Prototipler
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

// Programın başlangıcı
int main(void) {
    Card deck[CARDS]; // Cards dizisi tanımlanır

    // Cards pointer dizisi tanımlanır
    const char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six",
                          "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    const char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL)); // rastgele sayı üretmek için zaman kullanılır

    fillDeck(deck, face, suit); // Cards dizisi doldurulur
    shuffle(deck); // Cards dizisi karıştırılır
    deal(deck); // Tüm 52 kart dağıtılır
}

// Diziyi dolduran fonksiyon
void fillDeck(Card * const wDeck, const char * wFace[], const char * wSuit[]) {
    // wDeck boyunca döngü yapılır
    for (size_t i = 0; i < CARDS; ++i) {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    }
}

// Diziyi karıştıran fonksiyon
void shuffle(Card * const wDeck) {
    // wDeck boyunca rastgele kartlar değiştirilir
    for (size_t i = 0; i < CARDS; ++i) {
        size_t j = rand() % CARDS;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// Kartları dağıtan fonksiyon
void deal(const Card * const wDeck) {
    // wDeck boyunca döngü yapılır ve her kart yazdırılır
    for (size_t i = 0; i < CARDS; ++i) {
        printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
    }
}