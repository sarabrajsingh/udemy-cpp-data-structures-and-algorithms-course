#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class Student
{
    private:
        int studentNumber;
    public:
        Student(int n)
        {
            this->studentNumber = n;
        }
        int getStudentNumber() const
        {
            return this->studentNumber;
        }
};

class comparator
{
    public:
        bool operator()(const Student &lhs, const Student &rhs)
        {
            return lhs.getStudentNumber() > rhs.getStudentNumber();
        }
};

int main()
{
    vector<Student> v;

    // fill vector

    for(int i = 0; i <=10; ++i)
    {
        v.push_back(Student(i));
    }

    cout << "before sorting: \n";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].getStudentNumber() << " ";
    }

    sort(v.begin(), v.end(), comparator());

    cout << endl << "after sorting: \n";

    for(int i = 0; i < v.size(); ++i)
    {
        cout << v[i].getStudentNumber() << " ";
    }

    string s = "abcdefghijklmnopqrstyv";

    sort(s.begin(), s.end());

    cout << endl << binary_search(s.begin(), s.end(), 'z') << endl;
    cout << endl << binary_search(s.begin(), s.end(), 'p') << endl;

    return 0;
}