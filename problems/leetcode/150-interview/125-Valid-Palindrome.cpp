class Solution {
public:
    bool isPalindrome(string s) {
          for (char &c : s) {
        c = std::tolower(c);
    }
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) { return !std::isalnum(c); }), s.end());
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
    }
};