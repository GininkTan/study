# C语言环境配置（Windows版）

我们先搭建 C语言开发环境。

推荐方案：

- 编辑器：[Visual Studio Code](https://code.visualstudio.com?utm_source=chatgpt.com)
- 编译器：[MinGW-w64](https://www.mingw-w64.org?utm_source=chatgpt.com)

这是目前最常用、最适合初学者的 C语言环境。

------

# 一、安装 VS Code

## 第一步：下载安装

打开：

[VS Code 官方网站](https://code.visualstudio.com?utm_source=chatgpt.com)

下载：

- Windows 版本

安装时：

- 一路 Next 即可

建议勾选：

- Add to PATH
- 右键菜单打开

------

# 二、安装 MinGW-w64（gcc 编译器）

## 什么是 gcc

gcc 是：

- C语言编译器

作用：

- 把 `.c` 文件编译成可执行程序

例如：

```
gcc test.c -o test.exe
```

------

# 下载 MinGW-w64

打开：

[MinGW-w64 下载页](https://www.mingw-w64.org/downloads/?utm_source=chatgpt.com)

推荐下载：

- WinLibs 版本（最简单）

你也可以直接使用：

[WinLibs GCC 下载](https://winlibs.com/?utm_source=chatgpt.com)

下载：

- UCRT
- x86_64
- 最新版本

------

# 三、解压 MinGW

例如解压到：

```
C:\mingw64
```

确保存在：

```
C:\mingw64\bin
```

里面有：

```
gcc.exe
g++.exe
gdb.exe
```

------

# 四、配置环境变量 PATH

这是最重要的一步。

------

# 打开环境变量

Windows 搜索：

```
环境变量
```

点击：

```
编辑系统环境变量
```

然后：

```
环境变量
```

找到：

```
Path
```

点击：

```
编辑
```

新增：

```
C:\mingw64\bin
```

保存。

------

# 五、测试 gcc 是否成功

打开：

```
cmd
```

输入：

```
gcc --version
```

如果出现：

```
gcc.exe (Rev...)
```

说明安装成功。

------

# 六、安装 VS Code C插件

打开 VS Code。

左侧：

- 扩展（Extensions）

搜索安装：

## 必装插件

### 1. C/C++

来自：

[Microsoft C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools&utm_source=chatgpt.com)

作用：

- 代码提示
- 调试
- 语法高亮

------

# 七、创建第一个C项目

------

# 创建文件夹

例如：

```
C:\c_project
```

------

# 打开文件夹

VS Code：

```
File -> Open Folder
```

------

# 新建文件

创建：

```
main.c
```

------

# 输入代码

```
#include <stdio.h>

int main() {

    printf("Hello World\n");

    return 0;
}
```

------

# 八、编译运行

打开终端：

```
Terminal -> New Terminal
```

输入：

```
gcc main.c -o main
```

生成：

```
main.exe
```

运行：

```
main
```

输出：

```
Hello World
```

------

# 九、理解编译过程（非常重要）

C语言不是直接运行。

过程：

```
main.c
   ↓
gcc 编译
   ↓
main.exe
   ↓
运行程序
```

------

# 十、常见错误

------

# 1. gcc 不是内部命令

错误：

```
gcc is not recognized
```

原因：

- PATH 没配置

解决：

- 检查：

```
C:\mingw64\bin
```

是否加入环境变量。

------

# 2. 找不到 stdio.h

原因：

- gcc 安装错误

解决：

- 重新下载 WinLibs

------

# 3. 中文乱码

解决：

```
printf("Hello");
```

先避免中文。

后面会讲编码问题。

------

# 十一、推荐目录结构

```
c_project/
│
├── lesson1/
│   └── main.c
│
├── lesson2/
│   └── main.c
```

这样方便管理课程代码。

------

# 十二、以后常用命令

------

# 编译

```
gcc test.c -o test
```

------

# 运行

```
test
```

------

# 指定C标准

```
gcc test.c -o test -std=c11
```

------

# 开启警告（推荐）

```
gcc test.c -o test -Wall
```

------

# 推荐完整命令

```
gcc main.c -o main -std=c11 -Wall
```

# 第1课：第一个 C 程序（详细教学）

这一课你将真正开始写 C语言代码。

学完后你会：

- 能运行自己的程序
- 理解 C程序结构
- 会使用 `printf`
- 知道程序如何执行

------

# 一、第一个程序

创建文件：

```
main.c
```

输入代码：

```
#include <stdio.h>

int main() {

    printf("Hello World\n");

    return 0;
}
```

------

# 二、编译程序

打开终端：

```
gcc main.c -o main
```

------

# 三、运行程序

Windows：

```
main
```

Linux / macOS：

```
./main
```

输出：

```
Hello World
```

------

# 四、程序结构详细讲解

------

# 1. `#include <stdio.h>`

```
#include <stdio.h>
```

作用：

- 引入标准输入输出库

因为：

```
printf()
```

在这个库里面。

如果没有它：

```
printf
```

无法使用。

------

# 2. `int main()`

```
int main()
```

作用：

- 程序入口

程序运行时：

```
从 main 开始执行
```

------

# main 的意思

- `main`
   → 主函数
- `int`
   → 返回整数

------

# 3. `{ }`

```
{
}
```

作用：

- 表示代码块

main 函数里面的代码：

```
都写在大括号中
```

------

# 4. `printf`

```
printf("Hello World\n");
```

作用：

- 输出内容到屏幕

------

# 字符串

```
"Hello World"
```

双引号表示：

- 字符串

------

# `\n`

```
\n
```

作用：

- 换行

例如：

```
printf("A\n");
printf("B\n");
```

输出：

```
A
B
```

------

# 如果没有 `\n`

```
printf("A");
printf("B");
```

输出：

```
AB
```

------

# 5. `;`

```
;
```

作用：

- 表示语句结束

C语言中：

```
每条语句后面必须加分号
```

------

# 6. `return 0`

```
return 0;
```

作用：

- 程序正常结束

------

# 五、程序执行流程

程序执行顺序：

```
main开始
   ↓
printf输出
   ↓
return 0
   ↓
程序结束
```

------

# 六、修改程序

尝试修改：

```
#include <stdio.h>

int main() {

    printf("I love C\n");

    return 0;
}
```

------

# 多行输出

```
#include <stdio.h>

int main() {

    printf("Tom\n");
    printf("18\n");
    printf("Student\n");

    return 0;
}
```

输出：

```c
Tom
18
Student
```