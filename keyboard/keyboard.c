#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Mapping from Swedish/English to Persian characters
wchar_t map_swedish_to_persian(char ch)
{
    switch (ch)
    {
    case 'q':
        return L'ض';
    case 'w':
        return L'ص';
    case 'e':
        return L'ث';
    case 'r':
        return L'ق';
    case 't':
        return L'ف';
    case 'y':
        return L'غ';
    case 'u':
        return L'ع';
    case 'i':
        return L'ه';
    case 'o':
        return L'خ';
    case 'p':
        return L'ح';
    case 'å':
        return L'ج';
    case 'a':
        return L'ش';
    case 's':
        return L'س';
    case 'd':
        return L'ی';
    case 'f':
        return L'ب';
    case 'g':
        return L'ل';
    case 'h':
        return L'ا';
    case 'j':
        return L'ت';
    case 'k':
        return L'ن';
    case 'l':
        return L'م';
    case 'ö':
        return L'ک';
    case 'z':
        return L'ظ';
    case 'x':
        return L'ط';
    case 'c':
        return L'ز';
    case 'v':
        return L'ر';
    case 'b':
        return L'ذ';
    case 'n':
        return L'د';
    case 'm':
        return L'ئ';
    case 'ä':
        return L'گ';
    case ',':
        return L'و';
    case '.':
        return L'؛';
    case '-':
        return L'ء';
    case ' ':
        return L' ';

    // Shifted keys
    case 'Q':
        return L'ْ';
    case 'W':
        return L'ٌ';
    case 'E':
        return L'ٍ';
    case 'R':
        return L'ً';
    case 'T':
        return L'ُ';
    case 'Y':
        return L'ِ';
    case 'U':
        return L'َ';
    case 'I':
        return L'ّ';
    case 'O':
        return L'»،';
    case 'P':
        return L'«';
    case 'Å':
        return L'ـ';
    case 'A':
        return L'ؤ';
    case 'S':
        return L'ئ';
    case 'D':
        return L'إ';
    case 'F':
        return L'أ';
    case 'G':
        return L'آ';
    case 'H':
        return L'ة';
    case 'J':
        return L'ة';
    case 'K':
        return L'ء';
    case 'L':
        return L'ء';
    case 'Ö':
        return L':';
    case 'Z':
        return L'إ';
    case 'X':
        return L'أ';
    case 'C':
        return L'ؤ';
    case 'V':
        return L'ة';
    case 'B':
        return L'ئ';
    case 'N':
        return L'آ';
    case 'M':
        return L'؟';
    case 'Ä':
        return L'"';
    case ':':
        return L'؛';
    case '_':
        return L'ـ';
    case '+':
        return L'×';

    // AltGr keys
    case '1':
        return L'۱';
    case '2':
        return L'۲';
    case '3':
        return L'۳';
    case '4':
        return L'۴';
    case '5':
        return L'۵';
    case '6':
        return L'۶';
    case '7':
        return L'۷';
    case '8':
        return L'۸';
    case '9':
        return L'۹';
    case '0':
        return L'۰';
    case '@':
        return L'€';
    case '€':
        return L'﷼';
    case '<':
        return L'پ';

    // Default case if no mapping exists
    default:
        return ch;
    }
}

int main()
{
    // Set the locale to support wide characters and UTF-8 encoding
    setlocale(LC_ALL, "");

    char input[] = "qwery"; // Sample input
    wchar_t converted[100]; // Buffer for converted wide string
    int i;

    // Convert input and store it in wide string buffer
    for (i = 0; input[i] != '\0'; i++)
    {
        converted[i] = map_swedish_to_persian(input[i]);
    }
    converted[i] = L'\0'; // Null-terminate the wide string

    // Print the converted wide string
    wprintf(L"Converted text: %ls\n", converted);

    return 0;
}
