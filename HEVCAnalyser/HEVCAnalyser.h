#ifndef HEVCANALYSER_H_INCLUDED
#define HEVCANALYSER_H_INCLUDED

#include <wx/wx.h>
#include <wx/aui/aui.h>
#include <wx/aui/auibook.h>
#include <wx/listctrl.h>
#include <wx/file.h>
#include <wx/rawbmp.h>
#include <wx/thread.h>
#include <wx/imaglist.h>
#include <wx/artprov.h>
#include <wx/fs_mem.h>
#include <wx/htmllbox.h>
#include <wx/imaglist.h>
#include <wx/arrstr.h>
#include "../TLibVideoIO/TVideoIOYuv.h"

void g_tranformYUV2RGB(int w, int h, TComPicYuv*  pcPicYuvOrg, int iYUVBit, wxBitmap& bmp);

extern wxTextCtrl *g_pLogWin ; 

void wxMyLogMessage(wxString);
void wxMyLogError(wxString);
void wxMyLogWarning(wxString);
void SetActiveTarget(wxTextCtrl *pTC);


#endif // HEVCANALYSER_H_INCLUDED
