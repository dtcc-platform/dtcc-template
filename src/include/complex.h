// Copyright (C) 2023 Vasilis Naserentin and Github copilot/ChatGPT :)
// Licensed under the MIT License
//Sample complex class for testing purposes

//TODO: How to handle overloaded functions?

#ifndef DTCC_COMPLEX_H
#define DTCC_COMPLEX_H

class Complex
{
public:
    Complex(double r, double i) : re(r), im(i) {}
    double real() const { return re; }
    //TODO: How to handle overloaded functions in pybind11?
    //void real(double d) { re = d; }
    double imag() const { return im; }
    //void imag(double d) { im = d; }
private:
    double re, im;
};

#endif //DTCC_COMPLEX_H
