// Test Socket

#include "WEBLIBV1-Socket.hpp"
#include <stdio.h>
int main(int argc, char * argv[]){
    std::cout<< "Staring.." << std::endl;
    WEBLIBV1::BindingSocket bs = WEBLIBV1::BindingSocket(AF_INET, SOCK_STREAM, 0, 8088, INADDR_ANY);
    WEBLIBV1::ListeningSocket ls = WEBLIBV1::ListeningSocket(AF_INET, SOCK_STREAM, 0 ,8080, INADDR_ANY, 10);
}