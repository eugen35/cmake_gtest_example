#include <gtest/gtest.h>
#include "mylibs/foo.h"

TEST(SumTest, A_Add_B) {
    EXPECT_EQ (sum(1,2), 3);
}

TEST(SumTest, A_Add_Zero) {
    EXPECT_EQ (sum(0,2), 3);
}


// @todo /1/ Тестирование массива как сделать
// @todo /3/ ОЧЕНЬ ДОЛГО НУЖНО КУРИТЬ КАК ВЫНЕСТИ ВСЕ ТЕСТЫ В ОТДЕЛЬНЫЙ КАТАЛОГ ИЛИ ХОТЯ БЫ В ОТДЕЛЬНЫЙ ФАЙЛ И ЗАПУСКАТЬ ИХ !!!!??? Поэтому пока откладываем

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}