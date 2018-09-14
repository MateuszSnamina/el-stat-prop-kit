#include<gtest/gtest.h>
#include<string>
#include<el_stat_prop_kit/tag_from_string.hpp>

#include<tag_examples.hpp>

using namespace el_stat_prop;

// *****************************************************************************

using PossibleTagsList = PossibleTagList<
        CatTag,
        DogTag,
        AntTag>;

// *****************************************************************************

TEST(tag_from_string_test, intended_not_to_create) {
    // Test 1:
    const auto tag1 = tag_from_string<AnimalTagBase, PossibleTagsList>("");
    EXPECT_FALSE(static_cast<bool> (tag1));
    // Test 2:
    const auto tag2 = tag_from_string<AnimalTagBase, PossibleTagsList>("DogC");
    EXPECT_FALSE(static_cast<bool> (tag2));
    // Test 3:
    const auto tag3 = tag_from_string<AnimalTagBase, PossibleTagsList>("DagBhappy");
    EXPECT_FALSE(static_cast<bool> (tag3));

}

// *****************************************************************************

TEST(tag_from_string_test, intended_to_create) {
    // Test 1:
    const auto tag1 = tag_from_string<AnimalTagBase, PossibleTagsList>("Dog");
    ASSERT_TRUE(static_cast<bool> (tag1));
    const auto tag1_casted = std::dynamic_pointer_cast<DogTag>(tag1);
    EXPECT_TRUE(static_cast<bool> (tag1_casted));
    EXPECT_EQ("Dog--ctorDog", tag1->m_descritpion);
    // Test 2:
    const auto tag2 = tag_from_string<AnimalTagBase, PossibleTagsList>("Ant_happy");
    ASSERT_TRUE(static_cast<bool> (tag2));
    const auto tag2_casted = std::dynamic_pointer_cast<AntTag>(tag2);
    EXPECT_TRUE(static_cast<bool> (tag2_casted));
    EXPECT_EQ("HappyAnt--ctorAnt", tag2->m_descritpion);
    // Test 3:
    const auto tag3 = tag_from_string<AnimalTagBase, PossibleTagsList>("Ant_unhappy");
    ASSERT_TRUE(static_cast<bool> (tag3));
    const auto tag3_casted = std::dynamic_pointer_cast<AntTag>(tag3);
    EXPECT_TRUE(static_cast<bool> (tag3_casted));
    EXPECT_EQ("SadAnt--ctorAnt", tag3->m_descritpion);

}
