/* Aluno: Paulo Henrique Marques Martins
Matricula: 11711EEL033 */

#include <stdio.h>
int main(){
	
	char bits[256];
	int n,jb,j=0,i=0;
	
	printf("Escolha uma opcao:\n1. Binario para Decimal\n2- Binario para Hexadecimal\n3- Hexadecimal para Decimal\n4. Hexadecimal para Binario\n5. Decimal para Binario\n6. Decimal para Hexadecimal\n7. Octal para Decimal\n8. Decimal para Octal\n");
	scanf("%d",&n);
	
		if(n==1){
		printf("Digite o numero binario: ");
		scanf("%s",&bits);
		for(i; bits[i]!='\0'; i++){
			j=j*2+(bits[i]-'0');
		}
		printf("O numero decimal e: %d",j);

	}
		else if(n==2){
		printf("Digite o numero binario: ");
		scanf("%s",bits);
		for(i; bits[i]!='\0'; i++){
			j=j*2+(bits[i]-'0');
		}
		printf("O numero hexadecimal e: %X",j);
	}
		else if(n==3){
		printf("Digite o numero hexadecimal: ");
		scanf("%x",&j);
		printf("O numero e decimal e: %d",j);
	}
		else if(n==4){
		printf("Digite o numero hexadecimal: ");
		scanf("%x",&j);
		for(jb = 0; j >= (1 << jb); jb++){
		}
		char conv[jb];
		for(i;i<jb;i++){
			if(j%2==0)
			conv[i]=0;
			else
			conv[i]=1;
			j=j/2;

	}
			printf("O numero binario e:");
			for(i=jb-1; i>=0; i--){
			printf("%d", conv[i]);
		}
	}
		else if(n==5){
		printf("Digite o numero decimal: ");
		scanf("%d",&j);
		itoa (j,bits,2);
		printf("O numero binario e: %s",bits);
	}
		else if(n==6){
		printf("Digite o numero decimal: ");
		scanf("%d",&j);
		itoa (j,bits,16);
		printf("O numero hexadecimal e: %s",bits);
		
	}
		else if(n==7){
		printf("Digite o numero octal: ");
		scanf("%o",&j);
		printf("O numero decimal e: %d",j);
		
	}
		else if(n==8){
		printf("Digite o numero decimal: ");
		scanf("%d",&j);
		itoa (j,bits,8);
		printf("O numero octal e: %s",bits);
	}
	return 0;
}
