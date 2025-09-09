#include <iostream>
#include <string>
#include <cmath>
int main(){
    int a,b;
    std::cout <<"Нахождение гипотенузы прямоугольного треугольника\n";
    std::cout <<"Введите длины катетов A и B(два целых положительных числа) через пробел:\n";
    std::cin >>a>>b;
    std::cout <<"Гипотенуза равна "<<sqrt(pow(a,2)+pow(b,2));
}