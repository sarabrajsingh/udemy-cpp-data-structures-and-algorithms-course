#include <vector>
#include <string>
#include <iostream>

using namespace std;

class AnimalNumber  
{
    private:
        int my_num;
    public:
        AnimalNumber(int x)
        {
            this->my_num = x;
        }
};
int main()
{
    vector<AnimalNumber> v;
    AnimalNumber an1(5);
    AnimalNumber an2(69);

    v.push_back(an1);
    v.push_back(an2);

    v.erase(v.begin()+1);

    return 0;
}