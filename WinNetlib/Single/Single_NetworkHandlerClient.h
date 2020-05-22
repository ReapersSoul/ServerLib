#pragma once

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

#pragma comment(lib, "Ws2_32.lib")


#include <vector>
#include <string>
#include <iostream>
#include "Single_NetworkBase.h"

class Single_NetworkHandlerClient: public Single_NetworkBase
{
	

public:
	bool Init(PCSTR ip, PCSTR Port);

	bool Connect();

	bool DisConnect();

	bool DefaultInitConnect();

};

