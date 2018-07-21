#pragma once

#include "ImeWnd.h"
#include "SkinMananger.h"

interface ICmdListener;

namespace SOUI
{
	class CStatusWnd :
		public CImeWnd
	{
	public:
		CStatusWnd(ICmdListener *pListener);
		~CStatusWnd(void);

	protected:
		int OnCreate(LPCREATESTRUCT lpCreateStruct);

		void OnRButtonUp(UINT nFlags,CPoint pt);
		
		void OnInitMenuPopup(HMENU menuPopup, UINT nIndex, BOOL bSysMenu);

		BEGIN_MSG_MAP_EX(CStatusWnd)
			MSG_WM_INITMENUPOPUP(OnInitMenuPopup)
			MSG_WM_CREATE(OnCreate)
			MSG_WM_RBUTTONUP(OnRButtonUp)
			CHAIN_MSG_MAP(CImeWnd)
		END_MSG_MAP()

	protected:

		void OnDragStatus(EventArgs *e);
		void OnSetSkin(EventArgs *e);
		void OnCompInfo(EventArgs *e);

		void OnBtnExtend();
		void OnBtnShrink();
		void OnBtnMakeWord();
		void OnSwitchCharMode(EventArgs *e);
		void OnSwitchRecord(EventArgs *e);
		void OnSwitchSound(EventArgs *e);
		EVENT_MAP_BEGIN()
			EVENT_HANDLER(EventDragMove::EventID, OnDragStatus)
			EVENT_HANDLER(EventSetSkin::EventID, OnSetSkin)
			EVENT_HANDLER(EventSvrNotify::EventID, OnCompInfo)
			EVENT_ID_COMMAND(R.id.btn_status_shrink, OnBtnShrink)
			EVENT_ID_COMMAND(R.id.btn_status_extend, OnBtnExtend)
			EVENT_ID_COMMAND(R.id.btn_makeword, OnBtnMakeWord)
			EVENT_ID_HANDLER(R.id.btn_charmode, EventCmd::EventID, OnSwitchCharMode)
			EVENT_ID_HANDLER(R.id.btn_record, EventCmd::EventID, OnSwitchRecord)
			EVENT_ID_HANDLER(R.id.btn_sound, EventCmd::EventID, OnSwitchSound)
		EVENT_MAP_END()

		void UpdateCompInfo();
	protected:
		SStatusBackground * m_pBackGround;
		CSkinMananger       m_skinManager;
		ICmdListener     *  m_pCmdListener;
	};

}
