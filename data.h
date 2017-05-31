#ifndef DATA_H
#define DATA_H

#include <QString>

namespace BIBLIO {
namespace DATA {

struct Object {
    QString Author; // char szAuthor[256];
    QString Title;
    QString Subtitle;
    QString Location;
    QString Publisher;
    int     Year;
    virtual ~QObject() {};
};

struct Book : public Object {
    int TotalPages;
};

struct Article : public Object {
    QString Journal;
    QString Volume;
    QString Issue;
    QString Pages;
};

} // namespace DATA
} // namespace BIBLIO

#endif // DATA_H
