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
// g++ hello_world.cpp -o hello_world.exe
// ./hello_world.exe
