#define HAVE_MENU 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct _posi
{
	int x,y;
} posi;


int getch_nonblock(void);
char** createMenu(int m_size);
void* appendItem(char **p, char *text, int m_size, int *rsize);
int getSelection(char **p, int start_pos, int m_size);
int waitKeys(char *keys, int n);
void freeMenu(char **menu,int m_size);
