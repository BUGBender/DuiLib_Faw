﻿#ifndef __UIFADEBUTTON_H__
#define __UIFADEBUTTON_H__

#include "UIAnimation.h"
#pragma once

namespace DuiLib {

	class UILIB_API CFadeButtonUI: public CButtonUI, public CUIAnimation {
		DECLARE_DUICONTROL (CFadeButtonUI)
	public:
		CFadeButtonUI ();
		virtual ~CFadeButtonUI ();

		faw::string_t GetClass () const;
		LPVOID GetInterface (faw::string_t pstrName);
		void SetNormalImage (faw::string_t pStrImage);

		void DoEvent (TEventUI& event);
		void OnTimer (int nTimerID);
		void PaintStatusImage (HDC hDC);

		virtual void OnAnimationStart (INT nAnimationID, BOOL bFirstLoop) {}
		virtual void OnAnimationStep (INT nTotalFrame, INT nCurFrame, INT nAnimationID);
		virtual void OnAnimationStop (INT nAnimationID) {}

	protected:
		faw::string_t m_sOldImage;
		faw::string_t m_sNewImage;
		faw::string_t m_sLastImage;
		BYTE       m_bFadeAlpha;
		BOOL       m_bMouseHove		= FALSE;
		BOOL       m_bMouseLeave	= FALSE;
		enum {
			FADE_IN_ID = 8,
			FADE_OUT_ID = 9,
			FADE_ELLAPSE = 10,
			FADE_FRAME_COUNT = 30,
		};
	};

} // namespace DuiLib

#endif // __UIFADEBUTTON_H__