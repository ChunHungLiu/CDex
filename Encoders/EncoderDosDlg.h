/*
** CDex - Open Source Digital Audio CD Extractor
**
** Copyright (C) 2006 - 2007 Georgy Berdyshev
** Copyright (C) 1999 - 2002 Albert L. Faber
**
** http://cdexos.sourceforge.net/
** http://sourceforge.net/projects/cdexos 
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef ENCCODERDOSDLG_H_INCLUDED
#define ENCCODERDOSDLG_H_INCLUDED

#include "EncoderDlg.h"
#include "DDXGetFile.h"


class CEncoderDosDlg : public CEncoderDlg
{
public:
	// CONSTRUCTOR
	CEncoderDosDlg();

	// MUTATORS
	virtual void SetControls(CEncoder* m_pEncoder);
	virtual void GetControls(CEncoder* m_pEncoder);

	UINT GetIDD();

// Dialog Data
	//{{AFX_DATA(CEncoderDosDlg)
	enum { IDD = IDD_ENCODERDOSDLG };
	CString				m_strExtEncOpts;
	CGetFileControl		m_cExtEncPath;
	BOOL				m_bEncDuringRead;
	BOOL				m_bHideDosBox;
	CString				m_strExtention;
	BOOL				m_bSendWavHeader;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEncoderDosDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CEncoderDosDlg)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#endif // ENCCODERDOSDLG_H_INCLUDED

