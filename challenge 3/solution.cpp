#include <gtest/gtest.h>

using namespace std;

string ConcatRemove(string s, string t, int k) {
    bool can = true;
    int n = s.size(), m = t.size();
    if (k >= n + m) can = true;
    else {
        // biggest common prefix between s and t
        int pref = 0;
        for (int i = 0; i < min(n, m); ++i) {
            if (s[i] == t[i]) pref++;
            else break;
        }
        int min_moves = n - pref + m - pref;
        if (k >= min_moves && (k - min_moves) % 2 == 0) can = true;
        else can = false;
    }
    return can ? "yes" : "no"; 
}

TEST(solution, ConcatRemove)
{
    GTEST_ASSERT_EQ(ConcatRemove("blablablabla", "blablabcde", 8), "yes");
    GTEST_ASSERT_EQ(ConcatRemove("tab", "tab", 7), "yes");
    GTEST_ASSERT_EQ(ConcatRemove("abc", "def", 6), "yes");
    GTEST_ASSERT_EQ(ConcatRemove("abc", "a", 3), "no");
    GTEST_ASSERT_EQ(ConcatRemove("abc", "a", 1), "no");
    GTEST_ASSERT_EQ(ConcatRemove("abc", "a", 4), "yes");
}


int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}