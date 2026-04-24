#include <stdio.h>
int main(void) {
    int h;
    int w;

    printf("What is the height of the rectangle: ");
    scanf("%d", &h);
    printf("What is the width of the rectangle: ");
    scanf("%d", &w);

    int area = h * w;
    int peri = 2 * (h + w);

    printf("Area: %d \n", area);
    printf("Perimeter: %d \n", peri);

}
