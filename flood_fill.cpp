class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        traverse(image, sr, sc, newColor, image[sr][sc]);
        
        return image;
        
        
    }
    
    void traverse(vector<vector<int>>& image, int sr, int sc, int newColor, int color){

        if(sr>=0 && sc>=0 && sr<image.size() && sc<image[0].size() && image[sr][sc] == color && color!=newColor){

            image[sr][sc] = newColor;
            
            traverse(image, sr+1, sc, newColor, color);
            traverse(image, sr, sc+1, newColor, color);
            traverse(image, sr, sc-1, newColor, color);
            traverse(image, sr-1, sc, newColor, color);
            
        }
        
        return;
        
    }
};       