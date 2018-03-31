#include <windows.h>
#include <commctrl.h>
#include "resource.h"

#define CBL(x) {x,#x}

struct line {
	unsigned short id;
	char *name;
};

line primary[] = {
	CBL(LANG_NEUTRAL),
	CBL(LANG_INVARIANT),
	CBL(LANG_AFRIKAANS),
	CBL(LANG_ALBANIAN),
	CBL(LANG_ARABIC),
	CBL(LANG_ARMENIAN),
	CBL(LANG_ASSAMESE),
	CBL(LANG_AZERI),
	CBL(LANG_BASQUE),
	CBL(LANG_BELARUSIAN),
	CBL(LANG_BENGALI),
	CBL(LANG_BULGARIAN),
	CBL(LANG_CATALAN),
	CBL(LANG_CHINESE),
	CBL(LANG_CROATIAN),
	CBL(LANG_CZECH),
	CBL(LANG_DANISH),
	CBL(LANG_DIVEHI),
	CBL(LANG_DUTCH),
	CBL(LANG_ENGLISH),
	CBL(LANG_ESTONIAN),
	CBL(LANG_FAEROESE),
	CBL(LANG_FARSI),
	CBL(LANG_FINNISH),
	CBL(LANG_FRENCH),
	CBL(LANG_GALICIAN),
	CBL(LANG_GEORGIAN),
	CBL(LANG_GERMAN),
	CBL(LANG_GREEK),
	CBL(LANG_GUJARATI),
	CBL(LANG_HEBREW),
	CBL(LANG_HINDI),
	CBL(LANG_HUNGARIAN),
	CBL(LANG_ICELANDIC),
	CBL(LANG_INDONESIAN),
	CBL(LANG_ITALIAN),
	CBL(LANG_JAPANESE),
	CBL(LANG_KANNADA),
	CBL(LANG_KASHMIRI),
	CBL(LANG_KAZAK),
	CBL(LANG_KONKANI),
	CBL(LANG_KOREAN),
	CBL(LANG_KYRGYZ),
	CBL(LANG_LATVIAN),
	CBL(LANG_LITHUANIAN),
	CBL(LANG_MACEDONIAN),
	CBL(LANG_MALAY),
	CBL(LANG_MALAYALAM),
	CBL(LANG_MANIPURI),
	CBL(LANG_MARATHI),
	CBL(LANG_MONGOLIAN),
	CBL(LANG_NEPALI),
	CBL(LANG_NORWEGIAN),
	CBL(LANG_ORIYA),
	CBL(LANG_POLISH),
	CBL(LANG_PORTUGUESE),
	CBL(LANG_PUNJABI),
	CBL(LANG_ROMANIAN),
	CBL(LANG_RUSSIAN),
	CBL(LANG_SANSKRIT),
	CBL(LANG_SERBIAN),
	CBL(LANG_SINDHI),
	CBL(LANG_SLOVAK),
	CBL(LANG_SLOVENIAN),
	CBL(LANG_SPANISH),
	CBL(LANG_SWAHILI),
	CBL(LANG_SWEDISH),
	CBL(LANG_SYRIAC),
	CBL(LANG_TAMIL),
	CBL(LANG_TATAR),
	CBL(LANG_TELUGU),
	CBL(LANG_THAI),
	CBL(LANG_TURKISH),
	CBL(LANG_UKRAINIAN),
	CBL(LANG_URDU),
	CBL(LANG_UZBEK),
	CBL(LANG_VIETNAMESE)
};

