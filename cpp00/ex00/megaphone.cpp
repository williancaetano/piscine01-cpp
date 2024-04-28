#include<iostream>
#include<cctype>

int main (int argc, char *argv[])
{
    std::string buffer;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            argv[i][j] = toupper(argv[i][j]);
        }
        buffer.append(argv[i]);
    }
    std::cout << buffer << std::endl;
    return 0;
}