#include<iostream>
#include<tuple>

using namespace std;

int main() {

    tuple <char, int, int, char, float> t;
    t = make_tuple('a', 75, 5, 'z', 5.5);

    int i;

    cout << "The values of tuple are : ";
    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t)
        << " " << get<3>(t) << " " << get<4>(t) << endl;

    return 0;
}