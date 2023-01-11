/***************************************************************
 * Name:      blackjackMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2022-12-21
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef BLACKJACKMAIN_H
#define BLACKJACKMAIN_H

#include "blackjack-p.h"

//(*Headers(blackjackDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
//*)

class blackjackDialog: public wxDialog
{
    public:

        blackjackDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~blackjackDialog();

    private:

        //(*Handlers(blackjackDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(blackjackDialog)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT3;
        static const long ID_STATICTEXT4;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        //*)

        //(*Declarations(blackjackDialog)
        wxBoxSizer* BoxSizer1;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        //*)

        DECLARE_EVENT_TABLE();

        Player you;
        Dealer dealer;
        Cards deck;

        int total = 0, total_p = 0, total_d = 0;
};

#endif // BLACKJACKMAIN_H
