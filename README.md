# Pong


Pong é o projeto final do grupo de estudos de C da UL (Universidade Brasileira Livre). 


# Dependencias

O projeto usa o package manager [vcpkg](https://learn.microsoft.com/pt-br/vcpkg/get_started/get-started?pivots=shell-cmd)


Após finalizar a instalação do vcpkg, rode:

```shell
cmake --preset=vcpkg
cmake -DCMAKE_BUILD_TYPE=Release -build build 
cd build
./pong
```

