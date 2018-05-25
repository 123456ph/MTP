// Paulo Henrique Marques Martins - 11711EEL033

#include <stdio.h>
 
  int ackermann(int m, int n) {
  
  	if (m == 0) {
   	 return n + 1;
  	}
  	if ((n == 0)&&(m>0)) {
     return ackermann(m - 1, 1);
  	}
  	else
  	 return ackermann(m - 1, ackermann(m, n - 1));
	}
 
int main() {
	int m,n;
	
	printf("Escolha um valor para m: ");
	scanf("%d", &m);
	
	printf("Escolha um valor para n: ");
	scanf("%d", &n);
  
      printf("%d", ackermann(m, n)); 
  }

 
