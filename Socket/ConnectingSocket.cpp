//
//  ConnectingSocket.cpp
//  
//
//  Created by theHugh on 15/05/2022.
//

#include "ConnectingSocket.hpp"

// INSTANTIATE ConnectingSocket Through Constructor
// PASS Parameters to Parent Class Socket
WEBLIBV1::ConnectingSocket::ConnectingSocket(int pDomain, int pService, int pProtocal, int pPort, u_long pInterface) : 
        Socket(pDomain, pService, pProtocal, pPort, pInterface){
            Set_Connection(Connect(Get_Socket,Get_Address));
            Test_Connection(Get_Connection);
        };

int WEBLIBV1::ConnectingSocket::Connect_Socket(int pSock, struct sockaddr_in pAddress){
    return connect(pSock, (struct sockaddr *) &pAddress, sizeof(pAddress));
}
