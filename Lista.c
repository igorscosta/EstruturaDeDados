#include <stdio.h>

typedef struct Livro
{
	char Titulo[30];
	char Autor[30];
	int NumReg;
	float preco;
	struct Livro *Proximo;
}Livro;

Livro *primeiro, *atual, *NovoLivro;

void setLivro(char t[30], char a[30], int n, float p){

	NovoLivro = (Livro *)malloc(sizeof(Livro));
	if(primeiro == (Livro*)NULL){
		primeiro = atual = NovoLivro;
	}
	else{

		atual = primeiro;
		while(atual->Proximo != (Livro*)NULL){
			atual = atual->Proximo;	
		}
		atual->Proximo = NovoLivro;
		atual = NovoLivro;
	}

	strcpy(atual->Titulo,t);
	strcpy(atual->Autor,a);
	atual->NumReg = n;
	atual->preco = p;

	atual->Proximo=(Livro*)NULL;
}

void listaLivro(){
	if(primeiro == (Livro*)NULL){
		printf("NULL\n");
	}
	atual = primeiro;
	do
	{
		printf("%s\n", atual->Titulo);
		printf("%s\n", atual->Autor);
		printf("%d\n", atual->NumReg);
		printf("%.2f\n", atual->preco);
		atual = atual->Proximo;
	} while (atual != NULL);
}

int main(){

	setLivro("jose", "jose", 123, 2.3);

	listaLivro();

}
