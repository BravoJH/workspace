#include <iostream>
#include <boost/coroutine/all.hpp>

typedef boost::coroutines::asymmetric_coroutine< int >::pull_type pull_coro_t;
typedef boost::coroutines::asymmetric_coroutine< int >::push_type push_coro_t;


void runit(pull_coro_t & source)
{
    std::cout << source.get();
    source();
    std::cout << source.get();
    source();
    std::cout << source.get();
    source();
    std::cout << source.get();
}

int main(int argc, char * argv[])
{
    {
        push_coro_t sink(runit);

        int i = 0;
        while (sink)
        {
            ++i;
            sink(i);
            std::cout << "-";
        }
    }

    std::cout << "\nDone" << std::endl;

    return 0;
}

