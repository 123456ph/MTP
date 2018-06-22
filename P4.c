/*Paulo Henrique Marques Martins - 11711EEL033*/
#include <stdio.h>

int main(){
	
	char n[256];
	int x=0,y=0;	
	
		printf("Digite os caracteres para o conjunto: ");
		scanf("%s",&n);
		getchar();
		printf("Os numeros que estao no conjunto sao: ");
			while(n[x]!='\0'){
				if(n[x]>='0' && n[x]<='9'){
					n[x]=n[x]-48;
					printf("%d",n[x]);
					x++;
				}
				else{
					x++;
					y++;
				}
			}
			if(y==x)
			printf("0");
}
