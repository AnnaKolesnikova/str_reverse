#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char string[] = "hello world";
    int length = strlen(string);
    int temp, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
    std::cout << string << std::endl;
    return 0;
}