
#include <stdio.h>
#include <string.h>

void cypher(char* msg, int sft) {

	char ch;
	int i;

	for (i = 0; msg[i] != '\0'; ++i) {
		ch = msg[i];

		if (ch > 'a' && ch <= 'z') {
			ch = ch + sft;

			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			else if (ch < 'a'){
				ch=ch +'z'-'a'+1;
			}

			msg[i] = ch;
		}

	}
}


int main(void) {
//사용자에게 메세지를 받다
	char message[100];
	printf("Enter your message:");
	fgets(message, sizeof(message), stdin);

	//암호값 주기(분자를 몇 개씩 이동?
	int shift;
	printf("enter shift value:");
	scanf_s("%d", &shift);


	//암호화
	cypher(message, shift);

	printf("Encrypted %s", message);

	return 0;
}