#ifndef MYHELPER_H
#define MYHELPER_H
#include <windef.h>
#include <QObject>
class myHelper:public QObject
{
public:
    // Hex 转AscII码
    static int Hex2Ascii(const char* hex, char* ascii)
    {
        int len = strlen(hex), tlen, i, cnt;

        for (i = 0, cnt = 0, tlen = 0; i<len; i++)
        {
            char c = toupper(hex[i]);

            if ((c>='0'&& c<='9') || (c>='A'&& c<='F'))
            {
                BYTE t = (c >= 'A') ? c - 'A' + 10 : c - '0';

                if (cnt)
                    ascii[tlen++] += t, cnt = 0;
                else
                    ascii[tlen] = t << 4, cnt = 1;
            }
        }

        return tlen;
    }
    // AscII码 转 Hex
    static int Ascii2Hex(const char* ascii, char* hex)
    {
        int i, len = strlen(ascii);
        char chHex[] = "0123456789ABCDEF";

        for (i = 0; i<len; i++)
        {
            hex[i*3]	= chHex[((BYTE)ascii[i]) >> 4];
            hex[i*3 +1]	= chHex[((BYTE)ascii[i]) & 0xf];
            hex[i*3 +2]	= ' ';
        }

        hex[len * 3] = '\0';

        return len * 3;
    }
};
#endif // MYHELPER_H
