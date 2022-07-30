#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<string, int> recordmap;
    recordmap["kulwinder"] = 12;
    recordmap["ishan"] = 0;
    recordmap["rohan"] = 2;
    map<string, int>::iterator it;
    for (it = recordmap.begin(); it != recordmap.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}