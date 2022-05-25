#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>

#include "list.h"
using namespace std;

class HashTable {
 private:
  List<int> *_arr;
  int _countElement;
  int _sizeArr;

  int hash(string key) {
    unsigned int a = 0;

    for (int i = 0; key[i] != '\0'; i++) {
      a += key[i];
    }

    return a % _sizeArr;
    ;
  }

 public:
  HashTable() {
    _countElement = 0;
    _sizeArr = 5;
    _arr = new List<int>[_sizeArr];
  }

  bool isExist(string key) {
    int a = hash(key);
    for (int i = 0; i < _arr[a].getSize(); i++) {
      if (_arr[a].getElement(i) == key) {
        return true;
      }
    }
    return false;
  }

  void insert(string key, int date) {
    if (_countElement >
        _sizeArr *
            0.75)  // amen angam stuguma mecacneli   anhrajeshtutyun ka te che
    {
      resize_X2();
    }

    if (!isExist(key)) {
      int a = hash(key);
      _arr[a].addEnd(date, key);
      _countElement++;
    } else {
      cout << key << " <<--- anunov tvyalner arden goyutyun unen " << endl;
    }
  }

  void delite(string key) {
    if (_countElement <
        _sizeArr *
            0.25)  // amen angam stuguma poqracnelu   anhrajeshtutyun ka te che
    {
      rehash_B2();
    }

    int a = hash(key);
    int temp;
    for (int i = 0; i < _arr[a].getSize(); i++) {
      if (_arr[a].getElement(i) == key) {
        temp = i;
        break;
      }
    }
    _arr[a].removeAt(temp);
    _countElement--;
  }

  void print() {
    for (int i = 0; i < _sizeArr; i++) {
      _arr[i]._print();
    }
  }

  int countElement() { return _countElement; }

  int find(string key) {
    int a = hash(key);
    for (int i = 0; i < _arr[a].getSize(); i++) {
      if (_arr[a].getElement(i) == key) {
        return _arr[a].getDate(i);
      }
    }
    return 0;
  }

  void resize_X2()  // 2 angam mecacnuma size
  {
    _sizeArr = _sizeArr * 2;

    List<int> *arr1 = new List<int>[_sizeArr];
    for (int i = 0; i < (_sizeArr / 2); i++) {
      if (_arr[i].getSize() != 0) {
        int a = hash(_arr[i].getElement(0));
        arr1[a] = _arr[i];
      }
    }

    _arr = arr1;
  }

  void rehash_B2()  // 2 angam poqracnuma size
  {
    _sizeArr = _sizeArr / 2;

    List<int> *arr1 = new List<int>[_sizeArr];
    int j = 0;
    for (int i = 0; i < (_sizeArr * 2); i++) {
      if (_arr[i].getSize() != 0) {
        int a = hash(_arr[i].getElement(0));
        arr1[a] = _arr[i];
        j++;
      }
    }

    _arr = arr1;
  }
};

#endif
