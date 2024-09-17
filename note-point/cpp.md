# cpp

p8

## 背景介绍

### 基本概念

- 代码和编译

  代码：遵循特定语法规则

  编译：翻译成计算机能懂的

- 代码和工程

  



### 环境配置

- 编译器

  [MinGW](https://www.mingw-w64.org/)

- 包管理器

- 编辑器

  vs, vscode, clion
  
  



### 编译器 mingw

- ubuntu

  ```bash
  sudo apt update
  sudo apt install mingw-w64
  
  x86_64-w64-mingw32-gcc --version
  i686-w64-mingw32-gcc --version
  
  
  # #################################################
  # 日志
  # #################################################
  oswin@dt501:~$ x86_64-w64-mingw32-gcc --version
  x86_64-w64-mingw32-gcc (GCC) 10-win32 20220113
  Copyright (C) 2020 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  oswin@dt501:~$ i686-w64-mingw32-gcc --version
  i686-w64-mingw32-gcc (GCC) 10-win32 20220113
  Copyright (C) 2020 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  oswin@dt501:~$ gcc --version
  gcc (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
  Copyright (C) 2021 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  oswin@dt501:~$ g++ --version
  g++ (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0
  Copyright (C) 2021 Free Software Foundation, Inc.
  This is free software; see the source for copying conditions.  There is NO
  warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  ```

  hello.c

  ```c
  #include <stdio.h>
  
  int main() {
      printf("Hello, World!\n");
      return 0;
  }
  
  ```

  编译运行

  ```bash
  x86_64-w64-mingw32-gcc -o hello64.exe hello.c  # 编译64位程序
  i686-w64-mingw32-gcc -o hello32.exe hello.c  # 编译32位程序
  
  ```

  



### 环境配置 win 







### 环境配置 ubuntu





### Hello

- hello-cpp/main.cpp

  ```cpp
  //
  // Created by oswin on 24-9-2.
  //
  
  // #################################################
  // 预处理指令，代码编译前的准备工作
  // #################################################
  #include "iostream"  // C++标准库中的`iostream`头文件，提供了输入输出流的功能
  using namespace std;  // 使用了`std`命名空间
  
  // #################################################
  // 主函数，程序入口
  // #################################################
  int main() {
      cout << "hello world" << endl;  // cout对外输出 endl输出换行
      return 0;
  }
  
  // #################################################
  // 编译 IDE
  // #################################################
  // /opt/devide/clion-2023.3.5/bin/cmake/linux/x64/bin/cmake \
  //   --build /opt/code/c-code/play-game/code-show/hello-cpp/cmake-build-debug \
  //   --target hello_cpp -j 22
  
  // #################################################
  // 编译 mingw
  // #################################################
  // g++ hello_world.cpp -o hello_world  // .exe
  // ./hello_world  // .exe
  
  ```

- hello-cpp/CMakeLists.txt

  ```cmake
  cmake_minimum_required(VERSION 3.27)
  project(hello_cpp)
  
  set(CMAKE_CXX_STANDARD 17)
  
  add_executable(hello_cpp
          hello_world.cpp)
  
  ```

  







































