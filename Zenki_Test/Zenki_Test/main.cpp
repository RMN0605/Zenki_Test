/*
��P��(���2�_)
�ȉ��̌v�Z��2�i���œ�����B
00101100 + 01010101 = 10000001
10110000 + 00001111 = 10111111

��Q��(���2�_)
��P��̓�����10�i���œ�����
129
192

��R��(���2�_)
char�Aint�Afloat�Adouble�̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
char =  �P�o�C�g
int = �S�o�C�g
float = �S�o�C�g
double =  �W�o�C�g

��S��(���2�_)
char* �Aint * �Afloat * �Adouble * �̃o�C�g�T�C�Y�͂��ꂼ�ꂢ����������B
char = 4�o�C�g
int = 4�o�C�g
float = 4�o�C�g
double = 4�o�C�g

��T��(20�_)
�ȉ��̃v���O���������s�����ꍇ�A
�@�`�B�̂ǂ̕��������s����邩������B

int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        �@
    }
    else if (num == 2)
    {
        �A
    }
    else
    {
        �B
    }
}

//���� �Q

��U��(25�_)
���l��2���͂��A
1�Ԗڂɓ��͂��ꂽ�l����Ȃ瑫���Z�A
1�Ԗڂɓ��͂��ꂽ�l�������Ȃ�����Z���s���v���O�������쐬����B

#include <iostream>

//����)
int main()
{
        //1  1�Ԗڂɓ��͂��ꂽ�l
        //5  2�Ԗڂɓ��͂��ꂽ�l
        //6  1�Ԗڂ���Ȃ̂ő����Z

        //4  1�Ԗڂɓ��͂��ꂽ�l
        //3  2�Ԗڂɓ��͂��ꂽ�l
        //1  1�Ԗڂ������Ȃ̂ň����Z

    int Fn, Sn, Ans;
    Ans = 0;
    //���ڂ̓���
    std::cin >> Fn;
    //���ڂ̓���
    std::cin >> Sn;

    if (Fn % 2 == 0)
    {
        //�����Ȃ瑫���Z
        Ans = Fn + Sn;

        std::cout << Ans;
    }
    else 
    {
        //��Ȃ瑫���Z
        Ans = Fn - Sn;

        std::cout << Ans;
    }
}


��V��(25�_)
��U��̃v���O���������[�v�ōs���悤�ɂ��A
end�Ɠ��͂��ꂽ�ꍇ�I������悤�ɂ��Ă��������B
end�̓��͂�1�Ԗڂ̒l�̏ꏊ�ł��A2�Ԗڂ̒l�̏ꏊ�ł��A
�ʓrend�̓��͂��󂯕t����悤�ł��ǂ�ł������ł��B
�ǂ����ꂩ����end�Ɠ��͂��ďI�����Ă���ΐ����Ƃ��܂��B

#include <iostream>

int main()
{

    int Fn, Sn, Ans;
    char Ward[256];
    char end[4];
    Ans = 0;

    bool a = false;
    while (1)
    {
        printf("1��ڂ̓���\n");
        //���ڂ̓���
        std::cin >> Fn;
        printf("2��ڂ̓���\n");
        //���ڂ̓���
        std::cin >> Sn;

        if (Fn % 2 == 0)
        {
            //�����Ȃ瑫���Z
            Ans = Fn + Sn;

            std::cout << Ans;
        }
        else
        {
            //��Ȃ瑫���Z
            Ans = Fn - Sn;

            std::cout << Ans;
        }


        printf("end����͂����ꍇ�ɏI�������\n");

        scanf_s("%s", end, 4);

        if (strcmp(end, "end") == 0)
        {
            break;
        }
    }
    printf("���[���\n");
}


��W��(10�_)
�ȉ��̃v���O�������G���[���������A�R���p�C���G���[���Ȃ���Ԃɂ��A
���s�ł���悤�ɂ��Ă��������B
�𓚂��G���[�����R�����g�A�E�g���Ď��s�ł���悤�ɂ���̂�NG�ł��B
(�r���m�F�̂��߂ɃR�����g�A�E�g�����镪��OK�ł��B)
�ԈႦ�Ă������4�����ł��B

#include <stdio.h>
#include <iostream>
#include <string.h>

class Point
{
public:
    Point() { Clear(); }

    void Clear()
    {
        x = 0;
        y = 0;
        z = 0;
    }
private:
    int x, y, z;
}

{
    Point point;
    Point nextPoint;

    nextPoint.x = 100;
    nextPoint.y = 30;

    while (1)
    {
        if (point.x < nextPoint.x)
        {
            point.x++;
        }
        else if (point.x > nextPoint.x)
        {
            point.x--;
        }

        if (point.y < nextPoint.y)
        {
            point.y++;
        }
        else if (point.y > nextPoint.y)
        {
            point.y--;
        }
        printf("pointX = %d\n", point.x);
        printf("pointY = %d\n", point.y);

        if (point.x == nextPoint.x &&
            point.y == nextPoint.y)
        {
            break;
        }
    }
}
*/


