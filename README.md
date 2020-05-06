# NaifSpiceSharp

This is a C# wrapper for [NAIF SPICE Toolkit](https://naif.jpl.nasa.gov/naif/index.html).

## Installation

[Nuget](https://www.nuget.org/packages/NaifSpiceSharp/)

## Limitation

* Currently only support Windows x64. More platform supports will be added if anyone needs them.

* Some functions are not supported, such as functions with function pointer as parameter and functions' input or return types are struct. Please send an issue if you need to use those functions.

## About C Library

* The source code can be found [here](https://naif.jpl.nasa.gov/naif/toolkit_C.html).

* The source code is recompiled with VS 2019 for Windows.

## About Kernel

* [What is Kernel?](https://naif.jpl.nasa.gov/pub/naif/toolkit_docs/Tutorials/pdf/individual_docs/12_intro_to_kernels.pdf)

	* If you don't know about kernel, please read this tutorial very carefully.

* How to get them?

	* [NAIF Data Site](https://naif.jpl.nasa.gov/naif/data.html)

	* [Another Reference](https://naif.jpl.nasa.gov/naif/WGC_about_the_data.html)

	* Here is kernels with planetary ephemeris data [Solar System Kernels](https://naif.jpl.nasa.gov/pub/naif/pds/wgc/)
