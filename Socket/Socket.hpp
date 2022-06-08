//
//  Socket.hpp
//  
//
//  Created by theHugh on 15/05/2022.
//

#ifndef Socket_hpp
#define Socket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace WEBLIBV1
{

class Socket{
private:
    struct sockaddr_in _in_addr;
    int _sock;
    int _connnection;
public:
    Socket(int pDomain, int pService, int pProtocal, int pPort, u_long pInterface);
    void Test_Connection(int pTestObject);

    // GETTER
    int Get_Socket();
    struct sockaddr_in Get_Address();
    int Get_Connection();
    
    // SETTER
    void Set_Connection(int);
};

}
#endif /* Socket_hpp */
