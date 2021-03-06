#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends001_GetPersonaName(void *);
extern void cppISteamFriends_SteamFriends001_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends001_GetPersonaState(void *);
extern void cppISteamFriends_SteamFriends001_SetPersonaState(void *, EPersonaState);
extern bool cppISteamFriends_SteamFriends001_AddFriend(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends001_RemoveFriend(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends001_HasFriend(void *, CSteamID);
extern EFriendRelationship cppISteamFriends_SteamFriends001_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends001_GetFriendPersonaState(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends001_Deprecated_GetFriendGamePlayed(void *, CSteamID, int32 *, uint32 *, uint16 *);
extern const char * cppISteamFriends_SteamFriends001_GetFriendPersonaName(void *, CSteamID);
extern int32 cppISteamFriends_SteamFriends001_AddFriendByName(void *, const char *);
extern int cppISteamFriends_SteamFriends001_GetFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends001_GetFriendByIndex(void *, int);
extern void cppISteamFriends_SteamFriends001_SendMsgToFriend(void *, CSteamID, EChatEntryType, const char *);
extern void cppISteamFriends_SteamFriends001_SetFriendRegValue(void *, CSteamID, const char *, const char *);
extern const char * cppISteamFriends_SteamFriends001_GetFriendRegValue(void *, CSteamID, const char *);
extern const char * cppISteamFriends_SteamFriends001_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends001_GetChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern bool cppISteamFriends_SteamFriends001_SendMsgToFriend_2(void *, CSteamID, EChatEntryType, const void *, int);
extern int cppISteamFriends_SteamFriends001_GetChatIDOfChatHistoryStart(void *, CSteamID);
extern void cppISteamFriends_SteamFriends001_SetChatHistoryStart(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends001_ClearChatHistory(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends001_InviteFriendByEmail(void *, const char *);
extern int cppISteamFriends_SteamFriends001_GetBlockedFriendCount(void *);
extern bool cppISteamFriends_SteamFriends001_GetFriendGamePlayed(void *, CSteamID, uint64 *, uint32 *, uint16 *);
extern bool cppISteamFriends_SteamFriends001_GetFriendGamePlayed2(void *, CSteamID, uint64 *, uint32 *, uint16 *, uint16 *);
#ifdef __cplusplus
}
#endif
