#include <cstdio>

//求最大公约数
int gcd(int a, int b) {
    return b != 0 ? gcd(b, a % b) : a;
}

//在gcd的基础上求最小公倍数
int lcm(int a, int b) {
    //注意写法，最大公约数为d，则最小公倍数应为a*b/d
    //但a*b在实际计算时有可能溢出，所以更恰当的写法为a/d*b
    return a / gcd(a, b) * b;
}

int main() {
    int m, n;
    while (scanf("%d%d", &m, &n) != EOF) {
        printf("%d\n", lcm(m, n));
    }
    return 0;
}
