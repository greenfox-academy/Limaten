#ifndef _BROADCAST_H_
#define _BROADCAST_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <winsock2.h>
#include <conio.h>
#include <math.h>

#define BC_SERVER_PORT      12345
#define DATA_BUFFER_SIZE    1024

void thread_broadcast();

#endif // _BROADCAST_H_
