/*
第１問(一問2点)
以下の計算に2進数で答えよ。
00101100 + 01010101 = 10000001
10110000 + 00001111 = 10111111

第２問(一問2点)
第１問の答えを10進数で答えよ
129
192

第３問(一問2点)
char、int、float、doubleのバイトサイズはそれぞれいくつか答えよ。
char =  １バイト
int = ４バイト
float = ４バイト
double =  ８バイト

第４問(一問2点)
char* 、int * 、float * 、double * のバイトサイズはそれぞれいくつか答えよ。
char = 4バイト
int = 4バイト
float = 4バイト
double = 4バイト

第５問(20点)
以下のプログラムを実行した場合、
①～③のどの部分が実行されるか答えよ。

int main()
{
    int num = 5;

    num = num % 3;

    if (num == 0)
    {
        ①
    }
    else if (num == 2)
    {
        ②
    }
    else
    {
        ③
    }
}

//答え ２

第６問(25点)
数値を2つ入力し、
1番目に入力された値が奇数なら足し算、
1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。

#include <iostream>

//結果)
int main()
{
        //1  1番目に入力された値
        //5  2番目に入力された値
        //6  1番目が奇数なので足し算

        //4  1番目に入力された値
        //3  2番目に入力された値
        //1  1番目が偶数なので引き算

    int Fn, Sn, Ans;
    Ans = 0;
    //一回目の入力
    std::cin >> Fn;
    //二回目の入力
    std::cin >> Sn;

    if (Fn % 2 == 0)
    {
        //偶数なら足し算
        Ans = Fn + Sn;

        std::cout << Ans;
    }
    else 
    {
        //奇数なら足し算
        Ans = Fn - Sn;

        std::cout << Ans;
    }
}


第７問(25点)
第６問のプログラムをループで行うようにし、
endと入力された場合終了するようにしてください。
endの入力は1番目の値の場所でも、2番目の値の場所でも、
別途endの入力を受け付けるようでもどれでもいいです。
どこか一か所でendと入力して終了していれば正解とします。

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
        printf("1回目の入力\n");
        //一回目の入力
        std::cin >> Fn;
        printf("2回目の入力\n");
        //二回目の入力
        std::cin >> Sn;

        if (Fn % 2 == 0)
        {
            //偶数なら足し算
            Ans = Fn + Sn;

            std::cout << Ans;
        }
        else
        {
            //奇数なら足し算
            Ans = Fn - Sn;

            std::cout << Ans;
        }


        printf("endを入力した場合に終了するよ\n");

        scanf_s("%s", end, 4);

        if (strcmp(end, "end") == 0)
        {
            break;
        }
    }
    printf("おーわり\n");
}


第８問(10点)
以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
実行できるようにしてください。
解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
(途中確認のためにコメントアウトをする分はOKです。)
間違えている個所は4か所です。

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


