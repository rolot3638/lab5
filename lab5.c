```c
#include <stdio.h>

void task48() {
    int n, i, j, p;
    double a[100], s1 = 0, s2 = 0;
    printf("Введіть N: ");
    scanf("%d", &n);
    printf("Введіть елементи масиву: ");
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);
    for (i = 1; i <= n; i++) {
        p = 1;
        if (i <2)
            p = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                p = 0;
                break;
            }
        }
        if (p)
            s1 += a[i - 1];
    }
    int x = 1, y = 2, z;
    while (x <= n) {
        s2 += a[x - 1];
        z= x + y;
        x = y;
        y = z;
    }
    printf("Сума елементів з простими номерами = %.2f\n", s1);
    printf("Сума елементів з номерами Фібоначчі = %.2f\n", s2);
}

void task55() {
    int n, i, d, k = 0;
    int a[100];
    printf("Введіть число: ");
    scanf("%d", &n);
    for (d = 2; d <= n; d++) {
        while (n % d == 0) {
            a[k] = d;
            k++;
            n /= d;
        }
    }
    printf("Масив простих множників: ");
    for (i = 0; i < k; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void task74() {
    int i, f = 0;
    double a[15];
    printf("Введіть 15 чисел:\n");
    for (i = 0; i < 15; i++)
        scanf("%lf", &a[i]);
    for (i = 0; i < 15; i++) {
        if (a[i] < 0) {
            printf("Перше негативне число має номер: %d\n", i + 1);
            f = 1;
            break;
        }
    }
    if (!f)
        printf("Негативних чисел немає.\n");
}

void task111() {
    int n, k, i;
    double a[101], s = 0, ser;
    printf("Введіть N: ");
    scanf("%d", &n);
    printf("Введіть елементи масиву: ");
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
        s += a[i];
    }
    printf("Введіть номер k: ");
    scanf("%d", &k);
    ser = s / n;
    for (i = n; i >= k; i--)
        a[i] = a[i - 1];
    a[k - 1] = ser;
    n++;
    printf("Масив після вставки: ");

    for (i = 0; i < n; i++)
        printf("%.2f ", a[i]);
    printf("\n");
}

void task172() {
    int n, i, t;
    int a[100];
    printf("Введіть N: ");
    scanf("%d", &n);
    printf("Введіть елементи масиву: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n / 2; i++) {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
    printf("Масив після зміни: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void task53() {
    int n, i, a[100], k = 0;
    double v;
    printf("Введіть N: ");
    scanf("%d", &n);
    printf("Введіть елементи масиву: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 != 0)
            k++;
    }
    v = (double)k * 100 / n;

    printf("Відсоток непарних елементів = %.2f%%\n", v);
}

int main() {
    int t;
    printf("Введіть номер задачі: ");
    scanf("%d", &t);
    switch (t) {
        case 48:
            task48();
            break;

        case 55:
            task55();
            break;

        case 74:
            task74();
            break;

        case 111:
            task111();
            break;

        case 172:
            task172();
            break;

        case 53:
            task53();
            break;
}