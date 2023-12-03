// function.cpp
#include "function.h"

double Function::add(double a, double b) {
    return a + b;
}

double Function::subtract(double a, double b) {
    return a - b;
}

double Function::multiply(double a, double b) {
    return a * b;
}

double Function::divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        // Обработка деления на ноль
        return 0.0; // Можно заменить на другое значение или бросить исключение
    }
}