#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>

class Subject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged FINAL)
    QString m_name;
public:
    explicit Subject(QObject *parent = nullptr);
    QString name();
    void setName(QString);

signals:
    void nameChanged(QString);

};

#endif // SUBJECT_H
