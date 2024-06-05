# Foo et al. Parameterization
A software package that calculates the complex Foo et al. parameterization.

## Features
The parameterization takes the radius of a sphere and returns its volume.

## Building the package

This assumes you have cmake installed. If you do not have it, please download and install it from here: https://cmake.org/download/ 

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/d33psan/Foo_et_al.git
    cd Foo_et_al
    ```
2. **Create the build directory**
    ```sh
    mkdir build
    cd build
    ```
3. **Generate build files**
    ```sh
   cmake ..
    ```
4. **Build the program**
    ```sh
   make
    ``` 

## Running the program

```sh
./Foo_et_al
```

## Running Unit Tests

```sh
ctest
```

## Contribution Guidelines
This is a community project and your contributions are highly encouraged! To contribute:

1. Fork the repository.
2. Create a new branch (git checkout -b feature-branch).
3. Make your changes.
4. Commit your changes (git commit -m 'Add new feature').
5. Push to the branch (git push origin feature-branch).
6. Open a pull request.

   Please make sure to update tests as appropriate and follow the coding style of the project.