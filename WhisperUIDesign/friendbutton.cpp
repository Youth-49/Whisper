#include "friendbutton.h"

FriendButton::FriendButton(Friend& frd):
    m_friend(frd){}

const Friend& FriendButton::getFriend(){
    return m_friend;
}