line sub[] = {
	CBL(SUBLANG_NEUTRAL),
	CBL(SUBLANG_DEFAULT),
	CBL(SUBLANG_SYS_DEFAULT),
	CBL(SUBLANG_ARABIC_SAUDI_ARABIA),
	CBL(SUBLANG_ARABIC_IRAQ),
	CBL(SUBLANG_ARABIC_EGYPT),
	CBL(SUBLANG_ARABIC_LIBYA),
	CBL(SUBLANG_ARABIC_ALGERIA),
	CBL(SUBLANG_ARABIC_MOROCCO),
	CBL(SUBLANG_ARABIC_TUNISIA),
	CBL(SUBLANG_ARABIC_OMAN),
	CBL(SUBLANG_ARABIC_YEMEN),
	CBL(SUBLANG_ARABIC_SYRIA),
	CBL(SUBLANG_ARABIC_JORDAN),
	CBL(SUBLANG_ARABIC_LEBANON),
	CBL(SUBLANG_ARABIC_KUWAIT),
	CBL(SUBLANG_ARABIC_UAE),
	CBL(SUBLANG_ARABIC_BAHRAIN),
	CBL(SUBLANG_ARABIC_QATAR),
	CBL(SUBLANG_AZERI_LATIN),
	CBL(SUBLANG_AZERI_CYRILLIC),
	CBL(SUBLANG_CHINESE_TRADITIONAL),
	CBL(SUBLANG_CHINESE_SIMPLIFIED),
	CBL(SUBLANG_CHINESE_HONGKONG),
	CBL(SUBLANG_CHINESE_SINGAPORE),
	CBL(SUBLANG_CHINESE_MACAU),
	CBL(SUBLANG_DUTCH),
	CBL(SUBLANG_DUTCH_BELGIAN),
	CBL(SUBLANG_ENGLISH_US),
	CBL(SUBLANG_ENGLISH_UK),
	CBL(SUBLANG_ENGLISH_AUS),
	CBL(SUBLANG_ENGLISH_CAN),
	CBL(SUBLANG_ENGLISH_NZ),
	CBL(SUBLANG_ENGLISH_EIRE),
	CBL(SUBLANG_ENGLISH_SOUTH_AFRICA),
	CBL(SUBLANG_ENGLISH_JAMAICA),
	CBL(SUBLANG_ENGLISH_CARIBBEAN),
	CBL(SUBLANG_ENGLISH_BELIZE),
	CBL(SUBLANG_ENGLISH_TRINIDAD),
	CBL(SUBLANG_ENGLISH_ZIMBABWE),
	CBL(SUBLANG_ENGLISH_PHILIPPINES),
	CBL(SUBLANG_FRENCH),
	CBL(SUBLANG_FRENCH_BELGIAN),
	CBL(SUBLANG_FRENCH_CANADIAN),
	CBL(SUBLANG_FRENCH_SWISS),
	CBL(SUBLANG_FRENCH_LUXEMBOURG),
	CBL(SUBLANG_FRENCH_MONACO),
	CBL(SUBLANG_GERMAN),
	CBL(SUBLANG_GERMAN_SWISS),
	CBL(SUBLANG_GERMAN_AUSTRIAN),
	CBL(SUBLANG_GERMAN_LUXEMBOURG),
	CBL(SUBLANG_GERMAN_LIECHTENSTEIN),
	CBL(SUBLANG_ITALIAN),
	CBL(SUBLANG_ITALIAN_SWISS),
	CBL(SUBLANG_KASHMIRI_INDIA),
	CBL(SUBLANG_KOREAN),
	CBL(SUBLANG_LITHUANIAN),
	CBL(SUBLANG_MALAY_MALAYSIA),
	CBL(SUBLANG_MALAY_BRUNEI_DARUSSALAM),
	CBL(SUBLANG_NEPALI_INDIA),
	CBL(SUBLANG_NORWEGIAN_BOKMAL),
	CBL(SUBLANG_NORWEGIAN_NYNORSK),
	CBL(SUBLANG_PORTUGUESE),
	CBL(SUBLANG_PORTUGUESE_BRAZILIAN),
	CBL(SUBLANG_SERBIAN_LATIN),
	CBL(SUBLANG_SERBIAN_CYRILLIC),
	CBL(SUBLANG_SPANISH),
	CBL(SUBLANG_SPANISH_MEXICAN),
	CBL(SUBLANG_SPANISH_MODERN),
	CBL(SUBLANG_SPANISH_GUATEMALA),
	CBL(SUBLANG_SPANISH_COSTA_RICA),
	CBL(SUBLANG_SPANISH_PANAMA),
	CBL(SUBLANG_SPANISH_DOMINICAN_REPUBLIC),
	CBL(SUBLANG_SPANISH_VENEZUELA),
	CBL(SUBLANG_SPANISH_COLOMBIA),
	CBL(SUBLANG_SPANISH_PERU),
	CBL(SUBLANG_SPANISH_ARGENTINA),
	CBL(SUBLANG_SPANISH_ECUADOR),
	CBL(SUBLANG_SPANISH_CHILE),
	CBL(SUBLANG_SPANISH_URUGUAY),
	CBL(SUBLANG_SPANISH_PARAGUAY),
	CBL(SUBLANG_SPANISH_BOLIVIA),
	CBL(SUBLANG_SPANISH_EL_SALVADOR),
	CBL(SUBLANG_SPANISH_HONDURAS),
	CBL(SUBLANG_SPANISH_NICARAGUA),
	CBL(SUBLANG_SPANISH_PUERTO_RICO),
	CBL(SUBLANG_SWEDISH),
	CBL(SUBLANG_SWEDISH_FINLAND),
	CBL(SUBLANG_URDU_PAKISTAN),
	CBL(SUBLANG_URDU_INDIA),
	CBL(SUBLANG_UZBEK_LATIN),
	CBL(SUBLANG_UZBEK_CYRILLIC)
};

