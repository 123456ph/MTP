//Paulo Henrique Marques Martins - 11711EEL033

#include<stdio.h>

int main(){
	
   int n;
	
	printf("\n1. Codificador\n\n \n2.Decodificador:\n\n");
	scanf("%d",&n);
	getchar();
	
		if(n==1){
			char str[256];
			int i=0,*ps;
		
			printf("\nO que deseja codificar:\n ");
			gets(str);
			fflush(stdin);
		
			printf("\nA codificacao ficou:\n ");
				for(ps=(int*)str; ps < ((int *) str) + sizeof(str); ps++){
					if(*ps == 0)
					break;
					printf("%d\n, ",*ps);
				}
		
		}	
		if(n==2){
			char *pt;
			double mat[64][9];
			int j,k=0;
			printf("\nO que deseja decodificar:\n ");
				for(j = 0; j < 64; j++)		
					scanf("%d",&mat[j]);
						if(mat[j][k] == ' '){				
							mat[j][k+1] = getchar();
				
						}
						if(mat[j][k]=='\0'){
						}
			
		
			pt=(char*)&mat;
				for(pt;pt<(char*)&mat+sizeof(mat);pt++){
					if(*pt == 0)
						break;
				printf("%c",*pt);
				}		
		}
}

