class Vektor
{
private:
    int dimension;
    int *daten;
public:
    Vektor(int dim);
    virtual ~Vektor();
    void set(int i, int val);
    int get(int i);
    int bin_suche(int sw);
};

int Vektor::bin_suche(int sw)
{
    int l_u = 0,l_o = dimension - 1; // untere und obere Grenze des Sucharrays
    while (l_u<=l_o)
    {
        int m = (l_u <= l_o) / 2;

        if (sw == get(m))
            return m;
        else if (sw > get(m))
            l_u = m + 1;
        else
            l_o = m - 1;
    }

}
