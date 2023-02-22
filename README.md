# DTCC Package Template

This is a template for creating Python packages as part of DTCC Platform.
The template supports the creation of Python packages that include
extensions implemented in C++ using [pybind](https://github.com/pybind).
The template is based on the template
[scikit-build-example](https://github.com/pybind/scikit_build_example)
provided by the pybind and uses
[scikit-build-core](https://github.com/scikit-build/scikit-build-core)
to create pip-installable Python packages that may leverage CMake for
building the C++ extensions.

This project is part the
[Digital Twin Platform (DTCC Platform)](https://gitlab.com/dtcc-platform)
developed at the
[Digital Twin Cities Centre](https://dtcc.chalmers.se/)
supported by Sweden’s Innovation Agency Vinnova under Grant No. 2019-421 00041.

## Documentation

* [Introduction](./docs/introduction.md)
* [Installation](./docs/installation.md)
* [Usage](./docs/usage.md)
* [Development](./docs/development.md)

## Authors (in order of appearance)

* [Anders Logg](http://anders.logg.org)
* [Vasilis Naserentin](https://www.chalmers.se/en/Staff/Pages/vasnas.aspx)

## License

DTCC Package Template is licensed under the
[MIT license](https://opensource.org/licenses/MIT).

Copyright is held by the individual authors as listed at the top of
each source file.
