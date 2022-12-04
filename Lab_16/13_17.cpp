// 13.17
#include <iostream>
using namespace std;

string change_sentence(string s)
{
    for (int i = 2; i < s.length(); i++)
    {
        if (((s[i-3] == ' ') || (i == 2)) && ((s[i-2] == 'a') || (s[i-2] == 'A')) && (s[i-1] == ' '))
        {
            s[i] = s[i] + 32;
        }
        if (((s[i-4] == ' ') || (i == 3)) && ((s[i-3] == 'a') || (s[i-3] == 'A')) && (s[i-2] == 'n') && (s[i-1] == ' '))
        {
            s[i] = s[i] + 32;
        }
        if (((s[i-5] == ' ') || (i == 4)) && ((s[i-4] == 't') || (s[i-4] == 'T')) && (s[i-3] == 'h') && (s[i-2] == 'e') && (s[i-1] == ' '))
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

string new_sentence(string sentence)
{
    string s = sentence;
    for (int i = 2; i < s.length(); i++)
    {
        if (((s[i-3] == ' ') || (i == 2)) && ((s[i-2] == 'a') || (s[i-2] == 'A')) && (s[i-1] == ' '))
        {
            s[i] = s[i] + 32;
        }
        if (((s[i-4] == ' ') || (i == 3)) && ((s[i-3] == 'a') || (s[i-3] == 'A')) && (s[i-2] == 'n') && (s[i-1] == ' '))
        {
            s[i] = s[i] + 32;
        }
        if (((s[i-5] == ' ') || (i == 4)) && ((s[i-4] == 't') || (s[i-4] == 'T')) && (s[i-3] == 'h') && (s[i-2] == 'e') && (s[i-1] == ' '))
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}

int main()
{
    string sentence = "The Raccoon, sometimes called the Common raccoon to distinguish it from other species, is a Mammal native to North America.";
    cout << sentence << "\n";
    cout << new_sentence(sentence) << "\n";
    cout << change_sentence(sentence) << "\n";
}