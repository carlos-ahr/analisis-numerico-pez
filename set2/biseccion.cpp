#include<iostream>
#include<cmath>
using namespace std;
double func(double x)
{
    return exp(x)-log(x);
}
double m(double i, double f)
{
    return (i+f)/2;
}
double error(double i, double m)
{
    return abs((m-i)/m)*100;
}
int main()
{
    double xi = 0.1;
    double xf = 1;
    int n = 5;
    int cont = 1;
    for(int i = 0; i < n; i++)
    {
        double xm = m(xi, xf);
        if(func(xi)*func(xm)<0)
        {
            cout<<"n: "<<cont<<endl;
            cout<<"Xi: "<<xi<<endl;
            cout<<"Xf:"<<xf<<endl;
            cout<<"f(Xi): "<<func(xi)<<endl;
            cout<<"f(Xf): "<<func(xf)<<endl;
            cout<<"f(Xi)f(Xf): "<<func(xi)*func(xf)<<endl;
            cout<<"Xm: "<<xm<<endl;
            cout<<"f(Xm): "<<func(xm)<<endl;
            cout<<"f(Xi)f(Xm): "<<func(xi)*func(xm)<<endl;
            cout<<"f(Xi)f(Xm) < 0 --> xf = xm"<<endl;
            cout<<"Error: "<<error(xm, xi)<<"%"<<endl;
            cout<<endl;
            xf=xm;
            cont++;
        }
        else if(func(xi)*func(xm)>0)
        {
            cout<<"n: "<<cont<<endl;
            cout<<"Xi: "<<xi<<endl;
            cout<<"Xf:"<<xf<<endl;
            cout<<"f(Xi): "<<func(xi)<<endl;
            cout<<"f(Xf): "<<func(xf)<<endl;
            cout<<"f(Xi)f(Xf): "<<func(xi)*func(xf)<<endl;
            cout<<"Xm: "<<xm<<endl;
            cout<<"f(Xm): "<<func(xm)<<endl;
            cout<<"f(Xi)f(Xm): "<<func(xi)*func(xm)<<endl;
            cout<<"f(Xi)f(Xm) > 0 --> xi = xm"<<endl;
            cout<<"Error: "<<error(xm, xi)<<"%"<<endl;
            cout<<endl;
            xi=xm;
            cont++;
        }
        else if(func(xi)*func(xm)==0)
        {
            cout<<"La raiz es: "<<xm<<endl;
        }
    }
    return 0;
}