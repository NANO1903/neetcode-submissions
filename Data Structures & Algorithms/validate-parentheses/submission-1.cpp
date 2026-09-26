/*
You are given a string s consisting of the following characters: '(', ')', '{', '}', '[' and ']'.

The input string s is valid if and only if:

    1. Every open bracket is closed by the same type of close bracket.
    2. Open brackets are closed in the correct order.
    3. Every close bracket has a corresponding open bracket of the same type.

Return true if s is a valid string, and false otherwise.

Example 1:

Input: s = "[]"

Output: true
Example 2:

Input: s = "([{}])"

Output: true
Example 3:

Input: s = "[(])"

Output: false
Explanation: The brackets are not closed in the correct order.

Constraints:

1 <= s.length <= 1000
*/

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> openBrackets;

        for (char bracket : s) {
            if (brackets.contains(bracket)) {
                if (!openBrackets.empty() && openBrackets.top() == brackets[bracket]) {
                    openBrackets.pop();
                }
                else
                    return false;
            }
            else {
                openBrackets.push(bracket);
            }
        }

        return openBrackets.empty();
    }
};
