
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
//����ڿ��� �޼����� �޴�
	char message[100];
	printf("Enter your message:");
	fgets(message, sizeof(message), stdin);

	//��ȣ�� �ֱ�(���ڸ� �� ���� �̵�?
	int shift;
	printf("enter shift value:");
	scanf_s("%d", &shift);


	//��ȣȭ
	cypher(message, shift);

	printf("Encrypted %s", message);

	return 0;
}