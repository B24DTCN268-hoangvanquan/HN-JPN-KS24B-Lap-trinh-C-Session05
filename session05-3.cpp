#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    printf("Nh�p m�t s� nguy�n duong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui long nh�p m�t s� nguy�n duong!\n");
        return 1; 
    }
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("T�ng c�c s� tu 1 d�n %d l�: %d\n", n, sum);

    return 0;
}

