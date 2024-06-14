#include <stdio.h>
#include <math.h>
 
 
float func_Delta(float a, float b, float c){\
    
    float delta=(a * b) - (4 * a * c);
    
    return delta;
};

float func_Raiz_Real(float a, float b){
    float raiz_Real=-b / (2 * a);
    
    return raiz_Real;
};
 
float func_Raiz_1(float a, float b, float delta){
    
    float raiz_1 = (-b + sqrt(delta)) / (2 * a);
    
    return raiz_1;
    
};
 
float func_Raiz_2(float a, float b, float delta){
    
    float raiz_2 = (-b - sqrt(delta)) / (2 * a);
    
    return raiz_2;
};

int equacao_Segundo_Grau(float a){
    
    return a==0;
};

void func_Fim_Programa(void){
    printf("Esta equação não é de 2º Grau. Fim de programa.\n");
};

void func_Delta_0(float a, float b){
    
    float raiz_Real = func_Raiz_Real(a, b);
    printf("A Equação tem uma raíz real: %f\n", raiz_Real);
};

void func_Delta_Negativo(void){
    printf("O Delta desta equação é negativo e não tem raízes reais. Fim de programa.\n");
};

void func_Delta_Positivo(float a , float b, float delta){
    
       float raiz_1 = func_Raiz_1(a, b, delta);
       float raiz_2 = func_Raiz_2(a, b, delta);
       printf("A Equação tem duas raízes:\nRaiz 1: %.2f\nRaiz 2: %.2f\n", raiz_1, raiz_2);
};


int main(void) {
    
    float valor_a, valor_b, valor_c, delta;
 
        printf("Por favor indique 3 valores:\n");
        printf("Valor A:");
        scanf("%f", &valor_a);
 
        if (equacao_Segundo_Grau(valor_a))
        {
 
            func_Fim_Programa();
        }
        else
        {
            printf("Valor B:");
            scanf("%f", &valor_b);
            printf("Valor C:");
            scanf("%f", &valor_c);
 
            delta = func_Delta(valor_a,valor_b,valor_c);
 
            if (func_Delta(valor_a, valor_b, valor_c) < 0)
            {
                func_Delta_Negativo();
            }
            else if (func_Delta(valor_a, valor_b, valor_c) == 0)
            {
 
                func_Delta_0(valor_a, valor_b);
            }
            else
            {
                func_Delta_Positivo(valor_a, valor_b, delta);
            }
        }
    return 0;
}
