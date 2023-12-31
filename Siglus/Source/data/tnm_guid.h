#pragma		once

// ****************************************************************
// ＧＵＩＤマネージャ
// ================================================================
//		あらゆるオブジェクトに個別ＩＤを振ります。
// ================================================================


// ****************************************************************
// ＧＵＩＤクラスの前方宣言
// ================================================================
class	C_tnm_guid;

// ****************************************************************
// ＧＵＩＤマネージャ
// ================================================================
class C_tnm_guid_manager
{
	friend	class	C_tnm_guid;

public:

	C_tnm_guid_manager();

private:

	void	create_guid(C_tnm_guid* guid);			// GUID を作る
	void	create_guid(C_tnm_guid* guid, int id);	// GUID を作る（ID指定）
	void	release_guid(C_tnm_guid* guid);

	ARRAY<int>	m_enable_guid_list;		// 使用できる GUID リスト
	ARRAY<int>	m_ref_count_list;		// 参照カウント
	int			m_guid_cnt;				// 作成した GUID の個数
};

// ****************************************************************
// ＧＵＩＤ
// ================================================================
class C_tnm_guid
{
	friend	class	C_tnm_guid_manager;

public:
	C_tnm_guid();
	~C_tnm_guid();
	C_tnm_guid(const C_tnm_guid& rhs);
	C_tnm_guid& operator = (const C_tnm_guid& rhs);

	void	init();								// 初期化する
	void	create_guid();						// GUID を作成する
	void	release_guid();						// GUID を解放する
	int		get_guid()	{	return m_guid;	}	// GUID を取得する

private:

	int							m_guid;
	static	C_tnm_guid_manager	m_guid_manager;
};




