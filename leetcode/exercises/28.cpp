class Solution {
public:
    int strStr(string text, string part) {
        int size_text = text.size();
        int size_part = part.size();

        for (int i = 0; i <= (size_text - size_part); i++) {
            if (text.substr(i, size_part) == part) {
                return i;
            }
        }

        return -1;
    }
};
