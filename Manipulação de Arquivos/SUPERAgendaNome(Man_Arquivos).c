/* Exemplo 48 - Manutencao de arquivos em C*/ 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[30];
    char telefone[15];
    int status;
}registro;

FILE * arq;

int insere (registro r);
void lista (void);
int retira (registro r);
void entra (registro * r);
int consulta (registro * r);
char menu (void);
void msg (char *s);
void escreve (char *s);

int main (){
    registro reg;
    char opcao;
    if ((arq = fopen("arquivo", "rb+")) == NULL)
        if ((arq = fopen ("arquivo", "wb+")) == NULL){
            puts("Erro na Abertura do arquivo");
            exit(1);
        }
    
    do{
        opcao = menu ();
        printf("\n\n");
        switch (opcao){
            case '1':
                puts("Inserção");
                entra(&reg);
                if (insere (reg))
                    puts("Inserçao Ok");
                else
                    puts("ERRO na inserção");
                break;
            case '2':
                puts ("Remoção");
                printf("\n Entre com um nome:\n");
                fgets(reg.nome, 29, stdin);
                reg.nome[strlen(reg.nome) - 1] = '\0';
                if (retira (reg))
                    puts("Remoção OK\n");
                else
                    puts("Erro na remoção\n");
                break;
            case '3':
                puts("Lista");
                lista();
                break;
            case '4':
                puts("Consulta");
                printf("\n Entre com um nome: \n");
                fgets(reg.nome,29,stdin);
                reg.nome[strlen (reg.nome) - 1] = '\0';
                if(consulta(&reg)){
                    printf("\nNOME:%s, TEL:%s\n\n", reg.nome, reg.telefone);
                    msg("");
                }else
                    msg("NOME não encontrado \n");
              }
        }while(opcao != '5');
        puts("fim do programa.");
        fclose(arq);
    }
char menu (void){
    char opcao;
    puts("\nMenu:     ");
    puts("1. INSERE   ");
    puts("2. RETIRA   ");
    puts("3. LISTA    ");
    puts("4. CONSULTA ");
    puts("5. FIM      ");
    printf("\n Escolha ==>");
    opcao = getchar ();
    getchar();
    return opcao;
}

void msg(char *s){
    puts(s);
    puts("Digite qualquer tecla: ");
    getchar();
}

void entra(registro *r){
    printf("\n Entre com um nome: ");
    fgets (r->nome,29, stdin);
    r->nome[strlen(r->nome) - 1] = '\0';
    printf(" Entre com um telefone:");
    fgets (r->telefone, 14, stdin);
    r->telefone[strlen (r->telefone) - 1] = '\0' ;
    r->status = 1;
}

int insere (registro r){
    if(!fseek(arq,0,SEEK_END)){
        fwrite(&r, sizeof(registro),1,arq);
        return 1;
    }
    return 0;
}

int retira  (registro r){
    registro reg;
    fseek(arq,0,SEEK_SET);
    
    while (!feof(arq)){
        fread(&reg,sizeof(registro),1,arq);
        if(!strcmp(reg.nome,r.nome) && (reg.status)){
            reg.status = 0;
            fseek(arq, -1L * sizeof(registro), SEEK_CUR);
            if(fwrite(&reg,sizeof(registro),1,arq))
                return 1;
        }
    }
    return 0;
}

void lista (void){
    int i;
    registro r;
    rewind(arq);
    printf("\n%-30s %-15s\n", "NOME", "TELEFONE");
    for (i=0;i<46;i++)
        printf("-");
    printf("\n");
    while(!feof(arq)){
        fread(&r, sizeof (registro),1,arq);
        if ((r.status) && (!feof(arq)))
            printf("\n%-30s %-15s", r.nome, r.telefone);
    }
    printf("\n\n");
}

int consulta(registro *r){
    registro reg;
    fseek(arq,0, SEEK_SET);
    while (!feof(arq)){
        fread(&reg, sizeof(registro),1,arq);
        if(!strcmp(reg.nome, r->nome) &&(reg.status)){
            *r = reg;
            return 1;
        }
    }
    return 0;
}
