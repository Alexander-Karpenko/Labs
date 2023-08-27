#define WIN32_LEAN_AND_MEAN

#include <iostream>
#include <windows.h>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <string>

using namespace std;

int main()
{
	cout << "Client" << endl;
	WSADATA wsadata;
	ADDRINFO hints;
	ADDRINFO* addrResult = NULL;
	SOCKET ConnectSocket = INVALID_SOCKET;

	int result;
	WSAStartup(MAKEWORD(2, 2), &wsadata);
	

	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;
	cout << "Enter string " << endl;
	string sendBufferstr;
	getline(cin, sendBufferstr);
	const char* sendBuffer = sendBufferstr.c_str();


	char recvBuffer[1024];
	getaddrinfo("localhost", "1200", &hints, &addrResult);
	ConnectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	result = connect(ConnectSocket, addrResult->ai_addr, (int)addrResult->ai_addrlen);
	if (result == SOCKET_ERROR)
	{
		cout << "Unable connect to server" << endl;
		closesocket(ConnectSocket);
		ConnectSocket = INVALID_SOCKET;
		freeaddrinfo(addrResult);
		WSACleanup();
		return 1;
	}
	
	send(ConnectSocket, sendBuffer, (int)strlen(sendBuffer), 0);
	shutdown(ConnectSocket, SD_SEND);
	
	
		ZeroMemory(recvBuffer, 1024);
		recv(ConnectSocket, recvBuffer, 1024, 0);
		cout << "Received data: " << recvBuffer << endl;
	
	closesocket(ConnectSocket);
	freeaddrinfo(addrResult);
	WSACleanup();
	return 0; 

}