// Copyright 2020 Dev-will-work
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>
class Fraction {
 public:
  Fraction(); // -����������� � ����� �����������, �� ���������� �� - ���������(0, 1).
  Fraction(); // -����������� �����������.
  void normalize(); // -�������� ����� ����������(���������� ����� 2 / 4 -> 1 / 2).
  std::string getValue(); // -�����, ������������ std::string, ���������� ����������� �����, �������� "-5/6".����� � ��������� ������������ ��������� ��� ����� �����.
  int getNumerator(); // -������� ���������.
  int getDenominator(); // -������� �����������.
 private:
   int numerator = 0, denominator = 1;
};
#endif  // INCLUDE_FRACTION_H_
