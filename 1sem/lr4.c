#include <stdio.h>

int main() {
    int num, num2;

    scanf("%d", &num); //запросите с консоли целое число
    num = (33 >= num) && (num >= -55); //проверка числа на попадание в диапазон (1 - да, 0 - нет)
    printf("%d\n", num);
    scanf("%d", &num2); //запрос числа с консоли
    printf("%d", (num2 << 13) % 2); //вывод значения бита с указанным номером
}
