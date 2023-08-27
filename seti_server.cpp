#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>

using namespace std;

int main()
{
	cout << "Server" << endl;
	WSADATA wsadata;
	ADDRINFO hints;
	ADDRINFO* addrResult = NULL;
	SOCKET ClientSocket ;
	SOCKET ListenSocket ;

	int result;
	WSAStartup(MAKEWORD(2, 2), &wsadata);
	

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;

	char recvBuffer[1024];
	
	getaddrinfo(NULL, "1200", &hints, &addrResult);
	ListenSocket = socket(addrResult->ai_family, addrResult->ai_socktype, addrResult->ai_protocol);
	bind(ListenSocket, addrResult->ai_addr, (int)addrResult->ai_addrlen);
	listen(ListenSocket, 1);
	ClientSocket = accept(ListenSocket, NULL, NULL);
	closesocket(ListenSocket);

	
	ZeroMemory(recvBuffer, 1024);
	recv(ClientSocket, recvBuffer, 1024, 0);
	cout << "Received data: " << recvBuffer << endl;
	
	char* output = new char[sizeof(recvBuffer)];

	for (int i = 0; i < sizeof(recvBuffer) ; i++)
	{
		output[i] = recvBuffer[i] ^ 10;
	}

	send(ClientSocket, output, (int)strlen(recvBuffer), 0);
			

	shutdown(ClientSocket, SD_SEND);

	closesocket(ClientSocket);
	freeaddrinfo(addrResult);
	WSACleanup();
	return 0;

}