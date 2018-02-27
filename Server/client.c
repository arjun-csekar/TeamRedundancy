#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
	
	int client_socket;
	char msg[256];
	char msg1[256] = "This is client";
	client_socket = socket(AF_INET, SOCK_STREAM, 0);
	
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(9009);
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	int connection_status = connect(client_socket, (struct sockaddr *) &server_address, sizeof(server_address));
	
	if(connection_status == -1){
		printf("No connection :(\n");
	}

	while(msg1 != 'e'){
	printf("Enter text: ");
	//scanf("%s", &msg1);
	fgets(msg1, sizeof(msg1), stdin);
	send(client_socket, msg1, sizeof(msg1), 0);
	
	//recv(client_socket, &msg,  sizeof(msg), 0);
	
	//printf("%s\n", msg);
	}
	close(client_socket);
	return 0;
}
