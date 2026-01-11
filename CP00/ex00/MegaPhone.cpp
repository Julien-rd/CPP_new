#include <iostream>

int main(int argc, char **argv) 
{
    size_t iter = 1;
    size_t str_iter;
    if(argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    while(argv[iter])
    {
        str_iter = 0;
        while(argv[iter][str_iter])
        {
            std::cout << (char)std::toupper(argv[iter][str_iter]);
            str_iter++;
        }
        if(argv[iter + 1])
            std::cout << " ";
        iter++;
    }
    std::cout << std::endl;
    return 0;
}