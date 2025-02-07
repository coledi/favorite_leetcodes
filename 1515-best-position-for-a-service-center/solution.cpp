class Solution {
public:
    double getMinDistSum(vector<vector<int>>& positions) {
        double x = positions[0][0], y = positions[0][1];
        const double accuracy = 1e-6; // need one > (which is -5) .. use as break cond
        for (int i = 1; i < positions.size(); i++) {
            x = ((x * i) + positions[i][0]) / (i + 1);
            y = ((y * i) + positions[i][1]) / (i + 1);
        }
        double min_distance_sum = 0;
        for (const auto &pos : positions) {
            double x_ = x - pos[0], y_ = y - pos[1];
            min_distance_sum += sqrt((x_ * x_) + (y_ * y_));
        }
        // minimize on current scale .. then minimize scale and repeat
        vector<pair<int, int>> directions{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        double scale = 100;
        while (scale > accuracy) {
            bool minimized_curr_scale = true;
            for (const auto& [dx, dy] : directions) {
                double x_new = x + scale * dx, y_new = y + scale * dy;
                double cur_distance_sum = 0;

                for (const auto &pos : positions) {
                    double x_ = (x_new - pos[0]), y_ = y_new - pos[1];
                    cur_distance_sum += sqrt((x_ * x_) + (y_ * y_));
                }
                if (cur_distance_sum < min_distance_sum) {
                    min_distance_sum = cur_distance_sum;
                    x = x_new;
                    y = y_new;
                    minimized_curr_scale = false;
                    break;
                }
            }
            if (minimized_curr_scale) {
                scale /= 2;
            }
        }
        return min_distance_sum;
        
    }
};
