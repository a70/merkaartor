#ifndef OSMLINK_H
#define OSMLINK_H

#include <QUrl>

#include "Maps/Coord.h"

class OsmLink
{
public:
	OsmLink(QUrl url);
	OsmLink(QString url);

	bool isValid() const {return m_IsValid;}
	bool isShort() const {return m_IsShort;}
	CoordBox getCoordBox();

	static bool isValid(QUrl theUrl);

private:
	QUrl theUrl;
	bool m_IsValid;
	bool m_IsShort;

	double m_Lat;
	double m_Lon;
	int m_Zoom;

protected:
	void checkUrl();
};

#endif // OSMLINK_H