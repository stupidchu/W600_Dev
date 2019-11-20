/***************************************************************************** 
* 
* File Name : main.c
* 
* Description: main 
* 
* Copyright (c) 2014 Winner Micro Electronic Design Co., Ltd. 
* All rights reserved. 
* 
* Author : dave
* 
* Date : 2014-6-14
*****************************************************************************/ 
#include "wm_include.h"

#define SERVER_PORT 8000
//#define SERVER_IP "172.16.50.11"
#define SERVER_IP "172.16.50.36"
//#define WIFI_SSID "goodix-debug"
//#define WIFI_PWD  "goodix123"

extern int Socket_Client_Demo(int port, char *ip);
extern int demo_connect_net(char *ssid, char *pwd);
extern int sck_c_send_data_demo(int len, int uart_trans);

void UserMain(void)
{
    printf("\n user task\n");

#if DEMO_CONSOLE
    CreateDemoTask();
#endif
//    if(WM_SUCCESS == demo_connect_net(WIFI_SSID, WIFI_PWD))
//    {
        printf("\n connect net success\n");
        Socket_Client_Demo(SERVER_PORT, SERVER_IP);
//        sck_c_send_data_demo(0, 1);
//    }
//    else
//    {
//        printf("\n connect net failed\n");
//    }

//用户自己的task
}

