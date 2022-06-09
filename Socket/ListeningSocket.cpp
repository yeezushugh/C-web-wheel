//
//  ListeningSocket.cpp
//  
//
//  Created by theHugh on 09/06/2022.
//

#include "ListeningSocket.hpp"

// INSTANTIATE a Listening Socket Through Constructor
WEBLIBV1::ListeningSocket::ListeningSocket(int pDomain, int pService, int pProtocal, int pPort, u_long pInterface, int pBacklog)
: BindingSocket(pDomain, pService, pProtocal, pPort, pInterface){
    _backlog = pBacklog;
    Start_Listening();
    Test_Connection(_listening);
}

void WEBLIBV1::ListeningSocket::Start_Listening(){
    _listening = listen(Get_Connection(),_backlog);
}