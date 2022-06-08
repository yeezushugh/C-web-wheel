//
//  BindingSocket.cpp
//  
//
//  Created by theHugh on 15/05/2022.
//

#include "BindingSocket.hpp"
#include "Socket.hpp"

// INSTANTIATE BindingSocket Through Constructor
// PASS Parameters to Parent Class Socket
WEBLIBV1::BindingSocket::BindingSocket(int pDomain, int pService, int pProtocal, int pPort, u_long pInterface) : 
        Socket(pDomain, pService, pProtocal, pPort, pInterface){
            Set_Connection(Connect_Socket(Get_Socket(),Get_Address()));
            Test_Connection(Get_Connection());
        };

int WEBLIBV1::BindingSocket::Connect_Socket(int pSock, struct sockaddr_in pAddress){
    return bind(pSock, (struct sockaddr *) &pAddress, sizeof(pAddress));
}
