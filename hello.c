#include <stdio.h>

/*
    TIPO_RITORNO NOME_FUNZIONE(ARGOMENTI)
    {
        .. CODICE ..
        RETURN VARIABLE_TIPO_UGUALE#TIPO_RITORNO
    }
*/


int somma() {
    int a = 2; 
    int b = 3;
    return a + b;
}

void foo() {
    printf("foo\n");
    return;
}

int baz() {
    printf("baz\n");
    return 3;
}

int kol() {
    int a = 3;
    int s = 2;

    return a - s;
}

int main(){

    int a = kol();
    int s = somma();
    int b = baz();
    foo(); 

    printf("%d %d %d", a,s, b);

    return 0;
}
