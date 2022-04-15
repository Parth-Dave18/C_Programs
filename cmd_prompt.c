#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define CMD_LEN 20
char cmd[CMD_LEN];
char cmds[][CMD_LEN]={"clear","help","ls","cal","notes","notes-o","notes-s","books","books-o","books-s","contact","contact-s","billing","HMS"};
void header();
char *cmd_in();
int cmd_cmp();
void clear()
{
    system("cls");
}
void ls();
void action(int cmd_index);
void help();


int main()
{
    header();
    int act;
    
    
    while (strcmp(cmd_in(),"quit"))
    {
        
        action(cmd_cmp());
        
        
        
    }
    
    return 0;
}
void header()
{
    // system("cls");
    printf("\n*******************************************************WELCOME TO THE PARTH DAVE'S TERMINAL**********************************************************");
    printf("\n\n\nHello and warm welcome for joining us.");
    printf("\n\"help\" command will help you to know about other commands.");
}
char *cmd_in()
{

    printf("\n\n---> ");

    int i, flag = 1;
    for (i = 0; (i < CMD_LEN - 1) && cmd[i - 1] != 10; i++)
    {
        scanf("%c", &cmd[i]);
        if (cmd[i] == ' ')
        {
            i--;
        }
    }
    if (i == CMD_LEN)
    {
        printf("\nwrong command!!");
    }
    else
    {
        cmd[i - 1] = '\0';
    }

    return cmd;


}
int cmd_cmp()
{
    int i;
    for (i = 0; i < sizeof(cmds)/sizeof(cmds[0]); i++)
    {
        if (strcmp(cmd,cmds[i])==0)
        {
            return i;
        }
        
        
    }
    return -1;
    
}
void ls()
{
    for (int  i = 0; i < sizeof(cmds)/sizeof(cmds[0]); i++)
    {
        printf("%d. %s\n",i+1,cmds[i]);
    }
    
}

void action(int cmd_index)
{
    switch (cmd_index)
    {
    case 0:
        clear();
        break;

    case 1:
        // help();
        break;
    
    case 2:
        ls();
        break;
    
    default:
        printf("Invalid command !!");
    }
}