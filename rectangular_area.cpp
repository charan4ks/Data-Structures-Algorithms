class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int nx1 = max(ax1, bx1);
        int ny1 = max(ay1, by1);
        int nx2 = min(ax2, bx2);
        int ny2 = min(ay2, by2);
        
        int area1 = (ax2-ax1)*(ay2-ay1);
        int area2 = (bx2-bx1)*(by2-by1);
        
        int common_area = 0;
        if(nx1<nx2 && ny1<ny2) common_area = abs(nx2-nx1)*abs(ny2-ny1);
        
        int sol = area1+area2-common_area;
        
        return sol;
    }
};