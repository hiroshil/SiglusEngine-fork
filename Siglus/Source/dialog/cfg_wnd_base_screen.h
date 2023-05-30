#pragma		once

#include	"cfg_wnd_base.h"
#include	"cfg_wnd_func_screen.h"

// ****************************************************************
// �R���t�B�O�E�B���h�E�F�x�[�X�F��ʃ��[�h
// ================================================================
class C_cfg_wnd_base_screen : public C_cfg_wnd_base
{
public:
	void		init();						// ������

	C_cfg_wnd_func_screen			cfg_wnd_func_screen;

private:

	bool		on_init_func();									// ������
	bool		on_close_func();								// ����
	bool		on_command(WPARAM wp, LPARAM lp);				// �R�}���h
	bool		on_notify(WPARAM wp, LPARAM lp);				// �ʒm
	bool		on_mousewheel(WPARAM wp, LPARAM lp);			// �}�E�X�z�C�[��
	bool		on_h_scroll(WPARAM wp, LPARAM lp);				// �g�X�N���[��
	bool		on_v_scroll(WPARAM wp, LPARAM lp);				// �u�X�N���[��
	LRESULT		on_ctlcolorstatic(WPARAM wp, LPARAM lp);		// �X�^�e�B�b�N�R���g���[���̃J���[�ύX

	void		frame_func();									// �t���[��
};