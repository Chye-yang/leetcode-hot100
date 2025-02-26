#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class BrowserHistory
{
public:
    BrowserHistory(string homepage)
    {
        history.resize(1000000);
        history[0] = homepage;
        size = 1;
        point = 0;
    }

    void visit(string url)
    {
        point++;
        history[point] = url;
        size = point + 1;
    }

    string back(int steps)
    {
        if (point - steps < 0)
        {
            point = 0;
            return history[point];
        }
        point -= steps;
        return history[point];
    }

    string forward(int steps)
    {
        if (size - point <= steps)
        {
            point = size - 1;
            return history[point];
        }
        point += steps;
        return history[point];
    }

private:
    // string history[1000000];
    vector<string> history;
    int size;
    int point;
};
