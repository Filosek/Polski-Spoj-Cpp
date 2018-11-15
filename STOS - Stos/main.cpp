#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int stackSize = 10;
    int* tab = new int[stackSize]{};
    int numOfEntries = 0;
    char input;
    int num;
    while(cin>>input)
    {
        if(input=='+')
        {
            cin>>num;
            if(numOfEntries == stackSize)
            {
                cout<<":(\n";
            }
            else
            {
                for(int i = numOfEntries; i>= 0; i--)
                {
                    tab[i+1] = tab[i];
                }
                tab[0] = num;
                numOfEntries++;
                cout<<":)\n";

            }
        }
        else
        {
            if(numOfEntries>0)
            {
                cout<<tab[0]<<"\n";
                for(int i=0; i<numOfEntries; ++i)
                {
                    tab[i] = tab[i+1];
                }
                numOfEntries--;
            }
            else
            {
                cout<<":(\n";
            }
        }
    }
    return 0;
}
