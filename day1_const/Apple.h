//
// Created by liwei on 2021/6/24.
//

#ifndef DAY1_CONST_APPLE_H
#define DAY1_CONST_APPLE_H


class Apple
{
private:
    int people[100];

protected:
    int my[100];
public:
    Apple(int i);
    const int apple_num;
    void take(int num) const;
    int add(int num);
    int add(int num) const;
    int getCount() const;
};


#endif //DAY1_CONST_APPLE_H
