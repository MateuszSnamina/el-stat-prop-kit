#include"gtest/gtest.h"
#include"el_stat_prop_kit/fixed_systems_adapters.hpp"
#include"el_stat_prop_kit/properties_bits.hpp"
#include"el_stat_prop_kit/fragment_property_bit.hpp"

using namespace el_stat_prop;

// *****************************************************************************
// ** global_test_H2O -> molecule_dipoles_std_atomic_contributions_mulliken  ***
// *****************************************************************************

TEST(h2o_other_properties, molecule_dipoles_std_atomic_contributions_mulliken) {
    auto system = create_system_h2o_hf_sto3g();
    DipoleMomentTag p_x_tag(Orient::stdOrient, Direction::x, std::make_shared<StdOrientReferencePointTag>());
    DipoleMomentTag p_y_tag(Orient::stdOrient, Direction::y, std::make_shared<StdOrientReferencePointTag>());
    DipoleMomentTag p_z_tag(Orient::stdOrient, Direction::z, std::make_shared<StdOrientReferencePointTag>());
    FragmentPropertyTag p_x_atom0_tag(std::make_shared<DipoleMomentTag>(p_x_tag), std::make_shared<MullikenTag>(0));
    FragmentPropertyTag p_y_atom0_tag(std::make_shared<DipoleMomentTag>(p_y_tag), std::make_shared<MullikenTag>(0));
    FragmentPropertyTag p_z_atom0_tag(std::make_shared<DipoleMomentTag>(p_z_tag), std::make_shared<MullikenTag>(0));
    FragmentPropertyTag p_x_atom1_tag(std::make_shared<DipoleMomentTag>(p_x_tag), std::make_shared<MullikenTag>(1));
    FragmentPropertyTag p_y_atom1_tag(std::make_shared<DipoleMomentTag>(p_y_tag), std::make_shared<MullikenTag>(1));
    FragmentPropertyTag p_z_atom1_tag(std::make_shared<DipoleMomentTag>(p_z_tag), std::make_shared<MullikenTag>(1));
    FragmentPropertyTag p_x_atom2_tag(std::make_shared<DipoleMomentTag>(p_x_tag), std::make_shared<MullikenTag>(2));
    FragmentPropertyTag p_y_atom2_tag(std::make_shared<DipoleMomentTag>(p_y_tag), std::make_shared<MullikenTag>(2));
    FragmentPropertyTag p_z_atom2_tag(std::make_shared<DipoleMomentTag>(p_z_tag), std::make_shared<MullikenTag>(2));
    FragmentPropertyBit p_x_atom0_bit(p_x_atom0_tag, system);
    FragmentPropertyBit p_y_atom0_bit(p_y_atom0_tag, system);
    FragmentPropertyBit p_z_atom0_bit(p_z_atom0_tag, system);
    FragmentPropertyBit p_x_atom1_bit(p_x_atom1_tag, system);
    FragmentPropertyBit p_y_atom1_bit(p_y_atom1_tag, system);
    FragmentPropertyBit p_z_atom1_bit(p_z_atom1_tag, system);
    FragmentPropertyBit p_x_atom2_bit(p_x_atom2_tag, system);
    FragmentPropertyBit p_y_atom2_bit(p_y_atom2_tag, system);
    FragmentPropertyBit p_z_atom2_bit(p_z_atom2_tag, system);
    EXPECT_NEAR(-0.00000, p_x_atom0_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+0.00000, p_y_atom0_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(-1.92169, p_z_atom0_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(-1.43240, p_x_atom1_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+0.00000, p_y_atom1_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+0.96084, p_z_atom1_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+1.43240, p_x_atom2_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+0.00000, p_y_atom2_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+0.96084, p_z_atom2_bit.value_nuclei(), 1e-3);
}

// *****************************************************************************
// ** global_test_H2O -> molecule_dipoles_inp_atomic_contributions_mulliken ****
// *****************************************************************************

TEST(h2o_other_properties, molecule_dipoles_inp_atomic_contributions_mulliken) {
    auto system = create_system_h2o_hf_sto3g();
    DipoleMomentTag p_x_tag(Orient::inpOrient, Direction::x, std::make_shared<InpOrientReferencePointTag>());
    DipoleMomentTag p_y_tag(Orient::inpOrient, Direction::y, std::make_shared<InpOrientReferencePointTag>());
    DipoleMomentTag p_z_tag(Orient::inpOrient, Direction::z, std::make_shared<InpOrientReferencePointTag>());
    FragmentPropertyTag p_x_atom0_tag(std::make_shared<DipoleMomentTag>(p_x_tag), std::make_shared<MullikenTag>(0));
    FragmentPropertyTag p_y_atom0_tag(std::make_shared<DipoleMomentTag>(p_y_tag), std::make_shared<MullikenTag>(0));
    FragmentPropertyTag p_z_atom0_tag(std::make_shared<DipoleMomentTag>(p_z_tag), std::make_shared<MullikenTag>(0));
    FragmentPropertyTag p_x_atom1_tag(std::make_shared<DipoleMomentTag>(p_x_tag), std::make_shared<MullikenTag>(1));
    FragmentPropertyTag p_y_atom1_tag(std::make_shared<DipoleMomentTag>(p_y_tag), std::make_shared<MullikenTag>(1));
    FragmentPropertyTag p_z_atom1_tag(std::make_shared<DipoleMomentTag>(p_z_tag), std::make_shared<MullikenTag>(1));
    FragmentPropertyTag p_x_atom2_tag(std::make_shared<DipoleMomentTag>(p_x_tag), std::make_shared<MullikenTag>(2));
    FragmentPropertyTag p_y_atom2_tag(std::make_shared<DipoleMomentTag>(p_y_tag), std::make_shared<MullikenTag>(2));
    FragmentPropertyTag p_z_atom2_tag(std::make_shared<DipoleMomentTag>(p_z_tag), std::make_shared<MullikenTag>(2));
    FragmentPropertyBit p_x_atom0_bit(p_x_atom0_tag, system);
    FragmentPropertyBit p_y_atom0_bit(p_y_atom0_tag, system);
    FragmentPropertyBit p_z_atom0_bit(p_z_atom0_tag, system);
    FragmentPropertyBit p_x_atom1_bit(p_x_atom1_tag, system);
    FragmentPropertyBit p_y_atom1_bit(p_y_atom1_tag, system);
    FragmentPropertyBit p_z_atom1_bit(p_z_atom1_tag, system);
    FragmentPropertyBit p_x_atom2_bit(p_x_atom2_tag, system);
    FragmentPropertyBit p_y_atom2_bit(p_y_atom2_tag, system);
    FragmentPropertyBit p_z_atom2_bit(p_z_atom2_tag, system);
    EXPECT_NEAR(+78.8469, p_x_atom0_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+119.077, p_y_atom0_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+161.229, p_z_atom0_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+10.5765, p_x_atom1_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+16.6071, p_y_atom1_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+20.2445, p_z_atom1_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+10.5765, p_x_atom2_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+14.3152, p_y_atom2_bit.value_nuclei(), 1e-3);
    EXPECT_NEAR(+18.5256, p_z_atom2_bit.value_nuclei(), 1e-3);
}