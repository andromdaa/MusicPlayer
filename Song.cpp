#include "Song.h"

Song::Song(const wxString& title, const wxString& songCover, 
	const wxString& author, const wxLongLong& time) {
	this->songTitle = title;
	this->songCover = songCover;
	this->author = author;
	this->time = time;
}


