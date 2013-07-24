#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int c, char * v [])
{
  int f=10, i;

	if(c==2) if(strlen(v[1])==11) {
		for(i=0;i<10;++i) if(isdigit(v[1][i])) f=(((v[1][i]-48+f)%10 ? (v[1][i]-48+f)%10 : 10)*2)%11; else break;
		if(i==10) if(((11-f)%10)==(v[1][10]-48)) exit(0);
	}
	exit(1);
}
