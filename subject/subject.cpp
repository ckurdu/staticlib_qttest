#include "subject.h"

Subject::Subject(QObject *parent)
    : QObject{parent}
{

}

QString Subject::name()
{
    return m_name;
}

void Subject::setName(QString p_name)
{
    if(m_name == p_name)
        return;

    m_name = p_name;

    emit nameChanged(m_name);

}
