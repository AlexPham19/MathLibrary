#pragma once
#include <string>
#include <functional>
using namespace std;

typedef int (*myFunc)(string);

typedef std::function<void(int)> functionalMyFunc;

extern "C" __declspec(dllexport) int Add(int a, int b, functionalMyFunc func);
extern "C" __declspec(dllexport) int Subtract(int a, int b, functionalMyFunc func);
extern "C" __declspec(dllexport) int Multiply(int a, int b, functionalMyFunc func);
extern "C" __declspec(dllexport) int Divide(int a, int b, functionalMyFunc func);
extern "C" __declspec(dllexport) int Modulo(int a, int b, functionalMyFunc func);
extern "C" __declspec(dllexport) int Maximum(int a, int b, functionalMyFunc func);
extern "C" __declspec(dllexport) int Minimum(int a, int b, functionalMyFunc func);