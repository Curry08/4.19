#include <stdio.h>

int main(void) {
    int num,primo;
    printf("Inserisci un numero:");
    scanf("%d",&num);
    for(int i=2;i<num;i++) {
        if(num%i==0)
            primo=1;
    }
    if(primo)
        printf("Il numero non è primo");
    else
        printf("Il numero è primo");
}
