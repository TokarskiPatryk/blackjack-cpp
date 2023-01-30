/***************************************************************
 * Name:      blackjackMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2022-12-21
 * Copyright:  ()
 * License:
 **************************************************************/

#include "blackjackMain.h"
#include <wx/msgdlg.h>

//dowywalenia
#include <string>
#include <windows.h>
//(*InternalHeaders(blackjackDialog)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }
    return wxbuild;
}

//(*IdInit(blackjackDialog)
const long blackjackDialog::ID_STATICTEXT1 = wxNewId();
const long blackjackDialog::ID_STATICTEXT2 = wxNewId();
const long blackjackDialog::ID_STATICTEXT5 = wxNewId();
const long blackjackDialog::ID_STATICTEXT3 = wxNewId();
const long blackjackDialog::ID_STATICTEXT4 = wxNewId();
const long blackjackDialog::ID_BUTTON1 = wxNewId();
const long blackjackDialog::ID_BUTTON2 = wxNewId();
const long blackjackDialog::ID_BUTTON3 = wxNewId();
const long blackjackDialog::ID_BUTTON4 = wxNewId();
//*)

BEGIN_EVENT_TABLE(blackjackDialog,wxDialog)
    //(*EventTable(blackjackDialog)
    //*)
END_EVENT_TABLE()

blackjackDialog::blackjackDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(blackjackDialog)
    wxBoxSizer* BoxSizer2;
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, wxID_ANY, _("BlackJack"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    BoxSizer2 = new wxBoxSizer(wxVERTICAL);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    wxFont StaticText1Font(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("DejaVu Sans Condensed"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    BoxSizer2->Add(StaticText1, 1, wxALL|wxEXPAND, 5);
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    wxFont StaticText2Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("DejaVu Sans Condensed"),wxFONTENCODING_DEFAULT);
    StaticText2->SetFont(StaticText2Font);
    BoxSizer2->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, wxEmptyString, wxDefaultPosition, wxSize(290,47), 0, _T("ID_STATICTEXT5"));
    BoxSizer2->Add(StaticText5, 1, wxALL|wxEXPAND, 5);
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    wxFont StaticText3Font(24,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("DejaVu Sans Condensed"),wxFONTENCODING_DEFAULT);
    StaticText3->SetFont(StaticText3Font);
    BoxSizer2->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    wxFont StaticText4Font(10,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("DejaVu Sans Condensed"),wxFONTENCODING_DEFAULT);
    StaticText4->SetFont(StaticText4Font);
    BoxSizer2->Add(StaticText4, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer2, 1, wxALL, 5);
    FlexGridSizer1 = new wxFlexGridSizer(4, 1, 0, 0);
    Button1 = new wxButton(this, ID_BUTTON1, _("Hit"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->Disable();
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("Stand"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->Disable();
    FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Start"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(this, ID_BUTTON4, _("Help"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    FlexGridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(FlexGridSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&blackjackDialog::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&blackjackDialog::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&blackjackDialog::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&blackjackDialog::OnButton4Click);
    //*)

    SetIcon(wxICON(aaaa));
}

blackjackDialog::~blackjackDialog()
{
    //(*Destroy(blackjackDialog)
    //*)
}

void blackjackDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}


//reset button
void blackjackDialog::OnButton3Click(wxCommandEvent& event)
{
    if(Button3->GetLabel()=="Start")
    {
        //Button1->Show();
        //Button2->Show();
        Button3->SetLabel("Reset");
    }
    StaticText5->SetLabel(_("                    "));
    StaticText1->SetLabel(_("                    "));
    StaticText3->SetLabel(_("                    "));
    Button1->Enable();
    Button2->Enable();
    deck.reset();
    dealer.reset_hand();
    you.reset_hand();
    deck.setSeed();

    you.addToHand(deck.drawCard());
    you.addToHand(deck.drawCard());
    StaticText3->SetLabel(wxString::FromUTF8(you.showCards()));

    dealer.addToHand(deck.drawCard());
    StaticText2->SetLabel(_(wxString::Format(wxT("%i"),dealer.calculate_total())));
    dealer.addToHand(deck.drawCard());
// StaticText1 - dealer
// StaticText2 - dealer value
// StaticText3 - player
// StaticText4 - player value
// StaticText5 - status

    total = you.calculate_total();

    if (total == 21) {
        StaticText4->SetLabel(wxString::Format(wxT("%i"),total));
        Button1->Disable();
        Button2->Disable();
        StaticText5->SetLabel(_("BlackJack! YOU WIN! "));
    }

    StaticText4->SetLabel(wxString::Format(wxT("%i"),total));
    StaticText1->SetLabel(wxString::FromUTF8(dealer.showFirstCards()));

}
//hit button
void blackjackDialog::OnButton1Click(wxCommandEvent& event)
{
    you.addToHand(deck.drawCard());
    total_p = you.calculate_total();
    StaticText3->SetLabel(wxString::FromUTF8(you.showCards()));

    StaticText4->SetLabel(wxString::Format(wxT("%i"),total_p));
    if (total_p == 21) {
        Button1->Disable();
        Button2->Disable();
        StaticText5->SetLabel(_("BlackJack! YOU WIN! "));
    }
    else if (total_p > 21) {
        Button1->Disable();
        Button2->Disable();
        StaticText5->SetLabel(_("You lose"));
        // block hit and stand button
    }


}
//stand button
void blackjackDialog::OnButton2Click(wxCommandEvent& event)
{
    Button1->Disable();
    Button2->Disable();

    total_p = you.calculate_total();
    total_d = dealer.calculate_total();
	while (total_d < 17) {
		dealer.addToHand(deck.drawCard());
		total_d = dealer.calculate_total();
	}
	StaticText1->SetLabel(wxString::FromUTF8(dealer.showCards()));
    StaticText2->SetLabel(wxString::Format(wxT("%i"),total_d));

    StaticText5->SetLabel(_(dealer.whoWins(you)));
}

void blackjackDialog::OnButton4Click(wxCommandEvent& event)
{
    const char * mes = "Zadaniem gracza jest uzyskać jak najbliżej (ale nie więcej niż) 21 punktów.\n\nKarty od dwójki do dziesiątki mają wartość równą numerowi karty.\nWalet, dama i król mają wartość równą 10 punktów.\nAs ma wartość równą 1 lub 11, w zależności co jest lepsze dla gracza.\n\nW Blackjacka gra się przeciwko krupierowi. Po rozdaniu gracz ma następujące możliwości:\n\nDobrać kartę (hit).\nNie dobierać kart (stand).";
    wxMessageBox(_(wxString::FromUTF8(mes)),_("Zasady gry"));



}
