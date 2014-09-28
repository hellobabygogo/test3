/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  test.c                                                               */
/*  PRINCIPAL AUTHOR      :  YangXuan                                                             */
/*  SUBSYSTEM NAME        :  test                                                                 */
/*  MODULE NAME           :  test                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  This is a test program                                               */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by YangXuan, 2014/09/22
 *
 */
 
#define MAX_MENU_LEN 100
#define MAX_CMD_LEN 50
#define debug printf

#include<stdio.h>
#include<stdlib.h>
#include"menu.h"


/* test begins*/
int Help();
int Quit();
int Yes();

int results[6] = {1,1,1,1,1,1};
char * info[6] = 
{
    "test report",
    "TC1 FindCmd",
    "TC2 ShowAllCmd",
    "TC3 InitMenuData",
    "TC4 AddMenuNode",
    "TC5 DeleteMenuNode"
};
tMenuNode * head = NULL;

main()
{
    int i;
    char cmd[MAX_CMD_LEN];
    tMenuNode * pNode; 
    tDataNode * p;
    int flag;
    debug("test start, please input a cmd!\n");
    scanf("%s",cmd);
    /* test FindCmd */
    p = FindCmd(cmd);
    if(p == NULL)
    {
	debug("TC1 fail\n");
        results[1] = 1;
    }
    else
    {
	debug("TC1 success\n");
        results[1] = 0;
    }
		
    /* test ShowAllCmd */
    flag = ShowAllCmd();
    if(flag == SUCCESS)
    {
	debug("TC2 success\n");
        results[2] = 0;
    }
    else
    {
	debug("TC2 fail\n");
        results[2] = 1;
    }
    
    /* test InitMenuData */
    flag = InitMenuData(pNode);
    if(flag == SUCCESS)
    {
        debug("TC3 success\n");
        results[3] = 0;
    }
    else
    {
	debug("TC3 fail\n");
        results[3] = 1;
    }
	
    /* test AddMenuNode */
    flag = AddMenuNode(pNode);
    if(flag == SUCCESS)
    {
	debug("TC4 success\n");
        results[4] = 0;
    }
    else
    {
	debug("TC4 fail\n");
        results[4] = 1;
    }
	
    /* test DaleteMenuNode */
    flag = DeleteMenuNode(cmd);
    if(flag == SUCCESS)
    {
	debug("TC5 success\n");
        results[5] = 0;
    }
    else
    {
	debug("TC5 fail\n");
        results[5] = 1;
    }
    
    /* test report */
    printf("success test report\n");
    for(i=1;i<=5;i++)
    {
        if(results[i] == 0)
        {
            printf("Testcase Number%d T - %s\n",i,info[i]);
        }
    }

    printf("failure test report\n");
    for(i=1;i<=5;i++)
    {
        if(results[i] == 1)
        {
            printf("Testcase Number%d F - %s\n",i,info[i]);
        }
    }
}

int Help()
{
    ShowAllCmd(head);
    return 0; 
}

int Quit()
{
    exit(0);
}

int Yes()
{
 	printf("Yes, You are right");
}
