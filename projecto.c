#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define NC 200   //Numero máximo de clientes

typedef struct{
int dia;
int mes;
int ano;
} datas;


typedef struct{
int cod_cliente;
char nome[20];
datas data_nasc;
char morada[100];
long int telf;
int estado;   // 1-Activo 0- Desactivo
} clientes;



typedef struct{
int n_medico[5];
char nome[50];
datas data_nasc;
char morada[100];
long int telf[10];
int estado; // 1-Activo 0- Desactivo
} medicos;

typedef struct{
int n_animal[5];
char nome[50];
datas data_nasc;
char tipo_animal[20];
char raca[50];
int estado; // 1-Activo 0- Desactivo
} animais;


typedef struct{
int hora[2];
int minutos[2];
} horas;



typedef struct{
int n_consulta[10];
int n_cliente[5];
int n_animal[5];
int n_medico[5];
datas data;
horas hora;
char observacoes[100];
int estado; // 1-Activo 0-Desactivo
} consultas;


//Iniciação de variaveis
void inicializacao(clientes *cliente){
     int n;
     int flag=0;
     for(n=0;n<NC;n++){
                       cliente[n].cod_cliente=0;
                       cliente[n].estado=0;
                       } 
                       
                       printf("Variaveis inicializadas com sucesso!");
}



//Lista os clientes
void listarClientes(clientes *cliente){
     system ("cls");
     int n;
     int flag=0;
     for(n=0;n<NC;n++){
            if (cliente[n].estado==1){
                  printf("Cliente n. %d \n\n",cliente[n].cod_cliente);
                  printf("Nome: %s\n ",cliente[n].nome);
                  printf("Data de Nascimento: %d/%d/%d\n",
                  cliente[n].data_nasc.dia,
                  cliente[n].data_nasc.mes,
                  cliente[n].data_nasc.ano);
                  printf("Telefone: %ld\n",cliente[n].telf);
                  printf("Morada: %s\n\n",cliente[n].morada);  
                  flag=1;                   
                                       
             }          
                       
                       
         }if (flag==0)
                printf("Lista de Clientes vazia!");
         getch();
     
}


//Adiciona cliente
void adicionarCliente(clientes *cliente){

    system ("cls");
    int n;
    int flag=0;
    for(n=0; n<NC;n++){
             if (cliente[n].estado!=1){
                srand(time(NULL));
                cliente[n].cod_cliente=rand()%9999; // Numero gerado aleatoriamente 
                printf("Cliente n. %d \n\n",cliente[n].cod_cliente);
                printf("Nome: "); gets(cliente[n].nome); fflush(stdin);
                printf("Data de Nascimento: \nDia: "); scanf("%d",&cliente[n].data_nasc.dia);
                printf("Mes: "); scanf("%d",&cliente[n].data_nasc.mes);
                printf("Ano: "); scanf("%d",&cliente[n].data_nasc.ano);
                printf("Telefone: "); scanf("%ld",&cliente[n].telf);  fflush(stdin);
                printf("Morada: "); gets(cliente[n].morada);fflush(stdin);
                cliente[n].estado=1;
                system("cls");
                printf("Cliente n. %d inserido com sucesso!\n\n",cliente[n].cod_cliente );
                n=NC;
                flag=1;
                getch();
                }
             } if (flag==0){
                  printf("Número máximo de clientes atingido ou erro na introdução de novo cliente! Por favor contactar os serviços técnicos!");
                  getch();
             }

}



//Edita os dados do cliente
void editarCliente(clientes *cliente){

     system ("cls");
    int n,cod,flag=0;
    printf("Escreva o número do cliente que quer editar: ");
    scanf("%d",&cod); fflush(stdin);
    for(n=0; n<NC;n++){
             if (cliente[n].cod_cliente==cod){
                printf("Cliente n. %d \n\n",cliente[n].cod_cliente);
                printf("Nome: "); gets(cliente[n].nome); fflush(stdin);
                printf("Data de Nascimento: \nDia: "); scanf("%d",&cliente[n].data_nasc.dia);
                printf("Mes: "); scanf("%d",&cliente[n].data_nasc.mes);
                printf("Ano: "); scanf("%d",&cliente[n].data_nasc.ano);
                printf("Telefone: "); scanf("%ld",&cliente[n].telf);  fflush(stdin);
                printf("Morada: "); gets(cliente[n].morada);
                system("cls");
                printf("Cliente n. %d alterado com sucesso!\n\n",cliente[n].cod_cliente );
                n=NC;
                flag=1;
                getch();
               }
    } if (flag==0){
       printf("Cliente inválido!");
       getch();
         }

     }
     
//Elimina Cliente
void eliminarCliente(clientes *cliente){
     system ("cls");
    int n,cod,flag=0;
    printf("Escreva o número do cliente que quer eliminar: ");
    scanf("%d",&cod); fflush(stdin);
    for(n=0; n<NC;n++){
             if (cliente[n].cod_cliente==cod){
                cliente[n].estado=0;
                flag=1;
                printf("Cliente eliminado com sucesso!");
                n=NC;
             }
     }  if (flag==0)
        printf("Cliente inválido!");   
        getch();

}

void carregar_dados(clientes *cliente){
     
     FILE *fc;
     int n;
     
     if(!(fc=fopen("clientes.txt","r"))){
                                         if(!(fc=fopen("clientes.txt","a"))){
                                                                             printf("Erro na criação do ficheiro!"); 
                                                                             getch(); 
                                                                             exit(0);
                                          } else{
                                                                             printf("Ficheiro clientes.txt criado com sucesso!");
                                                                             getch();
                                                                             return(0);
                                                 }                             
   } else {
      while (feof(fc) == 0) {     
     for (n=0;n<NC;n++){
         fscanf(fc,"%d\n",                   &cliente[n].cod_cliente);
         fgets(cliente[n].nome,20,fc);
         fscanf(fc,"\n%d\n%d\n%d\n",           &cliente[n].data_nasc.dia,
                                             &cliente[n].data_nasc.mes,
                                             &cliente[n].data_nasc.ano);
         fgets(cliente[n].morada,100,fc);                                          
         fscanf(fc,"\n%ld\n%d",                &cliente[n].telf,
                                             &cliente[n].estado); 
                                  
         
         }
     } 
        printf("Dados carregados com sucesso!\n");
        getch();  
     
     }
}

void guardar_dados(clientes *cliente){
     FILE *fc;
     int n;
     
     fc=fopen("clientes.txt","a");
     
     for (n=0;n<NC;n++){
         if(cliente[n].estado==1){
         fprintf(fc,"\n%d\n",                   cliente[n].cod_cliente);
         fputs(cliente[n].nome,fc);
         fprintf(fc,"\n%d\n%d\n%d\n",           cliente[n].data_nasc.dia,
                                              cliente[n].data_nasc.mes,
                                              cliente[n].data_nasc.ano);
         fputs(cliente[n].morada,fc);                                          
         fprintf(fc,"\n%ld\n%d",                cliente[n].telf,
                                              cliente[n].estado);                           
         } 
         
         }
     
     
     
}



main(){
      
       clientes cliente[NC];
       
       inicializacao(cliente);
       carregar_dados(cliente);
       listarClientes(cliente);
       adicionarCliente(cliente);
       adicionarCliente(cliente);
       adicionarCliente(cliente);
       listarClientes(cliente);
       guardar_dados(cliente);

       }
