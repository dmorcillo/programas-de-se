#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>

int talk_to(int client_socket){
  int lenght;
  char* message;
  if (read(client_socket, &lenght, sizeof(lenght)) == 0)
    return 0 ;

  message = (char*) malloc(lenght);
  read(client_socket, message, lenght);
  printf("%s\n", message);
  free(message);
  if (!strcmp(message, "exit"))
    return 1;
}

int main(int argc, char const *argv[]) {

  const char * const socket_name = argv[1];
  struct sockaddr_un s_filedata;
  int exit_message;

  int socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0);
  s_filedata.sun_family = AF_LOCAL;
  strcpy(s_filedata.sun_path, socket_name);
  bind(socket_fd, (struct sockaddr *)&s_filedata, SUN_LEN(&s_filedata));
  listen(socket_fd, 5);

  do {
    int client_socket_fd;
    struct sockaddr_un client_name;
    socklen_t client_len;

    client_socket_fd = accept(socket_fd, (struct sockaddr *)&client_name, &client_len);
    exit_message = talk_to(client_socket_fd);
    close(client_socket_fd);
  } while(exit_message != 0);
  close(socket_fd);
  unlink(socket_name);

  return 0;
}
