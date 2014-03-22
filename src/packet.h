#include <sys/types.h>
#define MAX_PACKET_LENGTH 1024

typedef struct packet {
	char packetData[MAX_PACKET_LENGTH];
	unsigned short int acknak;
	unsigned short int seqNumber;
	unsigned short int checksum;
	
}; packet