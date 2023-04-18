double H_reihe_r(int n)
{
    if (n < 1)
    {
    printf("Reihenwert für %i nicht definiert", n);
    return 0.0;
    }
    else if (n == 1)
    {
    return 1.0;
    }
    else
    {
    return H_reihe_r(n - 1) + 1.0/n;
}
}

//b)
//double H_reihe_i(int n)
//{
//    double t = 0.0;
//    for (int i=1; i<=n; i++)
//    {
//    t += 1.0/double(i);
//    }
//    return t;
//}
