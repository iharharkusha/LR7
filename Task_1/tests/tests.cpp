#include <gtest/gtest.h>
#include <string>

#include "../../general/header-files/utils.h"
#include "../header-files/logic.h"

TEST(IntToBinaryTest, Zero) {
  EXPECT_EQ(IntToBinary("0"), "00"); 
}

TEST(IntToBinaryTest, PositiveNumber) {
  EXPECT_EQ(IntToBinary("5"), "0101");
}

TEST(IntToBinaryTest, NegativeNumber) {
  EXPECT_EQ(IntToBinary("-5"), "1101");
}

TEST(IntToBinaryTest, PowerOfTwo) {
  EXPECT_EQ(IntToBinary("16"), "010000");
}

TEST(IntToBinaryTest, OddNumber) {
  EXPECT_EQ(IntToBinary("123"), "01111011");
}

TEST(IntToBinaryTest, HugePositiveNumber) {
    EXPECT_EQ(IntToBinary("342674634734764636734"), "0100101001001110010000110111001011100100100110011000010011101000111110");
}

TEST(IntToBinaryTest, HugeNegativeNumber) {
    EXPECT_EQ(IntToBinary("-3426746347347646367343426746347347646367343426746347347646367343437848734334267463473476463673434267463473476463673434267463473476463673434378487343"), "110001001001101100110111000101101010110101001110011000100001101100110010001110010110000010111111010011101111001110000110111010100110110001111001101001101101110110000110010010000101111101010000000110011000100010010000100000111001011001001100010011101001000010100110101101000110000010111110101100011000000100010001001100001011111110100011010000000001111000100111101111011101000101011110101000101100110110101101111010000011111100101100100110101101010010101101001001100110011110100100011000101111");
}

TEST(ForwardToReverseTest, PositiveSimpleNumber) {
  EXPECT_EQ(ForwardToReverse("0101", 4), "0101"); 
}

TEST(ForwardToReverseTest, NegativeSimpleNumber) {
  EXPECT_EQ(ForwardToReverse("1101", 4), "1010"); 
}

TEST(ForwardToReverseTest, SingleBit) {
  EXPECT_EQ(ForwardToReverse("00", 2), "00");
}

TEST(ForwardToReverseTest, PositiveLargeBitString) {
  string bit_string = "01010101010101010101010";
  string expected_reverse = "01010101010101010101010"; 
  EXPECT_EQ(ForwardToReverse(bit_string, bit_string.size()), expected_reverse);
}

TEST(ForwardToReverseTest, NegativeLargeBitString) {
  string bit_string = "11010101010101010101010";
  string expected_reverse = "10101010101010101010101"; 
  EXPECT_EQ(ForwardToReverse(bit_string, bit_string.size()), expected_reverse);
}
