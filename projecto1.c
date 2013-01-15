#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef {
int cod_cliente[5];
char nome[20];
char apelido[20];
int data_nasc[10];
char morada[100];
int telf[10];
} clientes

typedef {
int n_medico[5];
char nome[50];
int data_nasc[10];
char morada[100];
int telf[10];
} medicos

typedef {
int n_animal[5];
char nome[50];
int data_nasc[10];
char tipo_animal[20];
char raca[50];
} animais

typedef {
int n_consulta[10];
int n_cliente[5];
int n_anima[l5];
int n_medico[5];
int data[20];
int hora[10];
char observacoes[100];
} consultas



//Adiciona os dados do cliente e grava no ficheiro
void adiconarCliente(){
     
     
     printf("Nome: "); gets();
     printf("Apelido: "); gets();
     printf("Data de Nascimento: "); gets();
     printf("Morada"); gets();
     printf("Telf.: "); gets();
     }
     
//Adiciona os dados do Médico e grava no ficheiro     
void adiconarMedico(){
     
     
     printf("Nome: "); gets();
     printf("Apelido: "); gets();
     printf("Data de Nascimento: "); gets();
     printf("Morada"); gets();
     printf("Telf.: "); gets();
     }
     
//Adiciona os dados do Animal e grava no ficheiro     
void adiconarAnimal(){
     
     
     printf("Nome: "); gets();
     printf("Data de Nascimento: "); gets();
     printf("Tipo animal: "); gets();
     printf("Raca"); gets();
     }
     
     
