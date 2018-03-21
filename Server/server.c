#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
	
	char msg[256] = "This is server";
	char msg1[256];
	
	//Placeholder for multiclient
	
	int server_socket, client_socket;
	
	server_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	struct sockaddr_in server_address;
	
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9009);
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	bind(server_socket, (struct sockaddr*) &server_address, sizeof(server_address));

	listen(server_socket, 3);
	client_socket = accept(server_socket, NULL, NULL);
	while(client_socket){
	send(client_socket, msg, sizeof(msg), 0);
	
	
	recv(client_socket, &msg1,  sizeof(msg), 0);
	
	printf("%s", msg1);
	}
	close(server_socket);
	return 0;
}
