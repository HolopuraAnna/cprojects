// 10.6.a
#include <iostream>

struct cost
{
    unsigned int hrn = 0;
    unsigned int kop = 0;
};

cost input_cost()
{
    cost x = cost();
    std::cout << "hryvnas: " << std::endl;
    std::cin >> x.hrn;
    std::cout << "kopecks: " << std::endl;
    std::cin >> x.kop;    
    return x;
}

void print_cost(const cost c)
{
    std::cout << c.hrn << "." << c.kop << std::endl;
}

int main()
{
    cost c = input_cost();
    print_cost(c);
}
