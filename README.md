# Pong


Pong é o projeto final do grupo de estudos de C da UL (Universidade Brasileira Livre). Como projeto final foi proposto fazer um jogo usando a biblioteca Raylib, nesse caso, optei for fazer em Vulkan e uma versão com raylib. O projeto também é multi plataforma, a ideia é que rode tanto em windows quanto Linux.


# Dependencias

O projeto usa o package manager [vcpkg](https://learn.microsoft.com/pt-br/vcpkg/get_started/get-started?pivots=shell-cmd)


Após finalizar a instalação do vcpkg, rode:

```shell
cmake --preset=vcpkg
cmake -DCMAKE_BUILD_TYPE=Release -build build 
cd build
./pong
```

# Raylib

Caso queira usar a versão do projeto na raylib, o processo é o mesmo. Basta apenas ir na pasta. 
