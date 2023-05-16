/*
Soru1 : x ve y integer bilgisin saklayan bir struct yapınız olsun.
x ve y, 2 boyutlu uzaydaki bir noktanın koordinat bilgileridir.
oluşturacağınız 2 noktanın uzaydaki birbine uzaklıklarını bulan programın C kodu 
*/

#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

float distance(struct point p1, struct point p2) {
    int dx = p1.x - p2.x;
    int dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct point p1 = {0, 0};
    struct point p2 = {3, 4};

    float dist = distance(p1, p2);
    printf("The distance between (%d, %d) and (%d, %d) is %.2f.\n", p1.x, p1.y, p2.x, p2.y, dist);

    return 0;
}