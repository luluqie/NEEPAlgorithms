#include <stdio.h>

int main() {
    char a[11], b[11];
    //利用字符串将两个数字读入，作为字符串保存在内存中
    while (scanf("%s%s", a, b) != EOF) {
        int ans = 0; //累加变量
        for (int i = 0; a[i] != 0; i++) //遍历a中每一个字符直到a字符串结尾
            for (int j = 0; b[j] != 0; j++) //遍历b中每一个字符直到b字符串结尾
                ans += (a[i] - '0') * (b[j] - '0'); //计算a,b中每一个字符所代表的数字两两乘积的和
        printf("%d\n", ans);
    }
    return 0;
}
