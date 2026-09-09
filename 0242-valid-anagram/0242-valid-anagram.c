bool isAnagram(char* s, char* t)
{
    int str[26] = {0};

    if (strlen(s) != strlen(t))
        return false;

    for (int i = 0; s[i] != '\0'; i++)
    {
        str[s[i] - 'a']++;
        str[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (str[i] != 0)
            return false;
    }

    return true;
}