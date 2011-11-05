#ifndef TOMAHAWKOAUTHTWITTERACCOUNT
#define TOMAHAWKOAUTHTWITTERACCOUNT

#include "dllmacro.h"

#include <QTweetLib/qtweetlib_global.h>
#include <QTweetLib/oauthtwitter.h>

class DLLEXPORT TomahawkOAuthTwitter : public OAuthTwitter
{
    Q_OBJECT

public:
    TomahawkOAuthTwitter( QNetworkAccessManager *nam, QObject *parent = 0 );

    ~TomahawkOAuthTwitter() {}

protected:
    virtual int authorizationWidget();

private slots:
    void error();
};

#endif