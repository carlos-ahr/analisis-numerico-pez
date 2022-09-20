#include<iostream>
#include<cmath>
using namespace std;
double func(double x)
{
    return (3*x)+sin(x)-exp(x);
}
double funcprima(double x)
{
    return 3+cos(x)-exp(x);
}
double i1(double i, double f, double fp)
{
    return i-(f/fp);
}
double error(double i1, double i)
{
    return abs((i1-i)/i1)*100;
}
int main()
{
    double xi = 0;
    int n = 5;
    int cont = 1;
    for (int i = 0; i < n; i++)
    {
        double xi1 = i1(xi, func(xi), funcprima(xi));
        cout<<"n: "<<cont<<endl;
        cout<<"Xi: "<<xi<<endl;
        cout<<"f(Xi): "<<func(xi)<<endl;
        cout<<"f'(Xi): "<<funcprima(xi)<<endl;
        cout<<"Xi+1: "<<xi1<<endl;
        cout<<"Error: "<<error(xi1, xi)<<"%"<<endl;
        cout<<endl;
        xi=xi1;
        cont++;
    }
    return 0;
}