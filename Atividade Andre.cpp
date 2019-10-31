#include<stdio.h>

int linha,coluna,tamanho;
//monta a matriz
void dimensionarMatriz(int l, int c){
	linha=l;
	coluna=c;
	tamanho = linha*coluna;
}
//adiciona manualmente a matriz
int inserir (int *vetor, int valor, int l, int c){
	vetor[(l*coluna)+c] = valor;
	//printf("\n Posicao: %d",(l*coluna)+c);
}
//preenche a matriz com 0
void zerar (int *vetor){
	for(int i=0;i<tamanho;i++){
		vetor[i]=0;
	}
}

//busca o valor na matriz

int buscar (int *vetor,int l, int c){
	//printf("\nColuna: %d",coluna);
	return vetor[(l*coluna)+c];
}

//imprime a matriz

void imprimir(int *vetor){
	int k;
	int cont=0;
	for(k=0;k<tamanho;k++){
		if(cont == coluna){
			printf("\n");
			cont=0;
		}
		printf("%d ",vetor[k]);
		cont ++;
	}
	printf("\n");
}

//produto de matrizes
//questao 1 !!!
void produtoMatriz(){
			
	// primeira matriz
	
	dimensionarMatriz(3,2);
	
	//montando os vetor 1;
	
	int vet1[tamanho];
	
	//preenchendo o vetor 1 com 0
	
	zerar(vet1);

	//montando a matriz 1
	inserir(vet1,-7,0,0);
	inserir(vet1,-3,0,1);
	inserir(vet1,4,1,0);
	inserir(vet1,-8,1,1);
	inserir(vet1,-1,2,0);
	inserir(vet1,-6,2,1);
	
	printf("Matriz 1 : \n");
	
	imprimir(vet1);
	
	printf("\n");
	
	// segunda matriz
	
	dimensionarMatriz(2,3);
	
	//montando o vetor 2 
	
	int vet2[tamanho];
	
	//preenchendo o vetor 2 com 0
	zerar(vet2);
	
	//montar matriz 2 
	
	inserir(vet2,2,0,0);
	inserir(vet2,-5,0,1);
	inserir(vet2,3,0,2);
	inserir(vet2,1,1,0);
	inserir(vet2,4,1,1);
	inserir(vet2,9,1,2);
	
	printf("Matriz 2 : \n");
	imprimir(vet2);
	// terceira matriz
	
	dimensionarMatriz(3,3);
	
	//montando o vetor 3
	
	int vet3[tamanho];
	
	//preenchendo o vetor 3 com 0
	zerar(vet3);

	//calculos para montar a matriz 3
	
	int somar = 0 ;
	int i,j,k;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				int	mult = buscar(vet1,i,k)*buscar(vet2,k,j);
				somar += mult;
				
			}
			inserir(vet3,somar,i,j);
			somar=0;
		}
	}
	
	printf("\nProduto das Matrizes 1 e 2 eh : \n");
	imprimir(vet3);
}

main (){
	produtoMatriz();
}
