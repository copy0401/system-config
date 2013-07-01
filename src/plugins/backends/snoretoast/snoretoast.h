#ifndef TOASTER_H
#define TOASTER_H

#include "core/plugins/snorebackend.h"

class SnoreToast : public Snore::SnoreBackend
{
    Q_OBJECT
    Q_INTERFACES(Snore::SnoreBackend)
public:
    SnoreToast();
    ~SnoreToast();
    bool init(Snore::SnoreCore *snore);


    // SnoreBackend interface
public slots:
    void registerApplication(Snore::Application *application);
    void unregisterApplication(Snore::Application *application);
    uint notify(Snore::Notification notification);
    void closeNotification(Snore::Notification notification);

private slots:
    void slotToastNotificationClosed(int code, QProcess::ExitStatus);


};

#endif // TOASTER_H
