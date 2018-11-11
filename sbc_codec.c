
#include <errno.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/poll.h>
#include <sys/errno.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <cutils/str_parms.h>
#include <cutils/sockets.h>
#include <system/audio.h>
#include <hardware/audio.h>
#include <hardware/hardware.h>


int sbc_codec_init()
{
	printf("%s:%d\n",__FILE__,__LINE__);
	return 0;
}

int sbc_codec_proc(unsigned char *pBuf, unsigned int BufLen)
{
	printf("%s:%d\n",__FILE__,__LINE__);
	return 0;
}





