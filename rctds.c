#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
  char domain[INET_ADDRSTRLEN];
  struct addrinfo radio, *head, *ok;
  memset(&radio, 0, sizeof(radio));
  radio.ai_family = AF_INET;
  radio.ai_socktype = SOCK_STREAM;
  radio.ai_flags = 0;
  if (getaddrinfo(argv[2], argv[1], &radio, &head) < 0) {
    printf("Couldn't get the address info\n");
    return -1;
  }
  for (ok = head;ok != NULL; ok = head->ai_next) {
    void *baddr;
    if (ok->ai_family == AF_INET) {
      struct sockaddr_in *ipv4addr = (struct sockaddr_in *)ok->ai_addr;
      baddr = &(ipv4addr->sin_addr);
    }
    inet_ntop(ok->ai_family, baddr, domain, sizeof(domain));
    printf("IP: %s\n", domain);
  }
if (strcmp(argv[1], "-h") == 0) {
  printf("SYNTAX rctds (-h) PORT ADDRESS  \n -h: Displays this menu \n If you have any problems report them on Github\n");
  printf("NOTE: Do not put -h if you want to connect to a socket\n");
  return 0;
  }
    FILE *hostname = fopen("/etc/hostname", "r");
    char hostnamec[100];
    fgets(hostnamec, 100, hostname);
    int port = atoi(argv[1]);
    struct sockaddr_in feetpics;
      feetpics.sin_family = AF_INET;
    feetpics.sin_port = htons(port);
    feetpics.sin_addr.s_addr = inet_addr(domain);
    struct sockaddr *addr = (struct sockaddr *)&feetpics;
    socklen_t sockbuf;
    sockbuf = sizeof(feetpics);
	  while (main) {
  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
  if (sockfd < 0) {
    printf("Not Working\n");
    return -1;
  }
if (connect(sockfd, addr, sockbuf) < 0 ) {
    printf("couldn't establish a connection with 127.0.0.1\n");
    return -1;
  } else {
		  char buffer[100];
		    printf("Input the message you want to send\n");
		    fgets(buffer, 100, stdin);
      struct sockaddr_in jaycar;
      struct sockaddr *radioshack = (struct sockaddr *)&jaycar;
      socklen_t jaycarbuf = sizeof(jaycar);
    getpeername(sockfd, radioshack, &jaycarbuf);
    printf("connected to %s:%d\n", inet_ntoa(jaycar.sin_addr), ntohs(jaycar.sin_port));
    size_t ben = strlen(buffer);
    int flags = MSG_CONFIRM;
    ssize_t result = send(sockfd, buffer, 100, flags);
    if (result < 0) {
      printf("Message not sent\n");
      return -1;
    } else {
      printf("Message sent\n");
      close(sockfd);
    }
	  }
  }
}
