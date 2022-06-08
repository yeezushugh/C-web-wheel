#include "ConnectingSocket.hpp"
#include "Socket.hpp"
#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>


using namespace std;
using namespace WEBLIBV1;

#define PORT 8080

class test{
    public:
        test(int i){
            cout<<i<<endl;
        }
};

int main(int argc, char * argv[]){
    cout<< "aasd" << endl;
    test* t = new test(1);
    Socket* s = new Socket(AF_INET6,SOCK_STREAM,0,PORT,1);
}
