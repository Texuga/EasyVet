
void f2 () {
     char op;
     
while (1){
      system("cls");
      printf("\n     Clientes\n\n");
      printf(" a) Inserir \n");
      printf(" b) Modificar \n");
      printf(" c) Consultar \n");
      printf(" d) Eliminar \n");
      printf(" v) Voltar ao Menu Anterior \n\n");
      
      op=toupper(getchar());
      
      switch (op) {
             case 'A':  break;
             case 'B':  break;
             case 'C':  break;
             case 'D':  break;
             case 'V': return;
             }
}
}    

void f3 () {
     char op;
     
while (1){
      system("cls");
      printf("\n     Funcionarios\n\n");
      printf(" a) Inserir \n");
      printf(" b) Modificar \n");
      printf(" c) Consultar \n");
      printf(" d) Eliminar \n");
      printf(" v) Voltar ao Menu Anterior \n\n");
      
      op=toupper(getchar());
      
      switch (op) {
             case 'A':  break;
             case 'B':  break;
             case 'C':  break;
             case 'D':  break;
             case 'V': return;
             }
}
}    

void f4 () {
     char op;
     
while (1){
      system("cls");
      printf("\n     Animais\n\n");
      printf(" a) Inserir \n");
      printf(" b) Modificar \n");
      printf(" c) Consultar \n");
      printf(" d) Eliminar \n");
      printf(" v) Voltar ao Menu Anterior \n\n");
      
      op=toupper(getchar());
      
      switch (op) {
             case 'A':  break;
             case 'B':  break;
             case 'C':  break;
             case 'D':  break;
             case 'V': return;
             }
}
}    

void f5 () {
     char op;
     
while (1){
      system("cls");
      printf("\n     Consultas\n\n");
      printf(" a) Nova Consulta \n");
      printf(" b) Modificar \n");
      printf(" c) Consultar \n");
      printf(" d) Eliminar \n");
      printf(" v) Voltar ao Menu Anterior \n\n");
      
      op=toupper(getchar());
      
      switch (op) {
             case 'A':  break;
             case 'B':  break;
             case 'C':  break;
             case 'D':  break;
             case 'V': return;
             }
}
}  

void f1 () {
char op;

while (1){
      system("cls");
      printf("\n     Menu\n\n");
      printf(" a) Clientes \n");
      printf(" b) Funcionarios \n");
      printf(" c) Animais \n");
      printf(" d) Consultas \n");
      printf(" s) Sair \n\n");
      
      op=toupper(getchar());
      
      switch (op) {
             case 'A': f2(); break;
             case 'B': f3(); break;
             case 'C': f4(); break;
             case 'D': f5(); break;
             case 'S': return;
             }
}
}    
  

#include <stdio.h>
void main () {
     f1();
}
     
  
