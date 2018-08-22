int vc_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c = c + 'a' - 'A');
    }
    else
    {
        return c;
    }
}
