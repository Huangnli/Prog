#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void) {
    int test;
    int k, i, j, m, p, b;
    int n[8];      /* chave*/
    int d, o, h;   /* bases numericas*/
    int linha;
    int dec;
    int zu, zum;
    int fim[8];
    int bin[8];
    int x = 0;
    int num = 0;
    char frase[20020];
    unsigned int oc;
    unsigned int hex;

    scanf("%d", &test);                          /* quantidade de teste*/

    for(k = 1 ; k <= test ; k++) {


        for(i = 0; i <= 7 ; i++){               /* chave */
            scanf(" %d", &n[i]); 
        }

        scanf("%d %d %d", &d, &o, &h);  

        scanf("%d", &linha);          
        for(j = 1 ;j <= linha; j++){
            if(j % h == 0){                    /* se for hexadecimal */
                scanf("%X", &hex);
                for(i = 0; i <=7; i++){
                    b = hex % 2;
                    hex = hex / 2;
                    bin[i] = b;
                }
            } 

            else if(j % o == 0){                 /* se for octal */
                scanf("%o", &oc);  
                for(i = 0; i <= 7; i++){
                    b = oc % 2;
                    oc = oc / 2;
                    bin[i] = b; 
                }
            } 

            else if(j % d == 0){                /* se for decimal */
                scanf("%d", &dec);
                for(i = 0; i <= 7; i++){
                    b = dec % 2;
                    dec = dec / 2;
                    bin[i] = b;
                }
            } 

            else {                           /* se for binario */
                scanf("%d", &zu);                     
                for(i = 0; i <= 7; i++){
                    zum = zu%10;
                    bin[i] = zum;       
                    zu= zu/10;
                }
            }
            
        for(i = 0, m = 7; m >= 0; i++, m--)  /*troca os lugares do binario */
           fim[i] = bin[n[m]]; 
               
        for(p = 7; p>= 0 ;p--){              /*salvar os numeros */
            num = num + fim[p]*pow(2,p);
         
        }

        frase[x] = num;                     /*salvar os chars*/
        x++;
        num=0;
        }
        frase[x] = '\0';
        x++;
    } 
    x = 0;
    for(i=1; i<=test; i++){
    printf("Teste %d:\n", i);

    while(frase[x]!='\0'){ 
        printf("%c", frase[x]);
        x++;
        }
    printf("\n");
    x++; 
    }
       
    return 0;
}
