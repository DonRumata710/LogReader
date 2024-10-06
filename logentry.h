#ifndef LOGENTRY_H
#define LOGENTRY_H

#include <QDateTime>
#include <QString>

struct LogEntry {
    QDateTime timestamp;
    QString level;
    QString module;
    QString content;
};

#endif // LOGENTRY_H
