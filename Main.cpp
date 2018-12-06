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







}