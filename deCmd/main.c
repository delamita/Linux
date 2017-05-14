//
//  main.c
//  deCmd
//
//  Created by 费克翔 on 2017/5/14.
//  Copyright © 2017年 Crazzy. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char cmd[20];
    
    for(;;){
        
        printf("Delamita-MBP:~Delamita$:");
        
        scanf("%s",cmd);
        
        if(strcmp(cmd, "cmd1")==0){
            system("./cmd1");
        }
        else if (strcmp(cmd, "cmd2")==0){
            system("./cmd2");
        }
        else if (strcmp(cmd, "cmd3")==0){
            system("./cmd3");
        }
        else if (strcmp(cmd, "exit")==0){
            exit(0);
        }
        else{
            printf("Commond not find\n");
        }
        
    }
    
    return 0;
}
