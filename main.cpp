#include <iostream>
//T(n) = n*T(n-1)+n

int recourse(int n , int* stop)
{
    if(n==*stop)
        return n;
    return n*recourse(n-1,stop)+n;
}

int main() {
    int stopvalue = 10;
    std::cout << recourse(1,&stopvalue) << std::endl;
    return 0;
}
