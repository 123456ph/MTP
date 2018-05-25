// Paulo Henrique Marques Martins - 11711EEL033

#include<stdio.h>

int soma(int*,int*);

int soma(int *pp, int *pu) {
return (*pu) + ((pu == pp) ? 0 : soma(pp, pu-1));
}

int main(){
	
	float s,med;
	int v[20];
	int k,i,j;
	int tam=sizeof(v)/sizeof(int);
	int *pp=v,*pu=v+tam-1;
	
	printf("Quantidade de numeros para digitar [5 a 20]: ");
	scanf("%d ",&k);
	
		for(j=0;j<20;j++)
			v[j]=0;
		for(i=0;i<k;i++){
			scanf("%d",&v[i]);
		}getchar();
			s=soma(pp,pu);
			med=s/k;
			printf("Media: %.2f, Soma: %d",med,soma(pp,pu));
			return 0;	
}


