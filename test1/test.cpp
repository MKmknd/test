#include<iostream>
#include<random>

#define N 10



int main(void){

        std::random_device rnd;
        int a[N];

        for(int i=0; i < N; i++){
                a[i] = rnd() % 10;
        }

        std::sort(a, a+N);

        for(int i=0; i<N; i++){
                std::cout << a[i] << "\n";
        }

        return 0;
}
