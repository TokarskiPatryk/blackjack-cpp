/***************************************************************
 * Name:      blackjackApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2022-12-21
 * Copyright:  ()
 * License:
 **************************************************************/

#include "blackjackApp.h"

//(*AppHeaders
#include "blackjackMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(blackjackApp);

bool blackjackApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	blackjackDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)

    return wxsOK;

}
