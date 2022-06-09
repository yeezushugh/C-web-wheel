// Test Socket

#include "WEBLIBV1-Socket.hpp"
#include <stdio.h>
int main(int argc, char * argv[]){
    std::cout<< "Staring.." << std::endl;

    std::cout<< "Binding" << std::endl;
    WEBLIBV1::BindingSocket bs = WEBLIBV1::BindingSocket(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY);
    std::cout<< "Listening" <<std::endl;
    WEBLIBV1::ListeningSocket ls = WEBLIBV1::ListeningSocket(AF_INET, SOCK_STREAM, 0 ,82, INADDR_ANY, 10);

}