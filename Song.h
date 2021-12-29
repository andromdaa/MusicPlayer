#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif


class Song {
public:
	wxString songTitle;
	wxString songCover;
	wxString author;
	wxLongLong time;
	Song(const wxString& title, const wxString& songCover, const wxString& author,
		const wxLongLong& time);
	bool Play();
};

