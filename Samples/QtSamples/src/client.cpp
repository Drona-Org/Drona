//UDP Client

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h> 
#include <string.h>
#define BUFLEN 512
#define PORT 9930

// Error handling
void err(char *s)
{
    perror(s);
    exit(1);
}

// Main client
int main(int argc, char** argv)
{
    struct sockaddr_in serv_addr;
    int sockfd, slen=sizeof(serv_addr);
    char buf[BUFLEN];

    // Check if server address has been given
    if(argc != 2)
    {
      printf("Usage : %s <Server-IP>\n",argv[0]);
      exit(0);
    }

    // Create a socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP))==-1)
        err("socket");

    bzero(&serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert Internet address into binary and store it in serv_addr.sin_addr
    if (inet_aton(argv[1], &serv_addr.sin_addr)==0)
    {
        fprintf(stderr, "inet_aton() failed\n");
        exit(1);
    }

    while(1)
    {
        printf("\nEnter data to send(Type exit and press enter to exit) : ");
        scanf("%[^\n]",buf);
        getchar();
        if(strcmp(buf,"exit") == 0)
          exit(0);

        // sendto() send data
        // args: socket descriptor, pointer to buffer, bufflen, flag (regular rec), socket where data are to, size of socket address
        if (sendto(sockfd, buf, BUFLEN, 0, (struct sockaddr*)&serv_addr, slen)==-1)
            err("sendto()");
    }

    close(sockfd);
    return 0;
}
