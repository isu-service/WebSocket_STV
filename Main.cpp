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
		cerr << "Can�t Initialize Winsoket! Quitting" << endl;
		return;

	}

	SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == INVALID_SOCKET)
	{
		cerr << "Can�t create a socket! Quitting" << end1;
		return;
	}


}