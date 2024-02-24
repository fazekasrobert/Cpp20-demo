
# Repo to demonstrate C++20 features

## Generate build system

`cmake -B build`

## Build

`cmake --build build`

## Build with Docker

`docker build -t builder .`  
`docker run --rm -it -v .:/cpp20-demo builder`
