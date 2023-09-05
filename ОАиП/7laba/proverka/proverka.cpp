#include <iomanip>

bool isDevidedBy(const int dividend, const int divisor) {
    return dividend % divisor == 0;
}

int countDigits(int num) {
    int digits[10]{ 0 };

    while (num != 0) {
        digits[num % 10]++;
        num /= 10;
    }

    int counter = 0;
    for (int i = 0; i < 10; i++) {
        if (digits[i] != 0) {
            counter++;
        }
    }
    return counter;
}

int digitsSum(int num) {
    int digits[10]{ 0 };

    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

bool isTarget(const int number) {
    if (!isDevidedBy(number, 2) || !isDevidedBy(number, 7) || !isDevidedBy(number, 11)) {
        return false;
    }

    if (countDigits(number) != 2) {
        return false;
    }

    if (digitsSum(number) != 30) {
        return false;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");

    for (int carNumber = 0; carNumber <= 9999; carNumber++) {
        if (isTarget(carNumber)) {
            printf("Возможный номер машины: %d", carNumber);
        }
    }
}