//
//  ListeningSocket.hpp
//  
//
//  Created by theHugh on 09/06/2022.
//

#include<stdio.h>
#include "BindingSocket.hpp"

namespace WEBLIBV1
{

class ListeningSocket : public BindingSocket
{
private:
    int _listening;
    int _backlog;
public:
    ListeningSocket(int pDomain, int pService, int pProtocal, int pPort, u_long pInterface, int pBacklog);
    void Start_Listening();
};

}