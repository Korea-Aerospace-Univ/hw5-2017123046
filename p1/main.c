#include <stdio.h>

int main(void){
    bool check = 0; // none을 출력할지 말지 결정하는 변수입니다.
    int N; // scanf를 사용하기 때문에 초기화 하지 않습니다.
    scanf("%d",&N);
    
    for (int a=1;a<=N/900;a++) // 900원을 나타내는 for문입니다. 
    {
        for (int b=2;b<=N/750;b+=2) // 750원을 나타내는 for문입니다.
        {
            for (int c=1; c<=N/200;c++) // 200원을 나타내는 for문입니다.
            {
                if (a*900+b*750+c*200==N &&  (c<b||c<a)) // 문제 조건을 정확하게 충족할때만 check를 1로 바꾸고 각 금액 개수를 출력합니다.
                {
                    check = 1;
                    printf("%d %d %d",a,b,c);
                    printf("\n");
                }
            }
        }
    }
    if (!check) printf("none"); // for문 안에서 한번이라도 조건이 충족되지 않았다면 none을 출력해줍니다.
}
