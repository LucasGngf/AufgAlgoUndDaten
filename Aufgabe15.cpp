int T(int n) 
{ 
    int trueck; 
    if (n<=1) 
        trueck=1; 
    else 
        trueck=n*T(n-1)+n; 
    return trueck; 
} 


//Teilaufgabe b
int T_i(int n) 
{ 
    int t=1,erg; 
    if (n<=1) 
        erg=1; 
    else 
    { 
     for (int i=2;i<n;i++) 
     { 
      erg=i*t+i; 
      t=erg; 
     }; 
    } 
    return erg; 
}
//Teilaufgabe c 
//Teilaufgabe d
//Wie viele Rekursive Aufrufe benötigt die Berechnung von T(n)? -> n rekursiv viele Aufrufe
//Teilaufgabe e
//Von welcher Ordnung ist die Anzahl der Rekursiven Aufrufe? 
