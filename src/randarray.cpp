#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char const *argv[])
{
    using namespace std;
    srand((unsigned)time(0));
    int amount = stoi(argv[2]);
    int max = stoi(argv[1]);
    for (int i = 0; i < amount - 1; i++)
    {
        cout << (rand() % max) << " ,";
    }
    cout << (rand() % max) << endl;
    return 0;
}
