#include <iostream>
#include <string>

int binar_no(int number = 0);

int main()
{
    
    binar_no(32112);
    return 0;
}

int binar_no(int number)
{
    static int count_occurences;
    int group_by_4 = 0;
    int rest = number%2;
    
    count_occurences++;
    
    group_by_4 = count_occurences;
    
    if(number > 1)
    {
        binar_no(number/2);
    }
    
    if(!(group_by_4 % 4))
    {
        std::cout<<" ";
    }
    
    std::cout<<rest;
    
    return 0;
}
