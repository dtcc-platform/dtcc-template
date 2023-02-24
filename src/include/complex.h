// Copyright (C) 2023 Vasilis Naserentin and Github copilot/ChatGPT :)
// Licensed under the MIT License

#ifndef DTCC_COMPLEX_H
#define DTCC_COMPLEX_H

class Complex
{
public:
    // Constructor
    Complex(double r, double i) : re(r), im(i) {}

    // Return real part
    double real() const { return re; }

    // Return imaginary part
    double imag() const { return im; }

    // Addition operator
    Complex operator+(const Complex &c) const
    {
        return Complex(re + c.re, im + c.im);
    }

    // Subtraction operator
    Complex operator-(const Complex &c) const
    {
        return Complex(re - c.re, im - c.im);
    }

    // Multiplication operator
    Complex operator*(const Complex &c) const
    {
        return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
    }

    // Division operator
    Complex operator/(const Complex &c) const
    {
        double denom = c.re * c.re + c.im * c.im;
        return Complex((re * c.re + im * c.im) / denom, (im * c.re - re * c.im) / denom);
    }

    // Equality operator
    bool operator==(const Complex &c) const
    {
        return re == c.re && im == c.im;
    }

private:
    double re, im;
};

#endif // DTCC_COMPLEX_H
