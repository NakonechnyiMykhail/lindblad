/*
Copyright 2014 Dominic Meiser

This file is part of lindblad.

lindblad is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation, either version 3 of the License, or (at your
option) any later version.

lindblad is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License along
with lindblad.  If not, see <http://www.gnu.org/licenses/>.
*/
#include <gtest/gtest.h>
#include <Decay.hpp>
#include <testUtils.hpp>

TEST(Decay, Constructor) {
  Decay d(0, 1, 0.2);
}

TEST(Decay, EToG) {
  Decay d(0, 1, 0.2);
  std::vector<Amplitude> rho1(4, 1);
  std::vector<Amplitude> rho2(4, 0);
  d.apply(2, &rho1[0], &rho2[0]);
}

TEST(Decay, EToGTrace) {
  Decay d(0, 1, 0.2);
  CheckLindbladTraceProperty(d, 2);
}

TEST(Decay, EToGHermiticity) {
  Decay d(0, 1, 0.2);
  CheckLindbladHermiticityProperty(d, 2);
}
