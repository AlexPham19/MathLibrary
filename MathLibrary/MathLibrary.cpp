#include "pch.h"
#include "MathLibrary.h"

extern "C" __declspec(dllexport) int Add(int a, int b, functionalMyFunc func) {
    int result = a + b;
    if (func) {
        func(result);
    }
    return result;
}
extern "C" __declspec(dllexport) int Subtract(int a, int b, functionalMyFunc func) {
    int result = a - b;
    if (func) {
        func(result);
    }
    return result;
}
extern "C" __declspec(dllexport) int Multiply(int a, int b, functionalMyFunc func) {
    int result = a * b;
    if (func) {
        func(result);
    }
    return result;
}
extern "C" __declspec(dllexport) int Divide(int a, int b, functionalMyFunc func) {
    int result = a / b;
    if (func) {
        func(result);
    }
    return result;
}
extern "C" __declspec(dllexport) int Modulo(int a, int b, functionalMyFunc func) {
    int result = a % b;
    if (func) {
        func(result);
    }
    return result;
}
extern "C" __declspec(dllexport) int Maximum(int a, int b, functionalMyFunc func) {
    int result = a >= b ? a : b;
    if (func) {
        func(result);
    }
    return result;
}
extern "C" __declspec(dllexport) int Minimum(int a, int b, functionalMyFunc func) {
    int result = a <= b;
    if (func) {
        func(result);
    }
    return result;
}