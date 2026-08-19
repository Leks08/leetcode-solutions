class Solution {

private:
    static bool comparator(pair<int,char> p1, pair<int,char> p2) {
        return p1.first > p2.first;
    }

public:
    string frequencySort(string s) {
        pair<int, char> count[256];

        for (int i = 0; i < 256; i++) {
            count[i] = {0, (char)i};
        }
        for (char ch : s) {
            count[(unsigned char)ch].first++;
        }

        sort(count, count + 256, comparator);

        string ans = "";

        for (int i = 0; i < 256; i++) {
            if (count[i].first == 0) {
                break;
            }
            ans.append(count[i].first, count[i].second);
        }

        return ans;
    }
};