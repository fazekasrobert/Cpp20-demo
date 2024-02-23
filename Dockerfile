FROM gcc:13.2.0

WORKDIR /tools

RUN wget https://github.com/Kitware/CMake/releases/download/v3.28.3/cmake-3.28.3-linux-x86_64.tar.gz &&\
    tar -xf cmake-3.28.3-linux-x86_64.tar.gz &&\
    ln -s $(pwd)/cmake-3.28.3-linux-x86_64/bin/* /usr/bin/

WORKDIR /tutorial