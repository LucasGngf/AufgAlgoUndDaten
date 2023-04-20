//rekursive Variante aus Vorlesung
long fibonacci( int n)
{
if (n<=2)
return 1;
else
return fibonacci(n-1) + fibonacci(n-2);
}

//iterative Variante aus der Vorlesung

int fibo_iterativ(int n)
{
    int* afib;
    afib = new int[n+1];
    afib[1] = 1;
    afib[2] = 1;
    for (int i = 3; i <= n; i++)
        afib[i] = afib[i - 1] + afib[i - 2];
    return afib[n];
}   

//iterative Form 2

long fibo_iterativ_2 (int n) 
{ 
    long i=1,a=1,b=1,z; 
    if (n==0) return 1; 
    if (n==1) return 1; 
    for (i=2;i<=n;i++) 
    { 
        z=a; 
        a=a+b; 
        b=z; 
    } 
    return a; 
} 
