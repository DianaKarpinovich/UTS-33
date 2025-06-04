#include <stdio.h>
#include <math.h>

// Структура для хранения результата решения квадратного уравнения
struct QuadraticResult {
    int count;     // Количество корней: 0, 1, 2, или -1 для ошибки
    double x1;     // Первый корень
    double x2;     // Второй корень
};

// Функция для решения квадратного уравнения, принимает коэффициенты a, b, c
struct QuadraticResult solve_quadratic(float a, float b, float c) {
    struct QuadraticResult result;
    float discriminant(0.0);
    
    // Проверка, чтобы a не было равно 0
    if (a == 0.0) {
        result.count = -1;  // Ошибка - не квадратное уравнение
        result.x1 = 0.0;
        result.x2 = 0.0;
        return result;
    }
    
    // Вычисление дискриминанта
    discriminant = b * b - 4.0 * a * c;
    
    if (discriminant > 0.0) {
        // Два действительных корня
        result.count = 2;
        result.x1 = (-b + sqrt(discriminant)) / (2.0 * a);
        result.x2 = (-b - sqrt(discriminant)) / (2.0 * a);
    } else if (discriminant == 0.0) {
        // Один корень
        result.count = 1;
        result.x1 = -b / (2.0 * a);
        result.x2 = 0.0;
    } else {
        // Нет действительных корней
        result.count = 0;
        result.x1 = 0.0;
        result.x2 = 0.0;
    }
    
    return result;
}

int main() {
    float a(0.0), b(0.0), c(0.0);
    
    // Ввод коэффициентов
    printf("Введите коэффициенты a, b, c для квадратного уравнения ax^2 + bx + c = 0\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    
    // Вызываем функцию решения уравнения
    struct QuadraticResult result = solve_quadratic(a, b, c);
    
    // Выводим результат в зависимости от количества корней
    if (result.count == -1) {
        printf("Это не квадратное уравнение.\n");
        return 1;
    } else if (result.count == 2) {
        // Два действительных корня
        printf("Корни уравнения: x1 = %.2f, x2 = %.2f\n", result.x1, result.x2);
    } else if (result.count == 1) {
        // Один корень
        printf("Один корень: x = %.2f\n", result.x1);
    } else {
        // Нет действительных корней
        printf("Нет действительных корней.\n");
    }
    
    return 0;
}
