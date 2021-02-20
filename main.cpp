#include "SQL.cpp"
#include <iostream>

int main() {

    std::string serverAddress = "localhost";
    int serverPort = 3306;

    SQL test;

    test.sendStatement("help why does this not work :(");

    std::cout << "Starting Server" << std::endl;
    std::cout << "Connecting to server on " << serverAddress << ":" << serverPort << std::endl;

    return 0;
}
