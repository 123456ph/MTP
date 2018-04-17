/* Aluno: Paulo Henrique Marques Martins
Matricula: 11711EEL033 */

#include<stdio.h>

int main()
{
	char codigos[256];
	int n=0, i=0;

	scanf("%s", codigos);

	while(codigos[i] != '\0') {

		if(codigos[i]=='0'&&n==0||codigos[i]=='1'&&n==1)
			n=0;
		else if(codigos[i]=='1'&&n==0||codigos[i]=='0'&&n==2)
			n=1;
		else if(codigos[i]=='0'&&n==1||codigos[i]=='1'&&n==2)
			n=2;

		i++;
	}

	if(n==0)
		printf("%s e multiplo de 3\n", codigos);
	else
		printf("%s nao e\n", codigos);

	return 0;
}
