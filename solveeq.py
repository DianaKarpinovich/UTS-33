import math

def solve_quadratic(a, b, c):
    if a == 0:
        print("Ошибка: это не квадратное уравнение.")
        return None

    discriminant = b ** 2 - 4 * a * c

    if discriminant > 0:
        x1 = (-b + math.sqrt(discriminant)) / (2 * a)
        x2 = (-b - math.sqrt(discriminant)) / (2 * a)
        return x1, x2
    elif discriminant == 0:
        x = -b / (2 * a)
        return x,
    else:
        return None  # Комплексные корни не обрабатываем

if __name__ == "__main__":
    a = float(input("Введите a: "))
    b = float(input("Введите b: "))
    c = float(input("Введите c: "))

    result = solve_quadratic(a, b, c)

    if result is None:
        print("Нет действительных корней.")
    elif len(result) == 1:
        print(f"Один корень: x = {result[0]:.2f}")
    else:
        print(f"Корни уравнения: x1 = {result[0]:.2f}, x2 = {result[1]:.2f}")
