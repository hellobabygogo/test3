/**************************************************************************************************/
/* Copyright (C) mc2lab.com, SSE@USTC, 2014-2015                                                  */
/*                                                                                                */
/*  FILE NAME             :  menu.c                                                               */
/*  PRINCIPAL AUTHOR      :  YangXuan                                                             */
/*  SUBSYSTEM NAME        :  menu                                                                 */
/*  MODULE NAME           :  menu                                                                 */
/*  LANGUAGE              :  C                                                                    */
/*  TARGET ENVIRONMENT    :  ANY                                                                  */
/*  DATE OF FIRST RELEASE :  2014/09/22                                                           */
/*  DESCRIPTION           :  Interface of the menu                                                */
/**************************************************************************************************/

/*
 * Revision log:
 *
 * Created by YangXuan, 2014/09/22
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include "menu.h"


/* data struct and its operations */

tLinkTable * front = NULL;

/* find a cmd in the linklist and return the datanode pointer */
tDataNode* FindCmd(char * cmd)
{
     return NULL;
}

/* show all cmd in listlist */
int ShowAllCmd()
{
    if ( front == NULL)
    {
    	return FAILURE;
    }
    return SUCCESS;
}

/* Inite menu date */
int InitMenuData(tMenuNode * data)
{
    if( front== NULL)
	{
		return SUCCESS;
	} 
	return FAILURE;
}

/* Add menu Node */ 
int AddMenuNode(tMenuNode * menuNode)
{
    if(menuNode == NULL || FindCmd(menuNode->cmd) == NULL)
    {
        return FAILURE;
    }
    return SUCCESS;
}

/* Add menu Node */ 
int DeleteMenuNode(char * cmd)
{
     if(cmd == NULL || FindCmd(cmd) == NULL)
     {
     	return FAILURE;
     }
     return SUCCESS;
}

