#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    const char* names[] = {"hello", "wolrd"};
    std::string last_arg = names[3];
    return last_arg.size();
}
