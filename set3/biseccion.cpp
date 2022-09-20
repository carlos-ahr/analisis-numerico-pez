#include<iostream>
#include<cmath>

using namespace std;

double f(double x){return exp(x)-log(x);}

double m(double i, double f){return (i+f)/2;}

double e(double i, double m){return abs((m-i)/m)*100;}

int main(){

    double xi = 0.1;
    double xf = 1;
    int n = 5;
    int cont = 1;

    for(int i = 0; i < n; i++){

        double xm = m(xi, xf);
        
        if(f(xi)*f(xm)<0){

            cout<<"n: "
            <<cont<<endl;
            cout<<"Xi: "
            <<xi<<endl;
            cout<<"Xf:"
            <<xf<<endl;
            cout<<"f(Xi): "
            <<f(xi)<<endl;
            cout<<"f(Xf): "
            <<f(xf)<<endl;
            cout<<"f(Xi)f(Xf): "
            <<f(xi)*f(xf)<<endl;
            cout<<"Xm: "
            <<xm<<endl;
            cout<<"f(Xm): "
            <<f(xm)<<endl;
            cout<<"f(Xi)f(Xm): "
            <<f(xi)*f(xm)<<endl;
            cout<<"f(Xi)f(Xm) < 0 --> xf = xm"<<endl;
            cout<<"Error: "<<
            e(xm, xi)<<"%"<<endl;
            cout<<endl;

            xf=xm;
            cont++;

        }
        else if(f(xi)*f(xm)>0){

            cout<<"n: "
            <<cont<<endl;
            cout<<"Xi: "
            <<xi<<endl;
            cout<<"Xf:"
            <<xf<<endl;
            cout<<"f(Xi): "
            <<f(xi)<<endl;
            cout<<"f(Xf): "
            <<f(xf)<<endl;
            cout<<"f(Xi)f(Xf): "
            <<f(xi)*f(xf)<<endl;
            cout<<"Xm: "
            <<xm<<endl;
            cout<<"f(Xm): "
            <<f(xm)<<endl;
            cout<<"f(Xi)f(Xm): "
            <<f(xi)*f(xm)<<endl;
            cout<<"f(Xi)f(Xm) < 0 --> xf = xm"<<endl;
            cout<<"Error: "<<
            e(xm, xi)<<"%"<<endl;
            cout<<endl;

            xi=xm;
            cont++;

        }
        else if(f(xi)*f(xm)==0){

            cout<<"La raiz es: "
            <<xm<<endl;

        }

    }

    return 0;
}