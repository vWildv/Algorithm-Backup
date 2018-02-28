#include<stdio.h>
#include<string.h>
int main() {
	char a[200];
	int i,j;
loop:
	while(gets(a)!=NULL) {
		for(i = 0; i < strlen(a); i++) {
			if(a[i]=='b'&&a[i+1]=='k'&&a[i+2]=='p'&&a[i+3]=='s'&&a[i+4]=='t'&&a[i+5]=='o'&&a[i+6]=='r') {
				printf("Warning\n");
				goto loop;
			}
		}
		printf("Safe\n");
		goto loop;
	}
	return 0;
}