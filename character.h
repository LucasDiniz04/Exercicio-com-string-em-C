#include <string.h> 
#include <stdio.h> 
void concatenar(){ //função que concatena duas strings fornecidas pelo usuário
    char stringA[15]; 
    char stringB[15]; 
     
    printf("Informe a primeira string: "); 
    scanf("%s", stringA); 
    printf("Informe a segunda string: "); 
    scanf("%s", stringB); 
    strcat(stringA, stringB); 
    printf("%s", stringA); 
} 

void copiar(){ // Função que copia uma string em outra string
    char fonte[15]; 
    char destino[15]; 
    printf("Informe a primeira string: "); 
    scanf("%s", fonte); 
    printf("Informe a segunda string: "); 
    scanf("%s", destino); 
    strcpy(fonte, destino); 
     
    printf("Cópia das strings: %s", fonte); 
} 
  
void comparar(){ //Função que compara strings
    char stringA[15]; 
    char stringB[15]; 
    printf("Informe a primeira string: "); 
    scanf("%s", stringA); 
    printf("Informe a segunda string: "); 
    scanf("%s", stringB); 
    printf("Comparaçao: %d\n", strcmp(stringA, stringB)); 
} 
  
void comparartam(){ //Função que compara o tamanho entre duas strings
    size_t num =5; 
    char stringA[15]; 
    char stringB[15]; 
    printf("Informe a primeira string: "); 
    scanf("%s", stringA); 
    printf("Informe a segunda string: "); 
    scanf("%s", stringB); 
    printf("Comparaçao de tamanho: %d\n", strncmp(stringA, stringB, num)); 
} 
  
void tamstring(){  //Função que verifica o tamamnho de uma string fornecida pelo usuário
    char stringA[15]; 
    printf("Informe a string: "); 
    scanf("%s", stringA); 
    printf("Tamanho da string: %lu", strlen(stringA)); 
}