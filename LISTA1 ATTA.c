#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// ARITIMÉTICA #-----------------------------------------------------------#

int soma(int x, int y){
    return x+y;
}

float opera(float x, float y, int z){
switch(z){
case 0:
    return x+y;
    break;
case 2:
    return y-x;
    break;
case 3:
    return x*y;
    break;
case 4:
    return y/x;
    break;
}
}

int divisores(int n, int v[]){
int i, r;
    for(i=0; i<n; i++){
        if (n%(i+1)==0){
            v[i]=i+1;
            r++;
        }
    }
return r;
}

int converte(int v[], int z){
int i, r=0;
    for (i=z-1; i>=0; i++){
        r=r+(v[i]*pow(2,i));
    }
return r;
}

float compoe(int x, int y){
int r, i=0;
while((y/10)>=10){
    y=y/10;
    i++;
}
r= x+(y/pow(10,i+1));
return r;
}

// COMPARAÇÃO #-----------------------------------------------------------------#

int maior_de_dois(int x, int y){
if (x>y){
    return x;
}else if(y>x){
    return y;
}else{
    printf("numeros iguas \n");
    return 0;
}
}

int menor_de_tres(int x, int y, int z){
    if((x>y)&&(x>z)){
        return x;
    }else if(y>z){
        return y;
    }else{
        return z;
    }
}

int maior_de_quatro(int x, int y, int z, int w){
    if((x>y)&&(x>z)&&(x>w)){
        return x;
    }else if((y>z)&&(y>w)){
        return y;
    }else if(z>w){
        return z;
    }else{
        return w;
    }
}

int maior_de_todos(int v[], int n){
int i, maior=0;
    for(i=0; i<n; i++){
        if (v[i]>maior){
            maior=v[i];
        }
    }
return maior;
}

int existe (int v[], int n, int x){
int i, cont=0;
    for(i=0; i<n; i++){
        if (v[i]==x){
            cont++;
        }
    }
return cont;
}

int conjuntos_iguais(int v[], int k[], int n){
int i, flag=1;
    for(i=0; ((i<n)&&(flag)); i++){
        if (v[i]!=k[i]){
            flag=0;
        }
    }
return flag;
}

int roda_palitinhos(int x[], int y[], int n){
int i, jogo=0, vencedor, flag=1;
    for(i=0; i<n; i++){
        jogo=jogo+x[i];
    }
    for (i=0; ((i<n)&&(flag)); i++){
        if (y[i]==jogo){
            flag=0;
            vencedor=i;
        }
    }
    if (flag){
        return -1;
    }else{
        return vencedor;
    }
}

// MATRIZES -------------------------------------------------------------#

int mais_preenchida(char m[10][10]){
int i, j, cont=0, maior, contmaior=0;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
           if (m[i][j] == '*'){
                cont++;
            }
        }
        if (cont>contmaior){
            contmaior=cont;
            maior=i;
       }
    return maior;
    }
}

int mais_preenchida2(char m[3][3]){
int i, j, contl=0, contcol=0, maior=-1, contmaior=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           if (m[i][j] == '*'){
                contl++;
            }if(m[j][i]=='*'){
                contcol++;
            }
        }
        if ((contl>contmaior)&&(contl>=contcol)){
            contmaior=contl;
            maior=i;
       }else if(contcol>contmaior){
            contmaior=contcol;
            maior=-1*(i+1);
       }
    }
    return maior;
}

void diagonal_invertida(int m[3][3]){
int i, j, aux;
for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        if(i<j){
            aux=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=aux;
        }
    }
}
}

void calcula_media(int x[][3], float y[],  int n){
int i, j;
float soma=0;
    for (i=0; i<n; i++){
        for (j=0; j<3; j++){
            soma=soma+x[i][j];
        }
    y[i]=soma/3;
    soma=0;
    }
}

int main(){
char m[3][3] = {" * ", " * ", " * "};
int x;
x=mais_preenchida2(m);
printf ("%d \n", x);
return 0;
}
