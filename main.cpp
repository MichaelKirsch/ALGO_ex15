#include <iostream>
//T(n) = n*T(n-1)+n

int recourse(int n , int& counter, int stop)
{
    counter++;

    if(counter>=stop)
        return n;
    return n*recourse(n-1,counter,stop)+n;
}


void rec(int stop)
{

}



int main() {
    int stopvalue=0;
    std::cout << recourse(5,stopvalue,1000) << std::endl;
    return 0;
}
