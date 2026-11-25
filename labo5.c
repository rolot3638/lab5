#include <stdio.h>

void task48() {
    int n, i, j, prime, x, y, z;
    double a[100], s1 = 0, s2 = 0;

    printf("\nЗавдання 48\n");
    printf("Введіть кількість елементів: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Неправильна кількість елементів\n");
        return;
    }

    printf("Введіть елементи масиву:\n");
    for (i = 0; i < n; i++)
        scanf("%lf", &a[i]);

    for (i = 1; i <= n; i++) {
        prime = 1;

        if (i < 2)
            prime = 0;

        for (j = 2; j < i; j++) {
            if (i % j == 0)
                prime = 0;
        }

        if (prime)
            s1 += a[i - 1];
    }

    x = 1;
    y = 1;

    for (i = 1; i <= n; i++) {
        if (i == x || i == y)
            s2 += a[i - 1];

        z = x + y;
        x = y;
        y = z;
    }

    printf("Сума елементів з простими номерами: %.2lf\n", s1);
    printf("Сума елементів з номерами Фібоначчі: %.2lf\n", s2);
}

void task55() {
    int n, i, j = 0;
    int a[100];

    printf("\nЗавдання 55\n");
    printf("Введіть натуральне число: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Число повинно бути більшим за 1\n");
        return;
    }

    for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            a[j] = i;
            j++;
            n = n / i;
        }
    }

    printf("Найпростіші множники числа: ");
    for (i = 0; i < j; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void task74() {
    int i, є = 0;
    double a[15];

    printf("\nЗавдання 74\n");
    printf("Введіть 15 дійсних чисел:\n");

    for (i = 0; i < 15; i++)
        scanf("%lf", &a[i]);

    for (i = 0; i < 15; i++) {
        if (a[i] < 0)
            є = 1;
    }

    if (є)
        printf("У послідовності є негативні числа\n");
    else
        printf("У послідовності немає негативних чисел\n");
}

void task111() {
    int n, k, i;
    double a[101], s = 0, x;

    printf("\nЗавдання 111\n");
    printf("Введіть кількість елементів: ");
    scanf("%d", &n);

    if (n <= 0 || n >= 100) {
        printf("Неправильна кількість елементів\n");
        return;
    }

    printf("Введіть елементи масиву:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
        s += a[i];
    }

    printf("Введіть номер місця для вставки: ");
    scanf("%d", &k);

    if (k < 1 || k > n + 1) {
        printf("Неправильний номер місця\n");
        return;
    }

    x = s / n;

    for (i = n; i >= k; i--)
        a[i] = a[i - 1];

    a[k - 1] = x;
    n++;

    printf("Масив після вставки:\n");
    for (i = 0; i < n; i++)
        printf("%.2lf ", a[i]);

    printf("\n");
}

void task172() {
    int n, i, x;
    int a[100];

    printf("\nЗавдання 172\n");
    printf("Введіть кількість елементів: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Неправильна кількість елементів\n");
        return;
    }

    printf("Введіть елементи масиву:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++) {
        x = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = x;
    }

    printf("Масив після зміни місць:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
}

void task53() {
    int n, i, k = 0;
    int a[100];
    double p;

    printf("\nЗавдання 53\n");
    printf("Введіть кількість елементів: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Неправильна кількість елементів\n");
        return;
    }

    printf("Введіть цілі числа:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 != 0)
            k++;
    }

    p = (double)k * 100 / n;

    printf("Кількість непарних елементів: %d\n", k);
    printf("Відсоток непарних елементів: %.2lf%%\n", p);
}

int main() {
    int t;

    printf("Виберіть номер завдання:\n");
    printf("48, 55, 74, 111, 172, 53\n");
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
}