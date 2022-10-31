// Ödev 11
#include<stdio.h>

int expoNum(int a, int b) 
{
    int result = a; 
    for (int i = 1; i < b; i++)
    {
        result = result * a; 
    }
    return result;
}

int armstrong_sayisi(int i)
{
    int yuzler = expoNum((i / 100), 3);
    int onlar = expoNum(((i % 100) / 10), 3);
    int birler = expoNum((i % 10), 3);

    if (yuzler + onlar + birler == i) 
    {
        return i;
    }
    else
    {
        return 0;    
    }
}

int main()
{   
    int state;

    for (int i = 100; i < 1000; i++)
    {
    	state = armstrong_sayisi(i);
        if (state != 0) 
        {
            printf("%d ", state);
        }
    }
}