#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    while (true)
    {
        std::cout << "========================\n";
        std::cout << "极域课堂软件关闭工具\n";
        std::cout << "========================\n";

        std::cout << "1. 关闭极域课堂软件\n";
        std::cout << "2. 关于\n";
        std::cout << "3. 退出\n";

        std::cout << "请输入选项：";
        std::string answer;
        std::getline(std::cin, answer);

        if (answer == "1")
        {
            int ret = std::system("taskkill /im studentmain.exe /f");
            if (ret == 0)
                std::cout << "极域课堂软件已关闭\n";
            else
                std::cout << "未能成功关闭 studentmain.exe（可能未运行）\n";
        }
        else if (answer == "2")
        {
            std::cout << "本软件由 C++ 编写，作者：LinyuGameStudio\n";
            std::cout << "版本：v1.0\n";
            std::cout << "GitHub：github.com/LinyuGameStudio/no_mythware\n";
        }
        else if (answer == "3")
        {
            return 0;
        }
        else
        {
            std::cout << "输入有误，请重新选择\n";
        }
        std::cout << '\n';
    }
}