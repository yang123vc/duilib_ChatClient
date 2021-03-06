// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//


#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#pragma once

#define WIN32_LEAN_AND_MEAN	
#define _CRT_SECURE_NO_DEPRECATE
#define _AFXDLL
//#include "targetver.h"

#include <afxwin.h>
#include <WinSock2.h>
#include <Windows.h>
#include <WS2tcpip.h>

#include "DuiLib\UIlib.h"

#ifdef _DEBUG
#       pragma comment(lib, "lib/DuiLib_ud.lib")
#else
#       pragma comment(lib, "lib/DuiLib_u.lib")
#endif
using namespace DuiLib;

#include "rapidjson\document.h"
#include "rapidjson\writer.h"
#include "rapidjson\reader.h"
using namespace rapidjson;

// TODO: 在此处引用程序需要的其他头文件
#include "Protocol.h"

//#define WM_USER_RECONNECT				(WM_USER+1)     // 重新连接服务器
//#define WM_USER_SIGNIN_SUCESS			(WM_USER+3)     // 登录成功
//#define WM_USER_SIGNIN_FAIL				(WM_USER+4)		// 登录失败
//#define WM_USER_SIGNIN_ALREADY			(WM_USER+2)     // 别的地方登录
//#define WM_USER_SIGNUP_SUCESS			(WM_USER+5)     // 注册成功
//#define WM_USER_SIGNUP_FAIL				(WM_USER+6)     // 注册成功
//#define WM_USER_GET_FRIENDS				(WM_USER+7)     // 获取好友
//
//#define WM_USER_SEARCH_FRIEND			(WM_USER+8)     // 查找好友结果
//#define WM_USER_FRIEND_REQUEST			(WM_USER+9)     // 好友请求
//#define WM_USER_AGREE_FRIENDS_REQUEST	(WM_USER+10)    // 同意好友请求
//#define WM_USER_REFUSE_FRIENDS_REQUEST	(WM_USER+11)    // 拒绝好友请求
//#define WM_USER_SINGLE_CHAT_MESSAGE		(WM_USER+11)    // 聊天信息


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
