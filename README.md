# 极域课堂软件关闭工具 / Mythware Killer

[![License](GPL-3.0)](LICENSE)
[![Language](C++)](https://img.shields.io/badge/language-C%2B%2B-blue)

---

## 中文简介

这是一个轻量级、开源的命令行小工具，用于**强制关闭极域电子教室（Mythware）客户端进程 studentmain.exe**，帮助教师在机房快速恢复学生机控制权，或满足其他需要终止该软件的合法场景。

- 仅支持 Windows 平台  
- 单文件源码，无依赖，开箱即用  
- 使用 GPL-3.0 协议开源，欢迎二次开发和提交 PR！

### 快速开始

#### ① 图形菜单版（exe）
1. 下载最新 Release（或自行编译）  
2. 双击 `kill_mythware.exe` → 按提示输入 `1` 即可关闭极域  
3. 其余菜单：  
   - `2` 关于  
   - `3` 退出

#### ② 纯文本教程版（手动命令）
如果只想**手工操作**，无需任何软件：  
1. 按 `Win + R`，输入 `cmd`，回车  
2. 在命令行里复制下面一行，回车即可：
taskkill /im studentmain.exe /f
3. 看到「成功终止进程」即表示极域已被关闭。

### 编译

```bash
# MinGW
g++ kill_mythware.cpp -o kill_mythware.exe -static -s -O2

# MSVC
cl /O2 /std:c++17 kill_mythware.cpp
