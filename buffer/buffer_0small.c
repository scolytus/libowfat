#include <unistd.h>
#include "buffer.h"

static int b0read(int fd,const char* buf, unsigned int len) {
  if (buffer_flush(buffer_1small)<0) return -1;
  return read(fd,buf,len);
}

char buffer_0_space[128];
static buffer it = BUFFER_INIT(b0read,0,buffer_0_space,sizeof buffer_0_space);
buffer *buffer_0small = &it;
