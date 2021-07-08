class Solution
{
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2)
    {
        //將圓心平移到原點
        x1 -= x_center;
        x2 -= x_center;
        y1 -= y_center;
        y2 -= y_center;

        //檢查和圓心最近的點和是否在圓中，就畢式定理
        int minX = x1 * x2 > 0 ? min(x1 * x1, x2 * x2) : 0;
        int minY = y1 * y2 > 0 ? min(y1 * y1, y2 * y2) : 0;
        return (minY + minX) <= (radius * radius);
    }
};