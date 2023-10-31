    #include <stdio.h>
    #include <string.h>

    void ler_texto(char *buffer, int length) {
        fgets(buffer, length, stdin);
        strtok(buffer, "\n");
    }
    void limpar_entrada() {
        char c;
        while ((c = getchar()) != '\n' && c != EOF) {}
    }

    int main()
    {
        int n, pNome, maiorIdade;

        printf("Quantas pessoas voce vai digitar? ");
        scanf("%d", &n);

        char nome[n][50];
        int idade[n];

        for (int i=0;i<n;i++){
            printf("Dados da %da pessoa:\n", i+1);
            printf("Nome: ");
            limpar_entrada ();
            ler_texto(nome[i],50);
            printf("Idade: ");
            scanf("%d", &idade[i]);
        }

        maiorIdade = idade[0];
        pNome=0;

        for (int i=0;i<n;i++){
            if(idade[i]>maiorIdade){
             maiorIdade = idade[i];
             pNome = i;
            }
        }

        printf("PESSOA MAIS VELHA: %s", nome[pNome]);


        return 0;
    }
