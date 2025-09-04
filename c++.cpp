#include <iostream>
float num=3.14;
void func(){
    std::cout<<"global variable: "<< num <<std::endl;
    std::cout<<"global variable: "<< &num <<std::endl;
    std::cout<<"global variable: "<< sizeof(num) <<std::endl;
    //std::cout<<"global variable: "<<num<<std::endl;


}

int main(){
    int a=1;
    int x,y;
    std::cout<<"global variable: "<<num<<std::endl;
    std::cout<<"main func variable: "<<a<<std::endl;
    func();

    std::cin >> x >>y;
    return 0;
}