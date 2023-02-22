#include <pybind11/pybind11.h>

#include "include/addition.h"
#include "include/subtraction.h"

PYBIND11_MODULE(_bindings, m)
{
  m.def("add", &add, "A function that adds two numbers");
  m.def("sub", &sub, "A function that subtracts two numbers");
}
