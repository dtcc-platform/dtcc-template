#include <pybind11/pybind11.h>
#include "include/addition.h"
#include "include/subtraction.h"
#include "include/complex.h"

namespace py = pybind11;

PYBIND11_MODULE(_bindings, m)
{
  m.def("add", &add, "A function that adds two numbers");
  m.def("sub", &sub, "A function that subtracts two numbers");
  //py::class_<Complex>(m, "Complex").def(py::init<double,double>()).def("real", &Complex::real).def("imag", &Complex::imag);
  py::class_<Complex>(m, "Complex")
        .def(py::init<double,double>())
        .def("real", &Complex::real)
        .def("imag", &Complex::imag);
  
}
