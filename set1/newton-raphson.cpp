#include<iostream>
#include<cmath>

using namespace std;

double f(double x){
    return (3*x)+sin(x)-exp(x);
}

double fp(double x){
    return 3+cos(x)-exp(x);
}

double i1(double i, double f, double fp){
    return i-(f/fp);
}

double e(double i1, double i){
    return abs((i1-i)/i1)*100;
}

int main(){
    double xi = 0;
    int n = 5;
    int cont = 1;
    for (int i = 0; i < n; i++){
        double xi1 = i1(xi, f(xi), fp(xi));
        cout<<"n: "<<cont<<endl;
        cout<<"Xi: "<<xi<<endl;
        cout<<"f(Xi): "<<f(xi)<<endl;
        cout<<"f'(Xi): "<<fp(xi)<<endl;
        cout<<"Xi+1: "<<xi1<<endl;
        cout<<"Error: "<<e(xi1, xi)<<"%"<<endl;
        cout<<endl;
        xi=xi1;
        cont++;
    }
    return 0;
}