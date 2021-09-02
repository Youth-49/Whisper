#ifndef FRIENDBUTTON_H
#define FRIENDBUTTON_H

#include "DataClass.h"
#include <QRadioButton>

class FriendButton: public QRadioButton
{
    Q_OBJECT
public:
    FriendButton(Friend& frd);
    const Friend& getFriend();

private:
    Friend& m_friend;
};

#endif // FRIENDBUTTON_H
