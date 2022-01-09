class Solution {
public:
    int longestMountain(vector<int>& A) {
        int i = 0;
        int start = 0;
        int peak = 0;
        int end = 0;
        int answer = 0;
        while(i + 1 < A.size())
        {
            // go to local min
            while(i + 1 < A.size() && A[i] > A[i + 1])
            {
                i++;
            }
            // record starting index
            start = i;
            // going up
            while(i + 1 < A.size() && A[i] < A[i + 1])
            {
                i++;
            }
            // record peak index
            peak = i;
            // going down
            while(i + 1 < A.size() && A[i] > A[i + 1])
            {
                i++;
            }
            //record end index
            end = i;
            // if start, peak, end, have different index, there is a mountain
            if(start != peak && peak != end)
            {
                answer = max(answer, i + 1 - start);
            }
            // if is flat, move one step
            if(i + 1 < A.size() && A[i] == A[i + 1])
            {
                i++;
            }
        }
        return answer;
    }
};