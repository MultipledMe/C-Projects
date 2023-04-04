#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello World was built at 4:25!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}