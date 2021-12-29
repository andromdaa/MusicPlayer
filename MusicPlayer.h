#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

enum {
	ID_Hello = 1,
	ID_Test = 2
};

class MusicPlayer: public wxApp {
public:
	virtual bool OnInit();
};

class Frame : public wxFrame {
public: 
	Frame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
	wxString appName = "Music Player";
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
	void OnTest(wxCommandEvent& event);

	wxDECLARE_EVENT_TABLE();
};

wxBEGIN_EVENT_TABLE(Frame, wxFrame)
EVT_MENU(ID_Hello, Frame::OnHello)
EVT_MENU(wxID_EXIT, Frame::OnExit)
EVT_MENU(wxID_ABOUT, Frame::OnAbout)
EVT_MENU(ID_Test, Frame::OnTest)
wxEND_EVENT_TABLE()

wxIMPLEMENT_APP(MusicPlayer);
