#include <iostream>
#include <queue>
#include <vector>
#include <cassert>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
  int E;
  scanf("%d", &E);

  vector<int> g[E];

  for (int i=0; i<E; ++i)
  {
    int N;
    scanf("%d", &N);
    while (N--)
    {
      int j;
      scanf("%d", &j);

      g[i].push_back(j);
    }

  } //end of input

  int T;
  scanf("%d", &T);
  while (T--)
  {
    int start;
    scanf("%d", &start);
    if (g[start].size() == 0)
    {
      printf("0\n");
    }

    else
    {

      int max_boom = -1, first_day = -1, booms[E];
      bool visited[E];

      memset(booms, 0, sizeof booms);
      memset(visited, false, sizeof visited);

      queue<pair<int, int> > q;

      q.push(make_pair(start, 0));

      while (q.size())
      {
        int person = q.front().first;
        int today = q.front().second;

        q.pop();

        if (visited[person]) continue;

        visited[person] = true;
        booms[today]++;
        if (today > 0 && booms[today] > max_boom)
        {
          max_boom = booms[today];
          first_day = today;
        }

        vector<int> &friends = g[person];

        for (int i=0; i<friends.size(); ++i)
        {
          if (!visited[friends[i]])
          {
            q.push(make_pair(friends[i], today + 1));
          }
        }
      }

      assert(max_boom != -1 && first_day != -1);
      printf("%d %d\n", max_boom, first_day);
    }
  }
  return 0;
}
