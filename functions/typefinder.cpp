
#include <iostream>

class typefinder
{
private:
    /* data */
public:
    typefinder(/* args */);
    ~typefinder();
    void printer(auto input);
};

typefinder::typefinder(/* args */)
{
}

typefinder::~typefinder()
{
}

void typefinder::printer(auto input)
{
    std::cout << "The Class output: " << input << std::endl;
}

