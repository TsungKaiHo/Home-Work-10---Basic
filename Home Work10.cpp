//
//  main.cpp
//  Home Work 10
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    char jk;
    
    printf("請輸入英文字母:");
    scanf("%c",&jk);
    
    if((jk>='A')&&(jk<='Z')){
        jk+=32;
        printf("轉換為%c\n",jk);
    }
    else if((jk>='a')&&(jk<='z')){
        jk-=32;
        printf("轉換為%c\n",jk);
    }
    else{
        printf("你輸入的不是英文字母\n");
    }
    return 0;
}
