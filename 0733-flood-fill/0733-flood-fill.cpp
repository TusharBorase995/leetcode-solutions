class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c,
         int oldColor, int newColor) {

        if (r < 0 || r >= image.size() ||
            c < 0 || c >= image[0].size())
            return;

        if (image[r][c] != oldColor)
            return;

        image[r][c] = newColor;

        dfs(image, r - 1, c, oldColor, newColor); //up
        dfs(image, r + 1, c, oldColor, newColor); //down
        dfs(image, r, c - 1, oldColor, newColor); //left
        dfs(image, r, c + 1, oldColor, newColor); //right
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int oldColor = image[sr][sc];
            if (oldColor == color)
                return image;
            dfs(image, sr, sc, oldColor, color);
            return image;
    }
};