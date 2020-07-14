class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour < 0 || minutes < 0){
            return 0;
        }
        if(hour == 12){
            hour = 0;
        }
        if(minutes == 60){
            minutes = 0;
            hour += 1;
            if(hour > 12){
                hour = hour - 12;
            }
        }
        double h = ((double)hour * 60  + minutes) * 0.5;
        double m = (double) 6 * minutes;
        double ans = abs(h - m);
        // cout<<ans;
        return min(360 - ans, ans);
    }
};