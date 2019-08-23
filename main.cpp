#include <iostream>

void mayor(void){

    int a , b , c ;

    std::cout<<"Digite un número: " ; std::cin >> a ;
    std::cout<<"Digite un número: " ; std::cin >> b ;
    std::cout<<"Digite un número: " ; std::cin >> c ;

    if (a > b and a > c ){
        std::cout << a << " es el número mayor" << std::endl;
    }
    else if (b > a and b > c ){
        std::cout << b << " es el número mayor" << std::endl;
    }
    else {
        std::cout << c << " es el número mayor" << std::endl;
    }
}

int main(){

    mayor();

    return 0;
}