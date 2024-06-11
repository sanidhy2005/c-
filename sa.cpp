#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values = {0, 1, 1, 2, 0, 0, 2, 1};
    int zeros, ones, twos;
    zeros = ones = twos = 0;

    for (int i = 0; i < values.size(); i++)
    {
        if (values[i] == 0)
        {
            zeros++;
        }
        else if (values[i] == 1)
        {
            ones++;
        }
        else
        {
            twos++;
        }
    }

    int i = 0;

    while (zeros--)
    {
        values[i] = 0;
        i++;
    }
    while (ones--)
    {
        values[i] = 1;
        i++;
    }
    while (twos--)
    {
        values[i] = 2;
        i++;
    }

    for(auto i:values){
        cout<<i;
    }
    
}