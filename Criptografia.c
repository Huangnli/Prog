#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

void fabio(int n, int s, int v){
	int y;

	srand ((unsigned)time(NULL));
	//geral um r aleatorio
	y = mdc (r, n);
	while(y != 1){
		//geral outro r
		y = mdc (n, r);

	}
	r = r * r;
	x = r % n;

	return x;
}

int main(int argc, char *argv[]){

	return 0;
}
