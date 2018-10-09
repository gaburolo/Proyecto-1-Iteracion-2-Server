// Server side C/C++ program to demonstrate Socket programming
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include "Server.cpp"





#define PORT 8080
int main(int argc, char const *argv[]){

    Server server1 = Server(300);
    server1.start();
}

