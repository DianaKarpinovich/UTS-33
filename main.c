#include <stdio.h>
#include <math.h>

int main() {
    float a(0.0), b(0.0), c(0.0);
    float discriminant(0.0), x1(0.0), x2(0.0);

    // Ввод коэффициентов
    printf("Введите коэффициенты a, b, c для квадратного уравнения ax^2 + bx + c = 0\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    // Проверка, чтобы a не было равно 0
    if (a == 0) {
        printf("Это не квадратное уравнение.\n");
        return 1;
    }

    // Вычисление дискриминанта
    discriminant = b * b - 4.0 * a * c;

    if (discriminant > 0) {
        // Два действительных корня
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Корни уравнения: x1 = %.2f, x2 = %.2f\n", x1, x2);
    } else if (discriminant == 0) {
        // Один корень
        x1 = -b / (2 * a);
        printf("Один корень: x = %.2f\n", x1);
    } else {
        // Нет действительных корней
        printf("Нет действительных корней.\n");
    }

    return 0;
}
