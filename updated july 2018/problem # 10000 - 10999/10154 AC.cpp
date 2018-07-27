#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 5610
#define MAXINT (1 << 20)

class turtle
{
public:
    int weight;
    int strength;

//over load
    bool operator<(const turtle &other) const
    {

        if (strength != other.strength)
            return strength < other.strength;

        return weight < other.weight;
    };
};

int main()
{
    turtle turtles[MAXN];
    int minWeight[MAXN];
    int nTurtles = 1, weight, strength;

    while (cin >> weight >> strength)
    {
        if (weight > strength)
            continue;

        turtles[nTurtles++] = (turtle){weight, strength};
    }

    sort(turtles + 1, turtles + nTurtles);
    nTurtles--;

    minWeight[0] = 0;
    for (int h = 1; h <= nTurtles; h++)
        minWeight[h] = MAXINT;

    // DP

    int answer = 1;
    for (int i = 1; i <= nTurtles; i++)
        for (int h = nTurtles; h >= 1; h--)
        {
            if (minWeight[h - 1] + turtles[i].weight <= turtles[i].strength)
            {
                minWeight[h] = min(minWeight[h], minWeight[h - 1] + turtles[i].weight);
            }
            if (minWeight[h] < MAXINT)
                answer = max(answer, h);

        }

    cout << answer << endl;

    return 0;
}
