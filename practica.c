#include <stdio.h>
#include <string.h>

char lower(char c);
int strindex(char s[], char t);
float num(char f[]);
char inver(char x[]);
int potencia(int x , int y);

int main()
{
    char s,t;
    char x[]= "hoola";
    char z[] = "121.4e-3";
    printf("INGRESE UNA LETRA MAYUSCULA: %c", s);
    s = getchar();
    printf("EJERCISIO 1: %c SU MINUSCULA ES: %c\n",s,lower(s));
    printf("EJERCISIO 2: INGRESE UNA LETRA: ");
    printf("SE ENCUENTRA EN LA POSICION: %d\n",strindex(x,t = getchar()));
    printf("SU INVERSA DE %s ES: ",x);
    printf("%c",x,inver(x));
    printf("EJERCISIO 4:EL NUMERO ES: %0.6f",num(z));
}
char lower(char c)
{
    return c = c + 32;
}

int strindex(char s[], char t)
{
    int i,w;
    int x = 0;
    for(i =0;s[i] != '\0';i++)
        if (s[i] == t){
            w = i;
            x = x + 1;
        }
    if (x == 0)
        return -1;
    return x;
}
char inver(char x[])
{
    char tem;
    int i,f;
    f = strlen(x);
    i = 0;
    while(f>i){
        tem = x[i];
        x[i++] = x[--f];
        x[f] = tem;
    }
    printf("%s\n", x);
}
int potencia(int x , int y)
{
    int num;
    int i;
    num = 1;
    if  (y > 0){
        for (i=0; i < y; i++)
            num = num * x;
        return num;

    }else
        for (i=0; i > y; ++y)
            num = num * x;
        return num;

}
float num(char f[])
{
    int p;
    float numero,d,w;
    int i,n,x,t;
    int valor = 0;
    int indice = 0;
    n = 0;
    d = 0;
    for (i = 0; f[i] >= '0' && f[i] <= '9' ; ++i)
        n= 10 * n + (f[i] - '0');
        if (f[i] = "."){
            x = i + 1;
            for (x,t = 1; x < strlen(f) && f[x] != 'e'; x++,t = t * 10)
                d = 10 * d + (f[x] - '0');
            ++x;
            if (f[x] == '-')
                valor = -1;
            if (f[x] == '+')
                valor = 1;
            ++x;
            if (f[x] != '\0')
                indice = f[x] - '0';
        }
    if (valor == 1)
        numero = (n + (d/t)) * (potencia(10,(valor*indice)));
    if (valor == -1)
        numero = (n + (d/t)) / (potencia(10,(valor*indice)));

    return numero;

}

