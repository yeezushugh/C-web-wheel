//
//  Socket.cpp
//  
//
//  Created by theHugh on 15/05/2022.
//

#include "Socket.hpp"

// INSTANTIATE Socket Through Constructor
WEBLIBV1::Socket::Socket(int pDomain, int pService, int pProtocal, int pPort, u_long pInterface){

    // Define In-coming address structure
    _in_addr.sin_family = pDomain;
    _in_addr.sin_port = htons(pPort);
    _in_addr.sin_addr.s_addr = htonl(pInterface);

    // Establish Socket Object
    _sock = socket(pDomain,pService,pProtocal);
}

// Test if Socket is successfully established 
void WEBLIBV1::Socket::Test_Connection(int pTestObject){
    if(pTestObject < 0){
        perror("Open Socket Failed");
        exit(EXIT_FAILURE);
    }
}

// GET Socket Object
int WEBLIBV1::Socket::Get_Socket(){
    return _sock;
}

// GET In coming address
struct sockaddr_in WEBLIBV1::Socket::Get_Address(){
    return _in_addr;
}

// GET Connection Object
int WEBLIBV1::Socket::Get_Connection(){
    return _connnection;
}

// SET connection
void WEBLIBV1::Socket::Set_Connection(int pConnection){
    _connnection = pConnection;
}

