#include <iostream>
#include <vector>
int main(int argc, char* argv[])
{
    const std::vector<std::string> cmdLineArgs { argv, argv+argc };
    for(int i = 0; i<argc; i++){
        std::cout << cmdLineArgs[i] << std::endl;

    }
    return 0;
}