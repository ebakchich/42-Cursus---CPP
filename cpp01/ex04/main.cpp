#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    (void)ac;
    std::string     line;
    std::ifstream   input_file(av[1]);

    while (std::getline(input_file, line)) {
        std::cout << line << std::endl;
    }

    input_file.close();

    return 0;
}