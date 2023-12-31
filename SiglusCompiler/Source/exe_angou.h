#pragma		once

#include	"tnm_exe_angou.h"

// ****************************************************************
// ＥＸＥセット暗号
// ================================================================

#define		TNM_EXE_ANGOU_FIND_MAX_CNT			10

#define		TNM_EXE_ANGOU_STR_MIN_LEN			8
#define		TNM_EXE_ANGOU_STR_MAX_LEN			64

class C_tnms_exe_angou
{

public:
	static		bool		check(CTSTR& exe_path);									// ＥＸＥが暗号化されているか判定する
	static		bool		angou(HWND h_wnd, CTSTR& exe_path, CTSTR& angou_str);	// ＥＸＥを暗号化する

	static		void		make_angou_element(BYTE *angou_str, int angou_str_size, BYTE *ret_angou_element);	// 暗号要素作成（バイト文字列から作成）
	static		void		make_angou_element(CTSTR& angou_str, BYTE *ret_angou_element);						// 暗号要素作成（TSTR型文字列から作成）

private:
	static		int			find_angou_insert_address_func(BYTE *exe_p, int exe_size, int *ret_find_code_count, BYTE *ap[TNM_EXE_ANGOU_FIND_CODE_CNT][TNM_EXE_ANGOU_FIND_MAX_CNT]);		// 暗号の挿入位置を探すＦＵＮＣ
	static		int			find_angou_insert_address_funcfunc(BYTE *exe_p, int exe_size, int find_code_count, BYTE *find_code, BYTE **ap);			// 暗号の挿入位置を探すＦＵＮＣＦＵＮＣ

	static		int			angou_func(HWND h_wnd, CTSTR& exe_path, CTSTR& angou_str);							// ＥＸＥを暗号化するＦＵＮＣ
	static		void		err_code_msgbox(HWND h_wnd, CTSTR& exe_path, CTSTR& angou_str, int err_code);		// エラーコードメッセージボックス
};
