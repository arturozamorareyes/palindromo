#include <stdio.h>

int main()
{
    int x, r = 0;
    printf("Dame un número\n");
    scanf("%d", &x);
    
    if (x < 0 || (x % 10 == 0 && x != 0))
        printf("No es un palíndromo\n");
    else {
        // Invertir la mitad del número
        while (x > r)
        {
            r = r * 10 + x % 10;
            x = x / 10;  // Falta el punto y coma al final de esta línea.
        }
        
        if (x == r || x == r / 10)
            printf("Es un palíndromo\n");
        else
            printf("No es un palíndromo\n");
    }
    
    return 0;
}
