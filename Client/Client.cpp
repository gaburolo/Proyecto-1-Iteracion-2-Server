//
// Created by ocastro on 09/10/18.
//

// Client side C/C++ program to demonstrate Socket programming
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include </home/ocastro/CLionProjects/Server/nlohmann/json.hpp>
#include <stdlib.h>
#include "iostream"




#define PORT 8080

using json = nlohmann::json;


class Client {


public:

    Client() {

    }


    int start(long pointer) {

        struct sockaddr_in address;
        int sock = 0, valread;
        struct sockaddr_in serv_addr;
        char change_char[128];
        int ret=snprintf(change_char,sizeof(change_char),"%ld",pointer);

        char *hello = change_char;
        char buffer[1024] = {0};
        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
            printf("\n Socket creation error \n");
            return -1;
        }

        memset(&serv_addr, '0', sizeof(serv_addr));

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(PORT);

        // Convert IPv4 and IPv6 addresses from text to binary form
        if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
            printf("\nInvalid address/ Address not supported \n");
            return -1;
        }

        if (connect(sock, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
            printf("\nConnection Failed \n");
            return -1;
        }
        std::cout << sizeof(change_char) << std::endl;
        send(sock, hello, sizeof(change_char), 0);
        printf("Hello message sent\n");
        valread = read(sock, buffer, 1024);
        printf("%s\n", buffer);
        return 0;
    }

};