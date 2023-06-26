#pragma once
#include <wx/wx.h>
#include<iostream>
#include <fstream>
#include <string.h>

class Node;
class ContactBookFrame : public wxFrame
{
public:
	ContactBookFrame(const wxString& title);
	void createControls();
	void BindEventHandlers();

	void CreateNode();
	void BubbleSort();


	void OnDeleteButtonClick(wxCommandEvent& event);
	void OnAddButtonClick(wxCommandEvent& event);
	void OnDeleteAll(wxCommandEvent& event);
	void OnSearchButton(wxCommandEvent& event);
	void OnDisplayBox();

	void offlineSave();
	void reOpen();

	wxButton* addButton;
	wxButton* deleteButton;
	wxButton* deleteAll;
	wxButton* searchButton;
	wxListBox* contactListBox;
	wxListBox* numberListBox;
	wxStaticText* descriptionText;
	Node* head;
};