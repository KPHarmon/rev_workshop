#include <stdio.h>

int strings(void);
int loops(void);

int main(){
    
    strings();

    int output = loops();
    printf("temp = %d\n", output);

}    

int strings(){
    char name[20];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s.\n\n");
    return 0;
}

int loops(){
    int temp = 0;
    for(int i=0; i < 10; ++i){
        temp += 2;
        if(temp == 12){
            return temp;
        }
    }
    return 0;
}
