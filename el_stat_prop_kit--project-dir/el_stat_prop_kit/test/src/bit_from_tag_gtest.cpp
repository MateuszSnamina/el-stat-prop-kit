#include<gtest/gtest.h>
#include<string>

#include<el_stat_prop_kit/bit_from_tag.hpp>
#include<el_stat_prop_kit/adapter.hpp>

#include"el_stat_prop_kit/simple_system_adapter.hpp"

#include<tag_examples.hpp>
#include<bit_examples.hpp>

using namespace el_stat_prop;

// *****************************************************************************

TEST(bit_from_tag_test, intended_not_to_create) {
    AntTag ant_tag("Ant1");
    SimpleSystemAdapter system;
    using BitsList = PossibleBitsList<
            CatBit,
            DogBit>;
    // Test 1:
    std::shared_ptr<BigAnimalBitBase> bit1
            = bit_from_tag<BigAnimalBitBase, BitsList>(ant_tag, system);
    ASSERT_FALSE(static_cast<bool> (bit1));
}

// *****************************************************************************

TEST(bit_from_tag_test, intended_to_create) {
    CatTag cat_tag("Cat1");
    DogTag dog_tag("Dog1");
    SimpleSystemAdapter system;
    using BitsList = PossibleBitsList<
            CatBit,
            DogBit>;
    // Test 1:
    std::shared_ptr<BigAnimalBitBase> bit1
            = bit_from_tag<BigAnimalBitBase, BitsList>(cat_tag, system);

    ASSERT_TRUE(static_cast<bool> (bit1));
    auto bit1_casted = std::dynamic_pointer_cast<CatBit>(bit1);
    EXPECT_TRUE(static_cast<bool> (bit1_casted));
    EXPECT_EQ("Cat1--ctorCat", bit1_casted->m_tag.to_string());
    // Test 2:
    std::shared_ptr<BigAnimalBitBase> bit2
            = bit_from_tag<BigAnimalBitBase, BitsList>(dog_tag, system);
    ASSERT_TRUE(static_cast<bool> (bit2));
    auto bit2_casted = std::dynamic_pointer_cast<DogBit>(bit2);
    EXPECT_TRUE(static_cast<bool> (bit2_casted));
    EXPECT_EQ("Dog1--ctorDog", bit2_casted->m_tag.to_string());
}

