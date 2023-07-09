#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

void draw(vector<int> x, vector<int> y, int n)
{
    for (int i = 0; i < n; i++)
    {
        line(x[i], y[i], x[(i + 1) % n], y[(i + 1) % n]);
    }
}

void translate(vector<int> &x, vector<int> &y, int n, int tx, int ty)
{
    for (int i = 0; i < n; i++)
    {
        x[i] += tx;
        y[i] += ty;
    }
}

int main()
{
    int n; //... Number of vertex of the polygon
    cin >> n;
    vector<int> x(n), y(n); //... (x,y) coordinates of vertex
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    int tx, ty; //... Translation factors
    cin >> tx >> ty;

    int gd = DETECT, gm = DETECT;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    draw(x, y, n); //... The polygon before translation
    translate(x, y, n, tx, ty); //... Applying 2d translation
    setcolor(YELLOW);
    draw(x, y, n); //... The polygon after translation

    getch();
    closegraph();
    return 0;
}

/*//... Sample Input-Output:
___________________________________________________________________________________________________________________________________________________________________________________________________________________________
Input:
3
100 100
100 200
200 100
100 100

*///...
