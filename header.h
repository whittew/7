#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

class Circle
{

    double x;
    double y;
    double r;

public:
    Circle(double Vx, double Vy, double Vr) {
        cout << "Const um " << this << endl;
        x = Vx;
        y = Vy;
        r = Vr;
        cout << x << " " << y << " " << r << endl;

    }
    Circle(const Circle& src) {
        cout << "Const kop " << this << endl;
        this ->x = (src.x);
        this -> y = (src.y);
        this -> r = (src.r);
        cout << x << " " << y << " " << r << endl;

    }

    ~Circle() {
        cout << "Destr " << this << endl;

    }


};



class Vector
{
    double x1;
    double y1;
    double x2;
    double y2;
public:
    Vector(double Vx1, double Vy1, double Vx2, double Vy2) {
        cout << "Const um " << this << endl;
        x1 = Vx1;
        y1 = Vy1;
        x2= Vx2;
        y2 = Vy2;
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }
    Vector(const Vector& src) {
        cout << "Const kop " << this << endl;
        this->x1 = (src.x1);
        this->y1 = (src.y1);
        this->x2 = (src.x2);
        this->y2 = (src.y2);
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }
    ~Vector() {
        cout << "Dest " << this << endl;
    }


};


class Complex {
    double re;
    double im;


public:
    Complex(double Vre, double Vim) {
        cout << "Const um " << this << endl;
        re = Vre;
        im = Vim;
        cout << re << " + i(" << im << ")" << endl;
    }
    Complex(const Complex& src) {
        cout << "Const kop " << this << endl;
        this->re = (src.re);
        this->im = (src.im);

        cout << re << " + i(" << im << ")" << endl;
    }


    ~Complex() {
        cout << "Dest " << this << endl;
    }
};