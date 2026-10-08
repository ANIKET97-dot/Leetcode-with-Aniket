class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2,
                    int bx1, int by1, int bx2, int by2) {

        // Area of first rectangle
        int area1 = (ax2 - ax1) * (ay2 - ay1);

        // Area of second rectangle
        int area2 = (bx2 - bx1) * (by2 - by1);

        // Check whether rectangles actually overlap
        bool overlap = (ax1 < bx2 && bx1 < ax2 &&
                        ay1 < by2 && by1 < ay2);

        int overlapArea = 0;

        if (overlap) {

            // Mathematical formula for overlap width
            int overlapWidth =
                ((ax2 - ax1) + (bx2 - bx1)
                - abs(ax1 - bx1)
                - abs(ax2 - bx2)) / 2;

            // Mathematical formula for overlap height
            int overlapHeight =
                ((ay2 - ay1) + (by2 - by1)
                - abs(ay1 - by1)
                - abs(ay2 - by2)) / 2;

            overlapArea = overlapWidth * overlapHeight;
        }

        return area1 + area2 - overlapArea;
    }
};