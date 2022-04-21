#include <stdio.h>

//fibonacci(6) gonderdigimizde 8 yazdirsin
//"Fibonaccinin altinci terimi 8'dir"

//fibonacci(6) = fibonacci(5) + fibonacci(4)

//durma kriterimiz ise
//fibonacci(2) = fibonacci(1) + fibonacci(0) olursa, 
//fibonacci(0) = 0 dememiz gerekir.
//fibonacci(1) = 1 olması gerekir.

unsigned long long Fibonacci(int sayi)
{
    if(sayi==1)
        return 1;
    else if(sayi==0)
        return 0;
    else
    {
        return Fibonacci(sayi-1) + Fibonacci(sayi-2);
    }
}

int main()
{
    int sayi;
    unsigned long long fibonacci;
    printf("Fibonacci Serisi: 1 1 2 3 5 8 13 21 34 55\n");
    printf("Fibonacci kacinci terim? : ");
    scanf("%d", &sayi);
    fibonacci = Fibonacci(sayi);
    printf("%d. fibonacci terimi = %llu", sayi, fibonacci);
    
    return 0;
}