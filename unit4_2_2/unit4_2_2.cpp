// unit4_2_2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Date {
private:
    int year;
    int month;
    int date;
public:
    Data() {
        year = 1900;
        month = 1;
        date = 1;
    }
    Date(int a, int b, int c) {
        year = a;
        month = b;
        date = c;
    }
    ~Date() { cout << "析构了一个日期" << endl; }

    void GetDate() {
        cout << year<<"年"<<month<<"月"<<date<<"日" << endl;
    }
    void SetDate(int a, int b, int c) {
        year = a;
        month = b;
        date = c;
    }
};

enum sex{male=1, famle};

class People {
private:
    int number;
    sex sex_p;
    Date birthday;
    int id;
public:
    People(int a, sex b, Date c, int id)
    {
        number = a;
        sex_p = b;
        birthday = c;
        id = id;
    };
    ~People() { cout << "析构了一个人" << endl; }


    void ShowBirthday() {
        birthday.GetDate();
    }

};


int main()
{
    Date my_birthday(2019, 5, 20);

    People me(123456,male, my_birthday, 2301091);
    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
