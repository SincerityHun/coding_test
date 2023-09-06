#include <iostream>

int main(){
    int num,hour = 0,minute = 0,second = 0;

    std::cin >> num;
    hour = num / 3600;
    num = num % 3600;
    minute = num / 60;
    second = num % 60;
    std::cout << hour << "h "<< minute<<"m "<< second << "s"<<std::endl;
    return 0;
}