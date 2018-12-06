#include <iostream>
#include <WS2tcpip.h>

#pragma comment (lib, "ws_32.lib")

using namespace std;

void main()
{
	
	WSADATA wsData;
	WORD ver = MAKEWORD(2, 2);

	int wsOK = WSAStartup(ver, &wsData);
	if (wsOK != 0)

	{
		cerr << "Can´t Initialize Winsoket! Quitting" << endl;
		return;

	}

	SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == INVALID_SOCKET)
	{
		cerr << "Can´t create a socket! Quitting" << end1;
		return;
	}

	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(23333);
	hint.sin._addr.S_un.S_addr ) INADDR_ANY; // Irgendwas und so

	bind(listening, (sockaddr*)&hint, sizeof(hint));

	listen(listening, SOMAXXCONN);

	sockaddr_in client;
	int clientsize = sizeof(client);

	SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientsize);
	
	char host[NI_MAXHOST]; // Client remotename
	char service[NI_MAXHOST]; // Service 

	ZeroMemory(host, NI_MAXHOST);
	ZeroMemory(service, NI_MAXHOST);

}