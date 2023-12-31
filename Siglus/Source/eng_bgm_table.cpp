#include	"pch.h"
#include	"data/tnm_ini.h"
#include	"data/tnm_bgm_table.h"
#include	"engine/eng_bgm_table.h"
#include	"engine/ifc_sound.h"

// ****************************************************************
// ＢＧＭテーブルへのポインタ
// ================================================================
class	C_tnm_bgm_table;
extern	C_tnm_bgm_table*	Gp_bgm_table;

// ****************************************************************
// ＢＧＭテーブルへのポインタ
// ================================================================
int tnm_bgm_table_get_bgm_cnt()
{
	return Gp_bgm_table->get_bgm_cnt();
}

// ****************************************************************
// ＢＧＭテーブルの値を設定（番号から）
// ================================================================
void tnm_bgm_table_set_listened(int bgm_no, bool value)
{
	Gp_bgm_table->set_listened(bgm_no, value);
}

// ****************************************************************
// ＢＧＭテーブルの値を設定（登録名から）
// ================================================================
void tnm_bgm_table_set_listened(CTSTR& bgm_name, bool value)
{
	int bgm_no = tnm_get_bgm_no_by_regist_name(bgm_name);
	if (bgm_no == -1)
		return;

	Gp_bgm_table->set_listened(bgm_no, value);
}

// ****************************************************************
// ＢＧＭテーブルの全ての値を設定
// ================================================================
void tnm_bgm_table_set_all_flag(bool value)
{
	Gp_bgm_table->set_all_flag(value);
}

// ****************************************************************
// ＢＧＭテーブルの値を取得（番号から）
// ================================================================
bool tnm_bgm_table_get_listened(int bgm_no)
{
	return Gp_bgm_table->get_listened(bgm_no);
}

// ****************************************************************
// ＢＧＭテーブルの値を取得（登録名から）
// ================================================================
int tnm_bgm_table_get_listened(CTSTR& bgm_name)
{
	int bgm_no = tnm_get_bgm_no_by_regist_name(bgm_name);
	if (bgm_no == -1)
		return -1;

	return Gp_bgm_table->get_listened(bgm_no);
}

