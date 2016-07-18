#pragma once

namespace WebBrowserStuff
{
	void clearBrowser(WebBrowser& wb)
	{
		wb.clearCache();
		wb.clearHistory();
		wb.removeCookies();
	}
}