
#include<iostream>

int main(int ac, char **av)
{
    if(ac < 2)
        return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *", -1);
    for(int i = 1; i < ac; i++)
    {
        int j = -1;
        while(av[i][++j])
            std::cout << (char)toupper(av[i][j]);
    }
    std::cout << std::endl;
}