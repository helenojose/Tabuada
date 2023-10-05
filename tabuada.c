#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int tabuada, i, d, s;
	
	
		printf("Escolha qual tabuada vc quer consultar.\n\n");
	
		printf("Digite a tabuada que deseja.\n");
		scanf("%d",&tabuada);
			
			printf("Soma\n");
			for(i=1; i<=10; i++){
				printf("%d+%d = %d\n", i, tabuada, i + tabuada);
			}
				printf("Subtracao\n");
			for(i=1;i<=10;i++){
				s = tabuada+i;
				printf("%d-%d = %d\n", s, tabuada, s - tabuada);
			}
				printf("Multiplicacao\n");
			for (i=1; i<=10; i++){
				printf("%dx%d = %d\n", i, tabuada, i * tabuada);
			}
				printf("Divisao\n");
			for(i=1; i<=10; i++){
				d = tabuada*i;
				printf("%d/%d = %d\n", d, tabuada, d / tabuada);
			}
		
		
		
	
	
		system ("pause");
		return 0;
}
