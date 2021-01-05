# Modern CMake Template

> Template for projects based on modern CMake practices.

## Tesseract

* https://tesseract-ocr.github.io/tessdoc/APIExample.html
* https://tesseract-ocr.github.io/tessdoc/Compiling.html
* https://github.com/SoftwareNetwork/sw/blob/master/test/integrations/CMakeLists.txt
* http://www.leptonica.org/ has to be included as well
* https://cmake.org/cmake/help/latest/guide/tutorial/index.html CMake Tutorial (especially testing is good)
* https://www.jetbrains.com/help/clion/cmakelists-txt-file.html

Components:

- `src`.
- `libs/lib1`.
- `libs/lib1/tests`.

See [How to Use Modern CMake for an App + Lib Project](https://rvarago.github.io/2018/08/20/how-to-use-modern-cmake-for-an-app-p-lib-project.html) for more information.

## Usage

Create the `build` directory and configure the build system:

```bash
cmake -B build # Or `cmake -D BUILD_TESTING=OFF -B build` to skip tests. 
```

Build the project:

```bash
cmake --build build
```

Inspect the `build` directory to find the application and the tests.

Optionally, run the tests with `ctest` by typing:

```bash
cmake -E chdir build ctest
```
