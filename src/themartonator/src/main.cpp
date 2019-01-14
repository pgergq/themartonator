#include <boost/any.hpp>

#include <array>
#include <iostream>


int main()
{
    auto arr = std::array{boost::any{0}, boost::any{1}, boost::any{2}};
    std::cout << "hello world" << std::endl;
    for (auto&& e : arr)
    {
        std::cout << e.type().name() << std::endl;
    }
    return 0;
}