#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h>

using namespace std;

int graph[26][26];
int in_counter[26];
int nodes = 0, have_result = 0;

void top_sort(int index, vector<int> vec, int map)
{
    vec.push_back(index);
    if ((int) vec.size() == nodes) {
        nodes--;
        for (int i = 0; i < nodes; i++) {
            printf("%c ", (char) (vec[i] + 'A'));
        }
        printf("%c\n", (char) (vec[nodes++] + 'A'));
        have_result = 1;
    } else {
        map |= (1 << index);
        for (int i = 0; i < 26; i++) {
            if (graph[index][i] == 1 && in_counter[i] > 0) {
                in_counter[i]--;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (in_counter[i] == 0 && ((map & (1 << i)) == 0))
                top_sort(i, vec, map);
        }
        for (int i = 0; i < 26; i++) {
            if (graph[index][i] == 1) {
                in_counter[i]++;
            }
        }
        vec.pop_back();
    }
}

void get() {
    stringstream str;
    string line = "";
    getline(cin, line);
    str << line;
    int cases;
    str >> cases;
    while (cases--) {
        have_result = 0;
        getline(cin, line);
        getline(cin, line);

        for (int i = 0; i < 26; i++) {
            in_counter[i] = -1;
            for (int j = 0; j < 26; j++) {
                graph[i][j] = 0;
            }
        }
        nodes = 0;
        for (int i = 0; i < (int) line.size(); i += 2) {
            in_counter[line[i] - 'A'] = 0;
            nodes++;
        }
        getline(cin, line);

        for (int i = 0; i < (int) line.size(); i += 4) {
            int index1 = line[i] - 'A';
            int index2 = line[i + 2] - 'A';
            graph[index1][index2] = 1;
            in_counter[index2]++;
        }
        for (int i = 0; i < 26; i++) {
            if (in_counter[i] == 0) {
                vector<int> v;
                top_sort(i, v, 0);
            }
        }
        if (have_result == 0)
            printf("NO\n");
        if (cases != 0)
            printf("\n");
    }
}

int main() {
    get();
    return 0;
}
