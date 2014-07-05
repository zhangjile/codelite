#ifndef STCLINEKEEPER_H
#define STCLINEKEEPER_H

/**
 * @class STCLineKeeper
 * a helper class that restores STC first visible line
 */
#include <wx/stc/stc.h>
#include "ieditor.h"

class clSTCLineKeeper
{
    wxStyledTextCtrl* m_stc;
    int m_firstVisibleLine;

public:
    clSTCLineKeeper(IEditor* editor);
    clSTCLineKeeper(wxStyledTextCtrl* stc);
    virtual ~clSTCLineKeeper();

};

#endif // STCLINEKEEPER_H
