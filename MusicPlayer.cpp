#include "MusicPlayer.h"
#include "Song.h"

bool MusicPlayer::OnInit()
{
	//creates the main window
	Frame* frame = new Frame("Hello World", wxPoint(50, 50), wxSize(450, 340));
	frame->Show(true);
	return true;
}

//populates the main window
Frame::Frame(const wxString& title, const wxPoint& pos, const wxSize& size) 
	: wxFrame(NULL, wxID_ANY, title, pos, size)
{
	wxMenu* menuFile = new wxMenu;
	menuFile->Append(ID_Hello, "&Hello...\tCtrl-H", 
		"Help string shown in status bar for this menu item");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);

	wxMenu* menuHelp = new wxMenu();
	menuHelp->Append(wxID_ABOUT);

	wxMenu* menuTest = new wxMenu();
	menuTest->Append(ID_Test, "&test", "Test");

	wxMenuBar* menuBar = new wxMenuBar();
	menuBar->Append(menuFile, "&File");
	menuBar->Append(menuHelp, "&Help");
	menuBar->Append(menuTest, "&Test");

	SetMenuBar(menuBar);

	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets");

}

void Frame::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets");
}

void Frame::OnExit(wxCommandEvent& event)
{
	Close(true);
}

void Frame::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("A Music Player created by Cole Hoffman over winter break 2021.\nContact: colehoffman@ou.edu", appName, wxOK | wxICON_INFORMATION);
}

void Frame::OnTest(wxCommandEvent& event) {
	Song* song = new Song("Testing", "Cole", "Image", 100);
	wxMessageBox(song->author + " " + song->songCover + " " + song->songTitle + "\n", "Testing", wxOK | wxICON_INFORMATION);
	delete(song);
}
