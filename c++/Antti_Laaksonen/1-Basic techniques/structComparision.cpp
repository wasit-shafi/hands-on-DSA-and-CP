#include<bits/stdc++.h>
using namespace std;

// here we try to sort on the basis of x then y
struct Point{
    int x, y;
    bool operator<(const Point &p)
    {
        if(x != p.x) return x < p.x; // first compare x
        return y < p.y;              // if x are same now sort on the basis of 'y'
    }
};

int main()
{
    Point p;
    vector<Point> v;
    
    p.x = 50;
    p.y  = 1;
    v.push_back(p);

    p.x = 20;
    p.y  = 2;
    v.push_back(p);

    
    p.x = 20;
    p.y  = 5;
    v.push_back(p);
    
    p.x = 10;
    p.y  = 39;
    v.push_back(p);
    
    p.x = 10;
    p.y  = 30;
    v.push_back(p);
    
    p.x = 20;
    p.y  = 30;
    v.push_back(p);

    p.x = 20;
    p.y  = 2;
    v.push_back(p);

    cout << "\n\nVector elements : \n"; 
    for(Point element : v) cout << element.x << " " << element.y << "\n";

    for(Point element : v)
    sort(v.begin(), v.end());
    cout << "\n\nVector elements : \n"; 
    for(Point element : v) cout << element.x << " " << element.y << "\n";

    return 0;
}