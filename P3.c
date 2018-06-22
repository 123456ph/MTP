/*Paulo Henrique Marques Martins - 11711EEL033*/
#include<stdio.h>

int main(){
	
	char bin[10],num[10],res[10];
	int k=0,j=0,n=0,i=0,p,x,y,nb,a,b,dado;	
	
	printf("Escolha uma das opcoes:\n");
	printf("1-NOT\n2-AND\n3-OR\n4-XOR\n5-Right Shift\n6-Left Shift\n");
	scanf("%d",&p);
	getchar();
	if(p==1){
		printf("Digite um numero: ");
		scanf("%d",&nb);
		getchar();
			if(nb>0){
			itoa(nb,bin,2);
			while(bin[i]!='\0'){
			if(bin[i]=='1')
				num[i]='0';
			else
				num[i]='1';
			i++;
		}
		for(k=0;k<i;k++){
			j=j*2+(num[k]-'0');
	 	}
		
		printf("Not %d(%s):%d(%s)",nb,bin,j,num);
 		}
 	else if(nb<0){
 			x=nb;
 			itoa(x,bin,2);
			printf("Not %d(%s):%d(%s)",nb,bin,j,num);
 			}
	}
	if(p==2){
		printf("Digite dois numeros: ");
		scanf("%d\n%d",&x,&y);
		getchar();
		for(nb = 0; n >= (1 << nb); nb++){
		}	
	char bin[nb];
	for(i=0; i<nb; i++){
		if(n%2==0){
			bin[i]=0;
		}else{
			bin[i]=1;
		}
		n=n/2;
	}
	for(j = 0; k >= (1 << j); j++){
	}	
	char num[j];
	for(x=0; x<j; x++){
		if(k%2==0){
			num[x]=0-nb;
		}else{
			num[x]=1-nb;
		}
		x=x/2;
	}
		printf("%d %d",bin,num);
	}
	if(p==3){
		printf("Digite dois numero:\n");
		scanf("%d\n%d",&nb,&a);
		getchar();
		printf("A | B |\n");
			for(i=0;i<=nb;i++) {
				a = i & nb;
				b = (i & nb) >> j;
				printf("%d | %d | %d\n", nb|nb);
			}		
	}
	if(p==4){
		printf("\nDigite dois numeros:\n");
		scanf("%d\n%d",&a,&nb);
		gtchar();
		printf("A | B | \n");
			for(i=0;i<=nb;i++) {
				a = i & nb;
				b = (i & nb) >> j;
				printf("%X| %X | %X\n", a, nb, a^nb);
			}		
	}
	if(p==5){
		printf("Digite dois numeros:\n");
		scanf("%d\n%d",&a,&nb);
		getchar();	
		printf("%d | >> %d bits | %d\n", a, nb, a>>nb);
		printf("%d | >> %d bits | %d\n", a, nb, a>>nb );
		}
	if(p==6){
		printf("Digite dois numeros\n");
		scanf("%d\n%d",&a,&nb);
		printf("%d | << %d bits | %d\n", a, nb, a<<nb);
		printf("%d | << %d bits | %d\n", a, nb, a<<nb);
		
	}
	
}