BOOL CALLBACK DialogProc(HWND hwndDlg,UINT uMsg,WPARAM wParam,LPARAM lParam) {
	int i;
	switch (uMsg) {
	case WM_INITDIALOG:
		SendMessage(hwndDlg, WM_SETICON, 0, 0);
		for (i = 0; i < sizeof(primary)/sizeof(line); i++)
			SendDlgItemMessage(hwndDlg, IDC_PRIMARY, CB_ADDSTRING, 0, (LPARAM)primary[i].name);
		for (i = 0; i < sizeof(sub)/sizeof(line); i++)
			SendDlgItemMessage(hwndDlg, IDC_SUB, CB_ADDSTRING, 0, (LPARAM)sub[i].name);
		break;
	case WM_COMMAND:
		if (LOWORD(wParam) == IDCANCEL) {
			EndDialog(hwndDlg, 0);
			PostQuitMessage(0);
		}
		else if (HIWORD(wParam) == CBN_SELCHANGE) {
			if (SendDlgItemMessage(hwndDlg, IDC_PRIMARY, CB_GETCURSEL, 0, 0) != CB_ERR && SendDlgItemMessage(hwndDlg, IDC_SUB, CB_GETCURSEL, 0, 0) != CB_ERR) {
				char lang[512];
				wsprintf(lang, "Language ID: %d", MAKELANGID(primary[SendDlgItemMessage(hwndDlg, IDC_PRIMARY, CB_GETCURSEL, 0, 0)].id, sub[SendDlgItemMessage(hwndDlg, IDC_SUB, CB_GETCURSEL, 0, 0)].id));
				SetDlgItemText(hwndDlg, IDC_RESULT, lang);
			}
		}
		else if (LOWORD(wParam) == IDOK) {
			if (SendDlgItemMessage(hwndDlg, IDC_PRIMARY, CB_GETCURSEL, 0, 0) != CB_ERR && SendDlgItemMessage(hwndDlg, IDC_SUB, CB_GETCURSEL, 0, 0) != CB_ERR) {
				HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, 16);
				if (!hMem) return 0;
				char *lang_id = (char *)GlobalLock(hMem);
				wsprintf(lang_id, "%u", MAKELANGID(primary[SendDlgItemMessage(hwndDlg, IDC_PRIMARY, CB_GETCURSEL, 0, 0)].id, sub[SendDlgItemMessage(hwndDlg, IDC_SUB, CB_GETCURSEL, 0, 0)].id));
				GlobalUnlock(hMem);
				if (!OpenClipboard(hwndDlg)) return 0;
				EmptyClipboard();
				SetClipboardData(CF_TEXT,hMem);
				CloseClipboard();
			}
		}
		break;
	}
	return 0;
}

int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	InitCommonControls();

	DialogBox(
		GetModuleHandle(0),
		MAKEINTRESOURCE(IDD_DIALOG),
		0,
		DialogProc
	);

	ExitProcess(0);

	return 0;
}
