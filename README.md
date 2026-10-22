# coding-journey

> 从零开始学 C / C++ 的练习记录，一个知识点一个能独立跑起来的小工程

## 这是什么

这里记录我从零开始接触编程语言的过程。每个目录对应一个知识点或一次练习，代码里保留着我自己的注释、写错又改对的痕迹，不是抄来的标准答案。

完整的项目放在另一个仓库：[minesweeper-cpp](https://github.com/majordanbarry/minesweeper-cpp)（控制台扫雷）。

## 目录

编号就是学习顺序。想让某个练习跑起来，打开它下面的 `.slnx` 即可。

| 练习 | 主题 | 练的是什么 |
| --- | --- | --- |
| `c/01-hello-world` | 第一个程序 | `#include`、`main` 的返回值、`printf` |
| `c/02-printf-scanf` | 输入输出 | `printf` 的格式说明符、用一条 `scanf` 读多种类型 |
| `c/03-if-else` | 分支与随机数 | 三目运算符、`srand` / `rand` |
| `c/04-array` | 数组 | `sizeof` 求长度、二维数组、字符串 |
| `c/05-binary-search` | 二分查找 | 用 `left` / `right` 收缩区间，`mid` 逐步逼近 |
| `cpp/01-io` | C++ 输入输出 | `cin` / `cout`、`endl` |
| `cpp/02-static-extern` | 作用域与链接 | `static` 修饰函数和变量、`extern` 声明 |
| `cpp/03-pointer` | 指针与 const | `const int*` 不能改值、`int* const` 不能改指向 |

## 怎么运行

每个练习目录下都有一个 `.slnx` 解决方案文件，用 Visual Studio 2022 打开，按 `F5` 运行。

需要安装「使用 C++ 的桌面开发」工作负载。`c/` 下是 C 语言练习，`cpp/` 下是 C++ 练习。

## 学习进度

- [x] 第一个程序、`printf` / `scanf`
- [x] 分支与三目运算符
- [x] 循环与数组
- [x] 二分查找
- [x] C++ 的 `cin` / `cout`
- [x] `static` / `extern`
- [x] 指针与 `const`
- [ ] 函数与递归
- [ ] 结构体
- [ ] 文件操作
- [ ] 面向对象

## 说明

- 练习代码保持原样，包括注释掉的历史写法——那些是踩过的坑，删掉就看不出当时怎么想错的了。
- 构建产物（`x64/`、`.vs/`、`*.obj`）由 `.gitignore` 排除，仓库里只有源码和工程文件。
