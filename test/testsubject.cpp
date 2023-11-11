#include <QTest>
#include "subject.h"
#include <QSignalSpy>

class TestSubject: public QObject
{
    Q_OBJECT
    Subject* m_subject;
private slots:
    void name();
    void initTestCase()
    {
        m_subject = new Subject();
    }
};


void TestSubject::name()
{
    QSignalSpy spy(m_subject,&Subject::nameChanged);
    m_subject->setName("cafer");
    spy.wait();
    QCOMPARE(spy.count(),1);
}

QTEST_MAIN(TestSubject)
#include "testsubject.moc"

