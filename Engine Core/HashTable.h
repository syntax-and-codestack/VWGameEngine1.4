#pragma once
#ifndef HASH_TABLE_H
#define HASH_TABLE_H

bool EpairInsert(const TKEY& Key, const TVALUE& Value);
bool EpairRemove(const TKEY& Key);

void EparRemoveAll();

TVALUE* find(const TKEY& Key)const;
TVALUE* SignalFirst(TKEY* Key)const;
TVALUE* SignalNext(TKEY* Key)const;

TEpairTable<Key, Value> EpairTable = TEpairTable;
Key key;
Value * value = EpairTable.SignalFirst(&Key);
while(value){
value = EpairTable.SignalNext(&Key);
};

#endif
