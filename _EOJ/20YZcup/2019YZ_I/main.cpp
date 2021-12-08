#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
std::vector<size_t> build(const std::string& s)
{
    std::vector<std::pair<std::string, size_t> > suffixes;
    for (size_t i = 0; i < s.length(); ++i) {
    suffixes.emplace_back(s.substr(i), i);
}
std::sort(suffixes.begin(), suffixes.end());
std::vector<size_t> sa(s.length());
for (size_t i = 0; i < s.length(); ++i) {
sa[i] = suffixes[i].second;
}
return sa;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
