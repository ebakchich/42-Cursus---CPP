#include <iostream>
#include <fstream>
#include <string>

void replaceAll(std::string& str, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos)
    {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int ac, char **av)
{
    (void)ac;

    std::string     line;
    std::ifstream   input_file(av[1], std::ios::in);
    std::ofstream   output_file("filename.replace");

    while (std::getline(input_file, line))
    {
        replaceAll(line, av[2], av[3]);
        output_file << line << std::endl;
    }
    input_file.close();
    output_file.close();

    return 0;
}
