#include<cctype>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;
using namespace std::placeholders;

/*
 	*our convenience function
*/
bool mynotspace(char c)
{
    return !std::isspace(c);
}



/*
 	*left trim string
*/	

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), std::bind(mynotspace, _1));
    );

    return s;
}

/*
        *right trim string
*/
string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), std::bind(mynotspace, _1)).base(),
        s.end()
    );

    return s;
}
