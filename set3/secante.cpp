#include<iostream>
#include<cmath>

using namespace std;

double f(double x){return (exp(pow(x*-1, 1)))-x;}

double i1(double i, double i_1, double fi, double fi_1){return i-((f(i)*(i-i_1))/f(i)-f(i_1));}

double e(double i1, double i){return abs((i1-i)/i1)*100;}

int main(){

    double xi_1 = 0.0;
    double xi = 1.0;
    int n = 5;
    int cont = 1;

    for (int i = 0; i < n; i++){

        double xi1 = i1(xi, xi_1, f(xi), f(xi_1));

        cout<<"n: "<<cont<<endl;
        cout<<"Xi-1: "<<xi_1<<endl;
        cout<<"Xi: "<<xi<<endl;
        cout<<"f(Xi): "<<f(xi)<<endl;
        cout<<"f(Xi-1): "<<f(xi_1)<<endl;
        cout<<"Xi+1: "<<xi1<<endl;
        cout<<"Error: "<<e(xi1, xi)<<"%"<<endl;
        cout<<endl;

        xi_1=xi;
        xi=xi1;
        cont++;

    }

    return 0;

}