#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>
#include <unistd.h>

void chat_to(int socket_fd, const char * message){
  int lenght = strlen(message) + 1;
  write(socket_fd, &lenght, sizeof(lenght));
  write(socket_fd, message, lenght);
}

int main(int argc, char const *argv[]) {
  int socket_fd;
  struct sockaddr_un s_filedata;
  const char * const socket_name = argv[1];
  const char * const message = argv[2];

  socket_fd = socket(AF_LOCAL, SOCK_STREAM, 0);
  s_filedata.sun_family = AF_LOCAL;
  strcpy(s_filedata.sun_path, socket_name);
  connect(socket_fd, (struct sockaddr *)&s_filedata, SUN_LEN(&s_filedata));
  chat_to(socket_fd, message);
  close(socket_fd);

  return 0;
}
