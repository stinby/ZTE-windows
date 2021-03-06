// Config.h: interface for the CConfig class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CONFIG_H__2EE917D0_3B18_4580_BC7D_C675F4866D9A__INCLUDED_)
#define AFX_CONFIG_H__2EE917D0_3B18_4580_BC7D_C675F4866D9A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxtempl.h>
#include "Define.h"

class CConfig  
{
public:
	CConfig();
	virtual ~CConfig();
	void	SaveConfig();
	void	LoadConfig();
	void	GetFullPathToFile(char  *pszFullPath,char * pszFilename);

public:
	bool	m_bAutorun;		//自动运行
	bool	m_bAutologon;		//自动登录
	bool	m_bRememberPWD;	//记忆密码
	bool	m_bShowBubble;		//显示气泡
	bool	m_bHttpHeart;	//自动网页在线
	bool	m_bAutoWeblogon;		//自动天翼登录

	int		m_iTimeout;		//超时时间

	bool m_bWebAuth;//是否进行网页认证
	CString m_csWebAuthUrl;//网页认证地址

	bool m_bWebLogout;//是否进行网页注销
	CString m_csWebLogoutUrl;//网页注销地址

	bool m_bEnableWebAccount;//是否启用网页认证帐号信息，否则与中兴认证帐号一样
	CString m_csWebUsername;//网页认证用户名
	CString m_csWebPassword;//网页认证密码

	bool m_bTimingReauth;//定时认证
	CString m_csReauthTime;//定时认证时间

	bool m_bAutoUpdate;
	bool m_bAutoFilter;

	bool m_bDHCP;			//是否启用DHCP

	CString m_csHeartUrl;
	CString m_csHeartCookies;
	int m_iHeartInterval;


	CMapStringToString   m_UserInfo;	//存放所有的账号密码信息

	CString m_csLastUser;	//上次所用的用户名

	CString	m_csNetCard;	//上次所选择的网卡名字

	bool m_bDebug; //是否输出调试信息

	bool m_Reauth;		//重试认证
	bool m_iReauthlog;	//重试一次标志

/*==================以下配置参数尚未被启用================

=========================================================*/
};
#endif // !defined(AFX_CONFIG_H__2EE917D0_3B18_4580_BC7D_C675F4866D9A__INCLUDED_)
