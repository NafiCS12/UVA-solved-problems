#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define REP(i, j) for(int i=0 ; i<j ; i++)

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int DFS_WHITE = -1;

vi dfs_num, dfs_low, visited, s;
int N, M, V, W, P, dfsCount, scc;
vector<vii> AdjList;

void tarjanSCC(int u) {
    dfs_num[u] = dfs_low[u] = dfsCount++;
    s.push_back(u);
    visited[u] = 1;
    REP(j, AdjList[u].size()) {
        ii v = AdjList[u][j];
        if (dfs_num[v.first] == DFS_WHITE)
            tarjanSCC(v.first);
        if (visited[v.first])
            dfs_low[u] = min(dfs_low[u], dfs_low[v.first]);
    }

    if (dfs_low[u] == dfs_num[u]) {
        ++scc;
        int v;
        do {
            v = s.back();
            s.pop_back();
            visited[v] = 0;
        } while (u != v);
    }
}

int main() {
    while(scanf("%d %d", &N, &M), (N || M)) {
        AdjList.assign(N, vii());
        while (M--) {
            scanf("%d %d %d", &V, &W, &P);
            AdjList[V-1].push_back(ii(W-1, 1));
            if (P == 2) AdjList[W-1].push_back(ii(V-1, 1));
        }
        dfsCount = scc = 0;
        dfs_num.assign(N, DFS_WHITE);
        dfs_low.assign(N, 0);
        visited.assign(N, 0);
        REP(i, N) {
            if (dfs_num[i] == DFS_WHITE) {
                tarjanSCC(i);
            }
        }

        printf("%d\n", (scc == 1));
    }
}
