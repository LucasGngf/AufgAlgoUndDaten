//F(n)=1+n/2n+1*F(n+1)



double F(int n) 
{ 
    double retVal = 1; 
    if (n < 50) 
    { 
    retVal = 1 + (double)n / (2*n + 1) * F(n + 1); 
    } 
    return retVal; 
} 
void main() 
{ 
    double pi = 2 * F(1); 
    printf("Die ersten Stellen von Pi: %.10lf", pi); 
}
