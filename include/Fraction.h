// Copyright 2020 Dev-will-work
#ifndef INCLUDE_FRACTION_H_
#define INCLUDE_FRACTION_H_
#include <string>
class Fraction {
 private:
  int numerator = 0, denominator = 1;
  void normalize(); // �������� ����� ����������(���������� ����� 2 / 4 -> 1 / 2).

 public:
  Fraction(int, int);
  Fraction(Fraction& from) : numerator{ from.numerator },
  denominator{ from.denominator } {};
  std::string getValue(); // -�����, ������������ std::string, ���������� ����������� �����, �������� "-5/6".����� � ��������� ������������ ��������� ��� ����� �����.
  int getNumerator();
  int getDenominator();
  int GCD(int one, int two);
};
#endif  // INCLUDE_FRACTION_H_
