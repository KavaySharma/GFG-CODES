class Solution {
public:
    int mean(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        return sum / n; 
    }
    int median(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
        sort(arr.begin(), arr.end());
        if(n % 2 != 0){
            return arr[n / 2];
        }
        else {
            int mid1 = arr[n / 2 - 1];
            int mid2 = arr[n / 2];
            return (mid1 + mid2) / 2;
        }
    }
};