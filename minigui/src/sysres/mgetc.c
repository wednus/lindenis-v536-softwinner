/*
 *   This file is part of MiniGUI, a mature cross-platform windowing 
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 * 
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/en/about/licensing-policy/>.
 */
/*************************************************
* This is inside mode of system res configuation *
* It's generated by the mgcfg-trans, version 1.0 *
* author : dongjunjie in feynman                 *
* please donnot modify this file, if you want,   *
* please change your input file and regenerate   *
* this file                                      *
*************************************************/
#include <stdio.h>
#include "common.h"
#include "minigui.h"

#ifdef _MGINCORE_RES

// This configuration file is for MiniGUI V3.0.x
// Section: system
static char* _system_keys[]={ 
// GAL engine and default options
    "gal_engine",
    "defaultmode",
// IAL engine
    "ial_engine",
    "mdev",
    "mtype"
};
static char* _system_values[]={ 
// GAL engine and default options
    "pc_xvfb",
    "800x600-16bpp",
// IAL engine
    "pc_xvfb",
    "/dev/input/mice",
    "IMPS2"
};
// Section: fbcon
static char* _fbcon_keys[]={ 
    "defaultmode"
};
static char* _fbcon_values[]={ 
    "1024x768-16bpp"
};
// Section: qvfb
static char* _qvfb_keys[]={ 
    "defaultmode",
    "display"
};
static char* _qvfb_values[]={ 
    "640x480-16bpp",
    "0"
};
#ifdef _MGGAL_PCXVFB
// Section: pc_xvfb
static char* _pc_xvfb_keys[]={ 
    "defaultmode",
    "window_caption",
    "exec_file"
};
static char* _pc_xvfb_values[]={ 
    "800x600-16bpp",
    "XVFB-for-MiniGUI-3.0-(Gtk-Version)",
    "/usr/local/bin/gvfb"
};
#endif
// Section: rtos_xvfb
static char* _rtos_xvfb_keys[]={ 
    "defaultmode"
};
static char* _rtos_xvfb_values[]={ 
    "800x600-16bpp"
};
#ifdef _MGGAL_SHADOW
// Section: shadow
static char* _shadow_keys[]={ 
    "real_engine",
    "defaultmode",
    "rotate_screen"
};
static char* _shadow_values[]={ 
    "pc_xvfb",
    "800x600-16bpp",
    "normal"
};
#endif
#ifdef _MGGAL_MLSHADOW
// Section: mlshadow
static char* _mlshadow_keys[]={ 
    "real_engine",
    "defaultmode",
    "def_bgcolor",
    "double_buffer"
};
static char* _mlshadow_values[]={ 
    "qvfb",
    "800x600-16bpp",
    "0x00FF00",
    "enable"
};
#endif
// The first system font must be a logical font using RBF device font.
// Section: systemfont
static char* _systemfont_keys[]={ 
    "font_number",
    "font0",
    "font1",
    "font2",
    "font3",
    "font4",
    "default",
    "wchar_def",
    "fixed",
    "caption",
    "menu",
    "control"
};
static char* _systemfont_values[]={ 
    "5",
    "rbf-FixedSys-rrncnn-8-16-ISO8859-1",
    "*-FixedSys-rrncnn-*-16-ISO8859-1",
    "*-Courier-rrncnn-*-16-ISO8859-1",
    "*-SansSerif-rrncnn-*-16-ISO8859-1",
    "*-System-rrncnn-*-16-ISO8859-1",
    "0",
    "4",
    "1",
    "4",
    "2",
    "3"
};
// Section: rawbitmapfonts
static char* _rawbitmapfonts_keys[]={ 
    "font_number"
};
static char* _rawbitmapfonts_values[]={ 
    "0"
};
// Section: varbitmapfonts
static char* _varbitmapfonts_keys[]={ 
    "font_number"
};
static char* _varbitmapfonts_values[]={ 
    "0"
};
// Section: upf
static char* _upf_keys[]={ 
    "font_number"
};
static char* _upf_values[]={ 
    "0"
};
// Section: qpf
static char* _qpf_keys[]={ 
    "font_number"
};
static char* _qpf_values[]={ 
    "0"
};
// Section: truetypefonts
static char* _truetypefonts_keys[]={ 
    "font_number"
};
static char* _truetypefonts_values[]={ 
    "0"
};
// Section: mouse
static char* _mouse_keys[]={ 
    "dblclicktime"
};
static char* _mouse_values[]={ 
    "300"
};
// Section: event
static char* _event_keys[]={ 
    "timeoutusec",
    "repeatusec"
};
static char* _event_values[]={ 
    "300000",
    "50000"
};
// Section: cursorinfo
static char* _cursorinfo_keys[]={ 
// Edit following line to specify cursor files path
    "cursorpath",
    "cursornumber",
    "cursor0",
    "cursor1",
    "cursor2",
    "cursor3",
    "cursor4",
    "cursor5",
    "cursor6",
    "cursor7",
    "cursor8",
    "cursor9",
    "cursor10",
    "cursor11",
    "cursor12",
    "cursor13",
    "cursor14",
    "cursor15",
    "cursor16",
    "cursor17",
    "cursor18",
    "cursor19",
    "cursor20",
    "cursor21",
    "cursor22"
};
static char* _cursorinfo_values[]={ 
// Edit following line to specify cursor files path
    "/usr/local/share/minigui/res/cursor/",
    "23",
    "d_arrow.cur",
    "d_beam.cur",
    "d_pencil.cur",
    "d_cross.cur",
    "d_move.cur",
    "d_sizenwse.cur",
    "d_sizenesw.cur",
    "d_sizewe.cur",
    "d_sizens.cur",
    "d_uparrow.cur",
    "d_none.cur",
    "d_help.cur",
    "d_busy.cur",
    "d_wait.cur",
    "g_rarrow.cur",
    "g_col.cur",
    "g_row.cur",
    "g_drag.cur",
    "g_nodrop.cur",
    "h_point.cur",
    "h_select.cur",
    "ho_split.cur",
    "ve_split.cur"
};
// Section: resinfo
static char* _resinfo_keys[]={ 
    "respath"
};
static char* _resinfo_values[]={ 
    "/usr/local/share/minigui/res/"
};
// Section: classic
static char* _classic_keys[]={ 
// Note that max number defined in source code is 5.
    "iconnumber",
    "icon0",
    "icon1",
    "icon2",
    "icon3",
    "icon4",
// default icons for new OpenFileDialogBox
    "dir",
    "file",
// default icons for TreeView control
    "treefold",
    "treeunfold",
// bitmap used by BUTTON control
    "radiobutton",
    "checkbutton",
// background picture, use your favirate photo
    "bgpicture",
    "bgpicpos",
// bgpicpos=upleft
// bgpicpos=downleft
// bgpicpos=upright
// bgpicpos=downright
// bgpicpos=upcenter
// bgpicpos=downcenter
// bgpicpos=vcenterleft
// bgpicpos=vcenterright
// bgpicpos=none
//window element metrics
    "caption",
    "menu",
    "border",
    "scrollbar",
//window element colors
    "fgc_active_caption",
    "bgca_active_caption",
    "bgcb_active_caption",
    "fgc_menu",
    "bgc_menu",
    "fgc_msgbox",
    "fgc_tip",
    "bgc_tip",
    "fgc_active_border",
    "fgc_inactive_border",
    "fgc_inactive_caption",
    "bgca_inactive_caption",
    "bgcb_inactive_caption",
    "fgc_window",
    "bgc_window",
    "fgc_3dbox",
    "mainc_3dbox",
    "fgc_selected_item",
    "bgc_selected_item",
    "bgc_selected_lostfocus",
    "fgc_disabled_item",
    "bgc_disabled_item",
    "fgc_hilight_item",
    "bgc_hilight_item",
    "fgc_significant_item",
    "bgc_significant_item",
    "bgc_desktop"
};
static char* _classic_values[]={ 
// Note that max number defined in source code is 5.
    "5",
    "form.ico",
    "failed.ico",
    "help.ico",
    "warning.ico",
    "excalmatory.ico",
// default icons for new OpenFileDialogBox
    "folder.ico",
    "textfile.ico",
// default icons for TreeView control
    "fold.ico",
    "unfold.ico",
// bitmap used by BUTTON control
    "classic_radio_button.bmp",
    "classic_check_button.bmp",
// background picture, use your favirate photo
    "none",
    "center",
// bgpicpos=upleft
// bgpicpos=downleft
// bgpicpos=upright
// bgpicpos=downright
// bgpicpos=upcenter
// bgpicpos=downcenter
// bgpicpos=vcenterleft
// bgpicpos=vcenterright
// bgpicpos=none
//window element metrics
    "20",
    "25",
    "2",
    "16",
//window element colors
    "0xFFFFFFFF",
    "0xFF6A240A",
    "0xFF6A240A",
    "0xFF000000",
    "0xFFCED3D6",
    "0xFF000000",
    "0xFF000000",
    "0xFFE7FFFF",
    "0xFFCED3D6",
    "0xFFCED3D6",
    "0xFFC8D0D4",
    "0xFF808080",
    "0xFF808080",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFF000000",
    "0xFFCED3D6",
    "0xFFFFFFFF",
    "0xFF6B2408",
    "0xFFBDA69C",
    "0xFF848284",
    "0xFFCED3D6",
    "0xFFFFFFFF",
    "0xFF6B2408",
    "0xFFFFFFFF",
    "0xFF6B2408",
    "0xFFC08000"
};
#ifdef _MGLF_RDR_FLAT
// Section: flat
static char* _flat_keys[]={ 
// Note that max number defined in source code is 5.
    "iconnumber",
    "icon0",
    "icon1",
    "icon2",
    "icon3",
    "icon4",
// default icons for new OpenFileDialogBox
    "dir",
    "file",
// default icons for TreeView control
    "treefold",
    "treeunfold",
// bitmap used by BUTTON control
    "radiobutton",
    "checkbutton",
// background picture, use your favirate photo
    "bgpicture",
    "bgpicpos",
//window element metrics
    "caption",
    "menu",
    "border",
    "scrollbar",
//window element colors
    "fgc_active_caption",
    "bgca_active_caption",
    "bgcb_active_caption",
    "fgc_inactive_caption",
    "bgca_inactive_caption",
    "bgcb_inactive_caption",
    "fgc_menu",
    "bgc_menu",
    "fgc_msgbox",
    "fgc_tip",
    "bgc_tip",
    "fgc_active_border",
    "fgc_inactive_border",
    "fgc_window",
    "bgc_window",
    "fgc_3dbox",
    "mainc_3dbox",
    "fgc_selected_item",
    "bgc_selected_item",
    "bgc_selected_lostfocus",
    "fgc_disabled_item",
    "bgc_disabled_item",
    "fgc_hilight_item",
    "bgc_hilight_item",
    "fgc_significant_item",
    "bgc_significant_item",
    "bgc_desktop",
    "flat_tab_normal_color"
};
static char* _flat_values[]={ 
// Note that max number defined in source code is 5.
    "5",
    "form-flat.ico",
    "failed-flat.ico",
    "help-flat.ico",
    "warning-flat.ico",
    "excalmatory-flat.ico",
// default icons for new OpenFileDialogBox
    "folder-flat.ico",
    "textfile-flat.ico",
// default icons for TreeView control
    "fold-flat.ico",
    "unfold-flat.ico",
// bitmap used by BUTTON control
    "flat_radio_button.bmp",
    "flat_check_button.bmp",
// background picture, use your favirate photo
    "none",
    "center",
//window element metrics
    "20",
    "25",
    "1",
    "16",
//window element colors
    "0xFFFFFFFFF",
    "0xFF000000",
    "0xFF000000",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFFFFFFFF",
    "0xFF000000",
    "0xFFD8D8D8",
    "0xFF000000",
    "0xFF000000",
    "0xFFE7FFFF",
    "0xFF000000",
    "0xFF848284",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFFFFFFFF",
    "0xFF000000",
    "0xFFBDA69C",
    "0xFF848284",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFF664E4A",
    "0xFFFFFFFF",
    "0xFF000000",
    "0xFFC08000",
    "0xFFC6D2CF"
};
#endif
#ifdef _MGLF_RDR_SKIN
// Section: skin
static char* _skin_keys[]={ 
// Note that max number defined in source code is 5.
    "iconnumber",
    "icon0",
    "icon1",
    "icon2",
    "icon3",
    "icon4",
// default icons for new OpenFileDialogBox
    "dir",
    "file",
// default icons for TreeView control
    "treefold",
    "treeunfold",
// background picture, use your favirate photo
    "bgpicture",
    "bgpicpos",
//window element metrics
    "caption",
    "menu",
    "border",
    "scrollbar",
    "fgc_active_caption",
    "bgca_active_caption",
    "bgcb_active_caption",
    "fgc_menu",
    "bgc_menu",
    "fgc_msgbox",
    "fgc_tip",
    "bgc_tip",
    "fgc_active_border",
    "fgc_inactive_border",
    "fgc_inactive_caption",
    "bgca_inactive_caption",
    "bgcb_inactive_caption",
    "fgc_window",
    "bgc_window",
    "fgc_3dbox",
    "mainc_3dbox",
    "fgc_selected_item",
    "bgc_selected_item",
    "bgc_selected_lostfocus",
    "fgc_disabled_item",
    "bgc_disabled_item",
    "fgc_hilight_item",
    "bgc_hilight_item",
    "fgc_significant_item",
    "bgc_significant_item",
    "bgc_desktop",
    "skin_bkgnd",
    "skin_caption",
    "skin_caption_btn",
//for scrollbar
    "skin_scrollbar_hshaft",
    "skin_scrollbar_vshaft",
    "skin_scrollbar_hthumb",
    "skin_scrollbar_vthumb",
    "skin_scrollbar_arrows",
//for border
    "skin_tborder",
    "skin_bborder",
    "skin_lborder",
    "skin_rborder",
    "skin_arrows",
    "skin_arrows_shell",
    "skin_pushbtn",
    "skin_radiobtn",
    "skin_checkbtn",
//for treeview
    "skin_tree",
    "skin_header",
    "skin_tab",
//for trackbar
    "skin_tbslider_h",
    "skin_tbslider_v",
    "skin_trackbar_horz",
    "skin_trackbar_vert",
//for progressbar
    "skin_progressbar_htrack",
    "skin_progressbar_vtrack",
    "skin_progressbar_hchunk",
    "skin_progressbar_vchunk"
};
static char* _skin_values[]={ 
// Note that max number defined in source code is 5.
    "5",
    "form.ico",
    "failed.ico",
    "help.ico",
    "warning.ico",
    "excalmatory.ico",
// default icons for new OpenFileDialogBox
    "folder.ico",
    "textfile.ico",
// default icons for TreeView control
    "fold.ico",
    "unfold.ico",
// background picture, use your favirate photo
    "none",
    "center",
//window element metrics
    "25",
    "25",
    "1",
    "17",
    "0xFFFFFFFF",
    "0xFFE35400",
    "0xFF686868",
    "0xFF000000",
    "0xFFD4D6FF",
    "0xFF000000",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFFC8D0D4",
    "0xFFC8D0D4",
    "0xFFF8E4D8",
    "0xFFDF967A",
    "0xFF686868",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFF000000",
    "0xFFD8E9EC",
    "0xFFFFFFFF",
    "0xFFC56A31",
    "0xFFD8E9EC",
    "0xFF99A8AC",
    "0xFFFFFFFF",
    "0xFFFFFFFF",
    "0xFFC56A31",
    "0xFFFFFFFF",
    "0xFFC56A31",
    "0xFF984E00",
    "skin_bkgnd.bmp",
    "skin_caption.gif",
    "skin_cpn_btn.gif",
//for scrollbar
    "skin_sb_hshaft.bmp",
    "skin_sb_vshaft.bmp",
    "skin_sb_hthumb.bmp",
    "skin_sb_vthumb.bmp",
    "skin_sb_arrows.bmp",
//for border
    "skin_tborder.bmp",
    "skin_bborder.bmp",
    "skin_lborder.bmp",
    "skin_rborder.bmp",
    "skin_arrows.gif",
    "skin_arrows_shell.bmp",
    "skin_pushbtn.gif",
    "skin_radiobtn.gif",
    "skin_checkbtn.bmp",
//for treeview
    "skin_tree.bmp",
    "skin_header.bmp",
    "skin_tab.gif",
//for trackbar
    "skin_tbslider_h.gif",
    "skin_tbslider_v.gif",
    "skin_tb_horz.gif",
    "skin_tb_vert.gif",
//for progressbar
    "skin_pb_htrack.gif",
    "skin_pb_vtrack.gif",
    "skin_pb_htruck.bmp",
    "skin_pb_vtruck.bmp"
};
#endif
// Section: fashion
static char* _fashion_keys[]={ 
// Note that max number defined in source code is 5.
    "iconnumber",
    "icon0",
    "icon1",
    "icon2",
    "icon3",
    "icon4",
// default icons for new OpenFileDialogBox
    "dir",
    "file",
// default icons for TreeView control
    "treefold",
    "treeunfold",
// bitmap used by BUTTON control
    "radiobutton",
    "checkbutton",
// background picture, use your favirate photo
    "bgpicture",
    "bgpicpos",
//window element metrics
    "caption",
    "menu",
    "border",
    "scrollbar",
    "fgc_active_caption",
    "bgca_active_caption",
    "bgcb_active_caption",
    "fgc_menu",
    "bgc_menu",
    "fgc_msgbox",
    "fgc_tip",
    "bgc_tip",
    "fgc_active_border",
    "fgc_inactive_border",
    "fgc_inactive_caption",
    "bgca_inactive_caption",
    "bgcb_inactive_caption",
    "fgc_window",
    "bgc_window",
    "fgc_3dbox",
    "mainc_3dbox",
    "fgc_selected_item",
    "bgc_selected_item",
    "bgc_selected_lostfocus",
    "fgc_disabled_item",
    "bgc_disabled_item",
    "fgc_hilight_item",
    "bgc_hilight_item",
    "fgc_significant_item",
    "bgc_significant_item",
    "bgc_desktop"
};
static char* _fashion_values[]={ 
// Note that max number defined in source code is 5.
    "5",
    "form.ico",
    "failed.ico",
    "mg_help.ico",
    "warning.ico",
    "excalmatory.ico",
// default icons for new OpenFileDialogBox
    "folder.ico",
    "textfile.ico",
// default icons for TreeView control
    "fold.ico",
    "unfold.ico",
// bitmap used by BUTTON control
    "fashion_radio_btn.bmp",
    "fashion_check_btn.bmp",
// background picture, use your favirate photo
    "none",
    "center",
//window element metrics
    "25",
    "25",
    "1",
    "17",
    "0xFFFFFFFF",
    "0xFFE35400",
    "0xFFFF953D",
    "0xFF000000",
    "0xFFFFE4BF",
    "0xFF000000",
    "0xFF000000",
    "0xFFFFFFFF",
    "0xFFC8D0D4",
    "0xFFC8D0D4",
    "0xFFF8E4D8",
    "0xFFDF967A",
    "0xFFEBB99D",
    "0xFF000000",
    "0xFFEBB99D",
    "0xFF000000",
    "0xFFD8E9EC",
    "0xFFFFFFFF",
    "0xFFC56A31",
    "0xFFD8E9EC",
    "0xFF99A8AC",
    "0xFFFFFFFF",
    "0xFFFFFFFF",
    "0xFFC56A31",
    "0xFFFFFFFF",
    "0xFFC56A31",
    "0xFF984E00"
};
static ETCSECTION _etc_sections [] = { 
    {0, 5, "system", _system_keys,_system_values }, 
    {0, 1, "fbcon", _fbcon_keys,_fbcon_values }, 
    {0, 2, "qvfb", _qvfb_keys,_qvfb_values }, 
#ifdef _MGGAL_PCXVFB
    {0, 3, "pc_xvfb", _pc_xvfb_keys,_pc_xvfb_values }, 
#endif
    {0, 1, "rtos_xvfb", _rtos_xvfb_keys,_rtos_xvfb_values }, 
#ifdef _MGGAL_SHADOW
    {0, 3, "shadow", _shadow_keys,_shadow_values }, 
#endif
#ifdef _MGGAL_MLSHADOW
    {0, 4, "mlshadow", _mlshadow_keys,_mlshadow_values }, 
#endif
    {0, 12, "systemfont", _systemfont_keys,_systemfont_values }, 
    {0, 1, "rawbitmapfonts", _rawbitmapfonts_keys,_rawbitmapfonts_values }, 
    {0, 1, "varbitmapfonts", _varbitmapfonts_keys,_varbitmapfonts_values }, 
    {0, 1, "upf", _upf_keys,_upf_values }, 
    {0, 1, "qpf", _qpf_keys,_qpf_values }, 
    {0, 1, "truetypefonts", _truetypefonts_keys,_truetypefonts_values }, 
    {0, 1, "mouse", _mouse_keys,_mouse_values }, 
    {0, 2, "event", _event_keys,_event_values }, 
    {0, 25, "cursorinfo", _cursorinfo_keys,_cursorinfo_values }, 
    {0, 1, "resinfo", _resinfo_keys,_resinfo_values }, 
    {0, 45, "classic", _classic_keys,_classic_values }, 
#ifdef _MGLF_RDR_FLAT
    {0, 46, "flat", _flat_keys,_flat_values }, 
#endif
#ifdef _MGLF_RDR_SKIN
    {0, 71, "skin", _skin_keys,_skin_values }, 
#endif
    {0, 45, "fashion", _fashion_keys,_fashion_values } 
};

///////////////////////////////////////////////////

static ETC_S _ETC = {
    0,
    sizeof(_etc_sections)/sizeof(ETCSECTION),
    _etc_sections
};

GHANDLE __mg_get_mgetc (void)
{
    return (GHANDLE) &_ETC;
}

#endif /* _MGINCORE_RES */
