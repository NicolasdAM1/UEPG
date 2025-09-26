#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

   /*Ex.: 1
    float produto, desconto;
    printf("Digite o valor do produto\n");
    scanf("%f",&produto);

    desconto=produto*9.0/100;
    produto=produto-desconto;
    printf("Valor do produto com desconto: %.2f\n", produto);
    printf("Valor do desconto: %.2f", desconto);*/

   /*Ex.: 2
    float valor, quantidade, INSS, Sal, Bruto;
    printf("Valor da aula por hora\n");
    scanf("%f",&valor);
    printf("Quantidade de aulas\n");
    scanf("%f",&quantidade);
    printf("Percentual de desconto do INSS\n");
    scanf("%f",&INSS);
    Bruto = valor * quantidade;
    Sal = valor * quantidade / INSS;
    printf("Salário Bruto: %.2f\n",Bruto);
    printf("Salário Líquido: %f", Sal);*/

   /*Ex.: 3
    float Celsius, Fahrenheit;
    printf("Temperatura (em Celsius):\n");
    scanf("%f",&Celsius);
    Fahrenheit = (9*Celsius+160)/5;
    printf("Temperatura em Fahrenheit: %f",Fahrenheit);*/

   /*Ex.: 4
    float V, r, h;
    printf("Raio da lata:\n");
    scanf("%f",&r);
    printf("Altura da lata:\n");
    scanf("%f",&h);
    V = 3.14159*r*r*h;
    printf("Volume da lata: %f",V);*/

   /*Ex.: 5
    float numerador, denominador, op;
    printf("Numerador:\n");
    scanf("%f",&numerador);
    printf("Denominador:\n");
    scanf("%f",&denominador);
    op = numerador / denominador;
    printf("Resultado: %f",op);*/

   /*Ex.: 6
    float gasto, tip, total;
    printf("Valor da comanda:\n");
    scanf("%f",&gasto);
    tip = gasto * 0.1;
    printf("Valor da gorjeta: %.2f\n",tip);
    total = gasto * 1.1;
    printf("Valor total: %.2f",total);*/

   /*Ex.: 7
    int h, min, mh, md;
    printf("Horário:\n");
    scanf("%d:%d", &h, &min);
    mh = h * 60;
    md = mh + min;
    printf("Minutos decoridos: %d", md);*/

   /*Ex.: 8
    int h, min, s, sh, sm;
    printf("Horário:\n");
    scanf("%d:%d", &h, &min);
    sh = h * 3600;
    sm = min * 60;
    s = sh + sm;
    printf("Segundos decorridos: %d",s);*/

   /*Ex.: 9
    float cap, tax, jur, mont;
    int t;
    printf("Valor do depósito:\n");
    scanf("%f",&cap);
    printf("Valor da taxa de juros:\n");
    scanf("%f",&tax);
    printf("Tempo da aplicação (em meses):\n");
    scanf("%d",&t);
    jur = cap * tax * t;
    mont = jur + cap;
    printf("Valor do rendimento: %.2f\n",jur);
    printf("Valor do montante: %f",mont);*/

   /*Ex.: 10
    float SM, S, sms;
    printf("Salário-mínimo:\n");
    scanf("%f",&SM);
    printf("Salário:\n");
    scanf("%f",&S);
    sms = S / SM;
    printf("Ganho: %.1f salários-mínimos",sms);*/

   /*Ex.: 11
    float x, t, V, L;
    printf("Tempo da viagem (em horas):\n");
    scanf("%f",&t);
    printf("Velocidade média (em Km/h):\n");
    scanf("%f",&V);
    x = V * t;
    L = x / 12;
    printf("Distância percorrida: %.1f Km",x);
    printf("\nLitros de gasolina utilizados: %.1f litros",L);*/

   /*Ex.: 12
    float SM, kW, a, b, c;
    printf("Valor do salário-mínimo:\n");
    scanf("%f",&SM);
    printf("Quilowatts gastos:\n");
    scanf("%f",&kW);
    a = kW * SM / 700;
    b = a / kW;
    c = a * 0.9;
    printf("Valor de cada kW (em reais): %.2f\n",b);
    printf("Valor a ser pago (em reais): %.2f\n",a);
    printf("Valor a ser pago com desconto: %.2f",c);*/




    return 0;
}
