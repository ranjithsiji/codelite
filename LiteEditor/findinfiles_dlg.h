//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: findinfiles_dlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef _CODELITE_FORMBUILDER_FINDINFILES_DLG_BASE_CLASSES_H
#define _CODELITE_FORMBUILDER_FINDINFILES_DLG_BASE_CLASSES_H

// clang-format off
#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include "clThemedComboBox.hpp"
#include <wx/button.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/checklst.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

#ifdef WXC_FROM_DIP
#undef WXC_FROM_DIP
#endif
#if wxVERSION_NUMBER >= 3100
#define WXC_FROM_DIP(x) wxWindow::FromDIP(x, NULL)
#else
#define WXC_FROM_DIP(x) x
#endif

// clang-format on

class FindInFilesDialogBase : public wxDialog
{
protected:
    wxPanel* m_panelMainPanel;
    wxStaticText* m_staticText1;
    clThemedComboBox* m_findString;
    wxButton* m_find;
    wxStaticText* m_staticText102;
    clThemedComboBox* m_replaceString;
    wxButton* m_replaceAll;
    wxStaticText* m_staticText3;
    clThemedComboBox* m_fileTypes;
    wxStaticText* m_staticText2;
    clThemedComboBox* m_comboBoxWhere;
    wxButton* m_btnAddPath;
    wxStaticText* m_staticText5;
    clThemedComboBox* m_comboBoxEncoding;
    wxButton* m_cancel;
    wxCheckBox* m_matchCase;
    wxCheckBox* m_matchWholeWord;
    wxCheckBox* m_regualrExpression;
    wxCheckBox* m_checkBoxPipeForGrep;
    wxCheckBox* m_checkBoxSaveFilesBeforeSearching;
    wxCheckBox* m_checkBoxTODO;
    wxCheckBox* m_checkBoxATTN;
    wxCheckBox* m_checkBoxBUG;
    wxCheckBox* m_checkBoxFIXME;

protected:
    virtual void OnFindEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFind(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFindWhatUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnReplaceEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnReplace(wxCommandEvent& event) { event.Skip(); }
    virtual void OnReplaceUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonClose(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRegex(wxCommandEvent& event) { event.Skip(); }
    virtual void OnTODO(wxCommandEvent& event) { event.Skip(); }
    virtual void OnATTN(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBUG(wxCommandEvent& event) { event.Skip(); }
    virtual void OnFIXME(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText1() { return m_staticText1; }
    clThemedComboBox* GetFindString() { return m_findString; }
    wxButton* GetFind() { return m_find; }
    wxStaticText* GetStaticText102() { return m_staticText102; }
    clThemedComboBox* GetReplaceString() { return m_replaceString; }
    wxButton* GetReplaceAll() { return m_replaceAll; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    clThemedComboBox* GetFileTypes() { return m_fileTypes; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    clThemedComboBox* GetComboBoxWhere() { return m_comboBoxWhere; }
    wxButton* GetBtnAddPath() { return m_btnAddPath; }
    wxStaticText* GetStaticText5() { return m_staticText5; }
    clThemedComboBox* GetComboBoxEncoding() { return m_comboBoxEncoding; }
    wxButton* GetCancel() { return m_cancel; }
    wxPanel* GetPanelMainPanel() { return m_panelMainPanel; }
    wxCheckBox* GetMatchCase() { return m_matchCase; }
    wxCheckBox* GetMatchWholeWord() { return m_matchWholeWord; }
    wxCheckBox* GetRegualrExpression() { return m_regualrExpression; }
    wxCheckBox* GetCheckBoxPipeForGrep() { return m_checkBoxPipeForGrep; }
    wxCheckBox* GetCheckBoxSaveFilesBeforeSearching() { return m_checkBoxSaveFilesBeforeSearching; }
    wxCheckBox* GetCheckBoxTODO() { return m_checkBoxTODO; }
    wxCheckBox* GetCheckBoxATTN() { return m_checkBoxATTN; }
    wxCheckBox* GetCheckBoxBUG() { return m_checkBoxBUG; }
    wxCheckBox* GetCheckBoxFIXME() { return m_checkBoxFIXME; }
    FindInFilesDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Find In Files"),
                          const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                          long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~FindInFilesDialogBase();
};

class FindInFilesLocationsDlgBase : public wxDialog
{
protected:
    wxCheckListBox* m_checkListBoxLocations;
    wxButton* m_buttonAdd;
    wxButton* m_buttonDelete;
    wxStdDialogButtonSizer* m_stdBtnSizer113;
    wxButton* m_button115;
    wxButton* m_button117;

protected:
    virtual void OnAddPath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeletePath(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDeletePathUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxCheckListBox* GetCheckListBoxLocations() { return m_checkListBoxLocations; }
    wxButton* GetButtonAdd() { return m_buttonAdd; }
    wxButton* GetButtonDelete() { return m_buttonDelete; }
    FindInFilesLocationsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY,
                                const wxString& title = _("Edit Search Locations"),
                                const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1),
                                long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);
    virtual ~FindInFilesLocationsDlgBase();
};

#endif
