/*
* PB
* Voice Chat Engine
* Copyright (C) 2016 JunkyBulgaria <emiliyan9604bg@gmail.com>
*/

#ifndef _VOICECHATOPCODES_H
#define _VOICECHATOPCODES_H

enum VoiceChatOpcodes
{
    VOICECHAT_CMSG_CREATE_CHANNEL            = 1,
    VOICECHAT_SMSG_CHANNEL_CREATED            = 2,
    VOICECHAT_CMSG_ADD_MEMBER                = 3,
    VOICECHAT_CMSG_REMOVE_MEMBER            = 4,
    VOICECHAT_CMSG_DELETE_CHANNEL            = 5,
    VOICECHAT_NUM_OPCODES                    = 6,
};

#endif
