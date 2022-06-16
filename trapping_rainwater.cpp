#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> a)
{
    stack<int> st;
    int n = a.size(), ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and a[st.top()] < a[i])
        {
            int cur = st.top();
            st.pop();
            if (st.empty())
            {
                break;
            }

            int diff = i - st.top() - 1;
            ans += (min(a[st.top()], a[i]) - a[cur]) * diff;
        }
        st.push(i);
    }
    return ans;
}
int main()
{

    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << trap(v);

    return 0;
}