//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : syntaxhighlightdlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __syntaxhighlightdlg__
#define __syntaxhighlightdlg__

/**
@file
Subclass of SyntaxHighlightBaseDlg, which is generated by wxFormBuilder.
*/

#include "syntaxhighlightbasedlg.h"
#include "lexer_configuration.h"
class wxChoice;
class wxNotebook;
class wxTreebook;

/** Implementing SyntaxHighlightBaseDlg */
class SyntaxHighlightDlg : public SyntaxHighlightBaseDlg
{
    bool m_isModified;
    bool m_globalThemeChanged;
    bool m_globalBgColourChanged;
    static bool m_globalBgColourChangedTooltipShown;
    LexerConf::Ptr_t m_lexer;

protected:
    virtual void OnGlobalFontSelected(wxFontPickerEvent& event);
    virtual void OnGlobalThemeSelected(wxCommandEvent& event);
    virtual void OnLoadEclipseThemeWebsite(wxCommandEvent& event);
    virtual void OnImportEclipseTheme(wxAuiToolBarEvent& event);
    virtual void OnRestoreDefaults(wxCommandEvent& event);
    virtual void OnExportAll(wxCommandEvent& event);
    virtual void OnToolExportAll(wxAuiToolBarEvent& event);
    virtual void OnExportSelective(wxCommandEvent& event);
    virtual void OnImport(wxCommandEvent& event);
    virtual void OnNewTheme(wxCommandEvent& event);
    virtual void OnSelTextFgChanged(wxColourPickerEvent& event);
    virtual void OnUseCustomFgTextColour(wxCommandEvent& event);
    virtual void OnTextSelFgUI(wxUpdateUIEvent& event);
    virtual void OnButtonApplyUI(wxUpdateUIEvent& event);
    virtual void OnLexerSelected(wxCommandEvent& event);
    virtual void OnColourChanged(wxColourPickerEvent& event);
    virtual void OnEditKeyWordsButton0(wxCommandEvent& event);
    virtual void OnEditKeyWordsButton1(wxCommandEvent& event);
    virtual void OnEditKeyWordsButton2(wxCommandEvent& event);
    virtual void OnEditKeyWordsButton3(wxCommandEvent& event);
    virtual void OnEditKeyWordsButton4(wxCommandEvent& event);
    virtual void OnEolFilled(wxCommandEvent& event);
    virtual void OnFontChanged(wxFontPickerEvent& event);
    virtual void OnItemSelected(wxCommandEvent& event);
    virtual void OnOutputViewColourChanged(wxColourPickerEvent& event);
    virtual void OnSelTextChanged(wxColourPickerEvent& event);
    virtual void OnStyleWithinPreprocessor(wxCommandEvent& event);
    virtual void OnStyleWithingPreProcessorUI(wxUpdateUIEvent& event);
    virtual void OnText(wxCommandEvent& event);

    // Handlers for SyntaxHighlightBaseDlg events.
    void OnButtonOK(wxCommandEvent& event);
    void OnButtonCancel(wxCommandEvent& event);
    void OnButtonApply(wxCommandEvent& event);
    void OnThemeChanged(wxCommandEvent& event);

    void LoadLexer(const wxString& themeName);
    void SaveChanges();
    void Clear();
    void CreateLexerPage();
    StyleProperty::Map_t::iterator GetSelectedStyle();
    void EditKeyWords(int set);

    void DoUpdatePreview();
    void DoSetGlobalBgColour(const wxColour& colour);
    void DoShowTooltipForGlobalBgColourChanged();
    void DoExport(const wxArrayString& lexers = wxArrayString());

public:
    /** Constructor */
    SyntaxHighlightDlg(wxWindow* parent);
    virtual ~SyntaxHighlightDlg();

    bool restartRequired;
};

#endif // __syntaxhighlightdlg__
