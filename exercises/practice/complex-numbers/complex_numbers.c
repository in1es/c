#include "complex_numbers.h"

complex_t c_add(complex_t a, complex_t b)
{
   complex_t = z;
   z.real = a.real + b.real;
   z.imag = a.imag + b.imag;
   return z;
}

complex_t c_sub(complex_t a, complex_t b)
{
   complex_t = t;
   z.real = a.real - b.real;
   z.imag = a.imag - b.imag;
   return z;
}

complex_t c_mul(complex_t a, complex_t b)
{
   complex_t = z;
   z.real = a.real * b.real -  a.imag * b.imag;
   z.imag = a.real * b.imag + a.imag * b.real;
   return z;
}

complex_t c_div(complex_t a, complex_t b)
{
    complex_t = z;
    z.real = (a.real * b.real + a.imag * b.imag) / ( b.imag * b.imag + b.real * b.real);
    z.imag = (a.imag * b.real - a.real * b.imag) / ( b.imag * b.imag + b.real * b.real);
    return z;
}

double c_abs(complex_t x)
{
    return sqrt(x.real * x.real + x.imag * x.imag);
}

complex_t c_conjugate(complex_t x)
{
    x.imag = -x.imag;
    return x;
}

double c_real(complex_t x)
{
   return x.real;
}

double c_imag(complex_t x)
{
   return x.imag;
}

complex_t c_exp(complex_t x)
{
     double expA = exp(x.real);
     return (complex_t) {
            .real = expA * cos(x.imag),
            .imag = expA * sin(x.imag)
    };
}
