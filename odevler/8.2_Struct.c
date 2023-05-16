/*
Soru1 : x ve y integer bilgisin saklayan bir struct yapınız olsun.
x ve y, 2 boyutlu uzaydaki bir noktanın koordinat bilgileridir.
oluşturacağınız 2 noktanın uzaydaki birbine uzaklıklarını bulan programın C kodu 
*/

#include <stdio.h>
#include <math.h>

// Struct yapısı tanımlanır
struct point {
    int x;
    int y;
};

// İki nokta arasındaki uzaklığı hesaplayan fonksiyon
float distance(struct point p1, struct point p2) {
    int dx = p1.x - p2.x; // X koordinatları arasındaki fark hesaplanır
    int dy = p1.y - p2.y; // Y koordinatları arasındaki fark hesaplanır
    return sqrt(dx * dx + dy * dy); // İki nokta arasındaki mesafe hesaplanır ve döndürülür
}

int main() {
    // İki nokta oluşturulur
    struct point p1 = {0, 0}; // (0, 0) noktası
    struct point p2 = {3, 4}; // (3, 4) noktası

    // İki nokta arasındaki uzaklık hesaplanır
    float dist = distance(p1, p2);

    // Sonuç ekrana yazdırılır
    printf("The distance between (%d, %d) and (%d, %d) is %.2f.\n", p1.x, p1.y, p2.x, p2.y, dist);

    return 0;
}
