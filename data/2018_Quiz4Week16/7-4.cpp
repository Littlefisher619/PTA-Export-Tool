#include <iostream>
using namespace std;
class Point
{
public:
    void initPoint(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    int getX() const { return x; }
    int getY() const { return y; }

private:
    float x, y;
};

class Rectangle : public Point
{
public:
    void initRectangle(int x, int y, int w, int h)
    {
        initPoint(x, y);
        this->w = w;
        this->h = h;
    }
    int getH() const { return h; }
    int getW() const { return w; }
    void getRightUpPoint(int *xx, int *yy)
    {
        *xx = getX() + getW();
        *yy = getY() + getH();
    }

private:
    int w, h;
};

int main()
{
    int x, y, lenght, width;
    int xx, yy;
    cin >> x >> y >> lenght >> width;

    Rectangle R1;
    R1.initRectangle(x, y, lenght, width);
    Rectangle R2(R1);
    R2.getRightUpPoint(&xx, &yy);
    cout << xx << " " << yy << endl;

    return 0;
}