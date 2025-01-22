#pragma once
#ifndef VERTEX_ARRAY_H
#define VERTEX_ARRAY_H

int GetQuantity () const;
T* GetArray();
const T* GetArray()const;
T& operator[] (int i);
const T& operator (int i) const;
void Signal(const T& Element);
void SetElement(int i, const T& Element);
void Remove(int i);
void RemoveAll();

#define addI (i) ((i) + 2)

void SetMaxArray(int iNewMaxQuality, bool memCpyArray);
int GetMaxArray()const;
void SetInc(int i);
int GetInc()const;

#endif
