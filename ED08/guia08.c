#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void metodo0811(){
	int tamanho;
	printf("digite o tamanho desejado do array\n");
	scanf("%d", &tamanho);

	if(tamanho>0){
		int array[tamanho];
		printf("digite os valores do array(impares e positivos)\n");
		for(int i = 0; i<tamanho; i++){
				scanf("%d", &array[i]);
				if(array[i]%2!=0 && array[i]>0){
					printf("%d ", array[i]);
			    } 
		}
		
     }else if(tamanho<0){
		printf("tamanho invalido\n");
	}

	printf("\n");
}

void metodo0812() {
    FILE *arq;
    arq = fopen("ARQUIVO02.txt", "r");
    
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    int c[100];
    int i = 0;
    int outro[100];
    int tamanho = 0;
    int tamanho2 = 0;
    
    while (fscanf(arq, "%d", &c[i]) == 1) {
        tamanho++;
        if (c[i] % 2 != 0 && c[i] > 0) {
            outro[tamanho2] = c[i];  
            tamanho2++;
        }
        i++;
    }

    fclose(arq);  

    FILE *arq2;
    arq2 = fopen("RESULTADO02.txt", "w");
    if (arq2 == NULL) {
        printf("Erro ao abrir o arquivo para escrita\n");
        return;
    }

    fprintf(arq2, "%d\n", tamanho);
    
    
    for (int j = 0; j < tamanho2; j++) {
        fprintf(arq2, "%d", outro[j]);
    }
    
    fclose(arq2);  
    printf("As informações foram guardadas no arquivo RESULTADO02.txt\n");
}

void gerarInt(int inferior, int superior){
    
    if (superior <= inferior) {
        printf("Intervalo inválido.\n");
        return;
    }

    int numeros =  1 + (superior - inferior);
    int array[numeros];

    srand(time(0));

    for(int i = 0; i < numeros; i++){
        array[i] = inferior + rand() % (superior - inferior + 1);
    }

    FILE *arq;
    arq = fopen("DADOS.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(arq, "%d\n", numeros);

    for(int j = 0; j < numeros; j++){
        fprintf(arq, "%d\n", array[j]);
    }

    fclose(arq);
    printf("Os numeros foram gravados no arquivo DADOS.txt\n");
}

void metodo0813(){
    int primeiro, segundo;
    printf("Digite o primeiro valor que definirá o começo do intervalo:\n");
    scanf("%d", &primeiro);
    printf("Digite o segundo valor que definirá o final do intervalo:\n");
    scanf("%d", &segundo);
    
    gerarInt(primeiro, segundo);
}

void lerArquivo(FILE *DADOS, int n) {
    int array[100];
    int menor = -1;  

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 != 0) {  
            if (menor == -1 || array[i] < menor) {
                menor = array[i]; 
            }
        }
    }

    if (menor != -1) {
        fprintf(DADOS, "%d", menor);  
        printf("O menor ímpar foi gravado no arquivo DADOS.txt\n");
    } else {
        printf("Nenhum número ímpar foi encontrado.\n");
    }
}

void metodo0814() {
    FILE *arq = fopen("DADOS.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo DADOS.txt.\n");
        return;
    }

    int x;
    printf("Digite a quantidade de números do array:\n");
    scanf("%d", &x);

    lerArquivo(arq, x);

    fclose(arq); 
}

void acharMaior(FILE *DADOS, int n) {
    int array[100];
    int maior = 0;  

    printf("Digite os elementos do array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0 && array[i]%3==0) {  
            if (maior == 0 || array[i] > maior) {
                maior = array[i]; 
            }
        }
    }

    if (maior != -1) {
        fprintf(DADOS, "%d", maior);  
        printf("O menor ímpar foi gravado no arquivo DADOS2.txt\n");
    } else {
        printf("Nenhum número ímpar foi encontrado.\n");
    }
}


void metodo0815() {
    FILE *arq = fopen("DADOS2.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo DADOS2.txt.\n");
        return;
    }

    int x;
    printf("Digite a quantidade de números do array:\n");
    scanf("%d", &x);

    acharMaior(arq, x);

    fclose(arq); 
}

void metodo0816(){

}

void metodo0817(){

}

void metodo0818(){

}

void metodo0819(){

}

void metodo0820(){

}

void metodo08E1(){

}

void metodo08E2(){

}

int main() {
  int opcao;


    do{
    printf("digite o numero correspondente ao metodo desejado(1 a 12) ou 0 para encerrar:\n");
    scanf("%d", &opcao);
	getchar();


    switch(opcao){
        case 1:
        metodo0811();
        break;
        
        case 2:
        metodo0812();
        break;
        
        case 3:
        metodo0813();
        break;
        
        case 4:
        metodo0814();
        break;
        
        case 5:
        metodo0815();
        break;
        
        case 6:
        metodo0816();
        break;
        
        case 7:
        metodo0817();
        break;
        
        case 8:
        metodo0818();
        break;
        
        case 9:
        metodo0819();
        break;
        
        case 10:
        metodo0820();
        break;
        
        case 11:
        metodo08E1();
        break;
        
        case 12:
        metodo08E2();
        break;

    }

    }while(opcao !=0);

    return 0;
}
