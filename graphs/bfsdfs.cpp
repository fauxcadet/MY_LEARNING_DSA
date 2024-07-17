#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
using namespace std;
void bfs(int G[][7], int start, int n)
{
    int i = start;

    int visited[7] = {0};
    cout << i;
    visited[i] = 1;
    enqueue(i);
    while (!isEmpty())
    {
        i = dequeue();
        for (int j = 1; j < n; j++)
        {
            if (G[i][j] = 1 & visited[j] == 0)
            {
                cout << j;
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}
void dfs(int G[][7], int start, int n)
{
    static int visited[7] = {0};
    if (visited[start] == 0)
    {
        cout << start;
        visited[start] = 1;
        for (int j = 1; j < n; j++)
        {
            if (G[start][j] == 1 && visited[j] == 0)
            {
                dfs(G, j, n);
            }
        }
    }
}

int main()
{
    int G[7][7] = {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};
    dfs(G, 4, 7);
    return 0;
}