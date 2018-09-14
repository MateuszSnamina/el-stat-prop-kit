#include"gtest/gtest.h"
#include"el_stat_prop_kit/fixed_systems_adapters.hpp"
#include"el_stat_prop_kit/properties_bits.hpp"

using namespace el_stat_prop;

// *****************************************************************************
// ***********    h2o_molecule_properties -> charge  ***************************
// *****************************************************************************

TEST(h2o_molecule_properties, charge) {
    auto system = create_system_h2o_hf_sto3g();
    ChargeTag q_tag;
    ChargeBit q_bit(q_tag, system);
    EXPECT_NEAR(10.0, q_bit.value_nuclei(), 1e-5);
    EXPECT_NEAR(-10.0, q_bit.value_electron(), 1e-4);
}

// *****************************************************************************
// ***********    h2o_molecule_properties -> dipole_std    *********************
// *****************************************************************************

TEST(h2o_molecule_properties, dipole_std) {
    auto system = create_system_h2o_hf_sto3g();
    DipoleMomentTag p_x_tag(Orient::stdOrient, Direction::x, std::make_shared<StdOrientReferencePointTag>());
    DipoleMomentTag p_y_tag(Orient::stdOrient, Direction::y, std::make_shared<StdOrientReferencePointTag>());
    DipoleMomentTag p_z_tag(Orient::stdOrient, Direction::z, std::make_shared<StdOrientReferencePointTag>());
    DipoleMomentBit p_x_bit(p_x_tag, system);
    DipoleMomentBit p_y_bit(p_y_tag, system);
    DipoleMomentBit p_z_bit(p_z_tag, system);
    EXPECT_NEAR(0.0000, p_x_bit.value_nuclei(), 1e-5);
    EXPECT_NEAR(0.0000, p_y_bit.value_nuclei(), 1e-5);
    EXPECT_NEAR(0.0000, p_z_bit.value_nuclei(), 1e-5);
    EXPECT_NEAR(0.0000, p_x_bit.value_electron(), 1e-4);
    EXPECT_NEAR(0.0000, p_y_bit.value_electron(), 1e-4);
    EXPECT_NEAR(0.6725, p_z_bit.value_electron(), 1e-4);
    EXPECT_NEAR(0.0000, p_x_bit.value(), 1e-4);
    EXPECT_NEAR(0.0000, p_y_bit.value(), 1e-4);
    EXPECT_NEAR(0.6725, p_z_bit.value(), 1e-4);
}


// *****************************************************************************
// ***********    h2o_molecule_properties -> dipole_inp    *********************
// *****************************************************************************

TEST(h2o_molecule_properties, dipole_inp) {
    auto system = create_system_h2o_hf_sto3g();
    DipoleMomentTag p_x_tag(Orient::inpOrient, Direction::x, std::make_shared<InpOrientReferencePointTag>());
    DipoleMomentTag p_y_tag(Orient::inpOrient, Direction::y, std::make_shared<InpOrientReferencePointTag>());
    DipoleMomentTag p_z_tag(Orient::inpOrient, Direction::z, std::make_shared<InpOrientReferencePointTag>());
    DipoleMomentBit p_x_bit(p_x_tag, system);
    DipoleMomentBit p_y_bit(p_y_tag, system);
    DipoleMomentBit p_z_bit(p_z_tag, system);
    EXPECT_NEAR(+100.0000, p_x_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(+150.0000, p_y_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(+200.0000, p_z_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-99.5965, p_x_bit.value_electron(), 5e-3);
    EXPECT_NEAR(-149.6772, p_y_bit.value_electron(), 5e-3);
    EXPECT_NEAR(-200.4304, p_z_bit.value_electron(), 5e-3);
    EXPECT_NEAR(+0.4035, p_x_bit.value(), 5e-3);
    EXPECT_NEAR(+0.3228, p_y_bit.value(), 5e-3);
    EXPECT_NEAR(-0.4304, p_z_bit.value(), 5e-3);
}

// *****************************************************************************
// ***********    h2o_molecule_properties -> quadrupole_std    ********
// *****************************************************************************

TEST(h2o_molecule_properties, quadrupole_std) {
    auto system = create_system_h2o_hf_sto3g();
    QuadrupoleMomentTag Q_xx_tag(Orient::stdOrient, Direction2::xx, std::make_shared<StdOrientReferencePointTag>());
    QuadrupoleMomentTag Q_xy_tag(Orient::stdOrient, Direction2::xy, std::make_shared<StdOrientReferencePointTag>());
    QuadrupoleMomentTag Q_xz_tag(Orient::stdOrient, Direction2::xz, std::make_shared<StdOrientReferencePointTag>());
    QuadrupoleMomentTag Q_yy_tag(Orient::stdOrient, Direction2::yy, std::make_shared<StdOrientReferencePointTag>());
    QuadrupoleMomentTag Q_yz_tag(Orient::stdOrient, Direction2::yz, std::make_shared<StdOrientReferencePointTag>());
    QuadrupoleMomentTag Q_zz_tag(Orient::stdOrient, Direction2::zz, std::make_shared<StdOrientReferencePointTag>());
    QuadrupoleMomentBit Q_xx_bit(Q_xx_tag, system);
    QuadrupoleMomentBit Q_xy_bit(Q_xy_tag, system);
    QuadrupoleMomentBit Q_xz_bit(Q_xz_tag, system);
    QuadrupoleMomentBit Q_yy_bit(Q_yy_tag, system);
    QuadrupoleMomentBit Q_yz_bit(Q_yz_tag, system);
    QuadrupoleMomentBit Q_zz_bit(Q_zz_tag, system);
    EXPECT_NEAR(-3.3346, Q_xx_bit.value(), 5e-2);
    EXPECT_NEAR(+0.0000, Q_xy_bit.value(), 5e-2);
    EXPECT_NEAR(+0.0000, Q_xz_bit.value(), 5e-2);
    EXPECT_NEAR(-4.5542, Q_yy_bit.value(), 5e-2);
    EXPECT_NEAR(+0.0000, Q_yz_bit.value(), 5e-2);
    EXPECT_NEAR(-3.9653, Q_zz_bit.value(), 5e-2);
}

// *****************************************************************************
// ***********    h2o_molecule_properties -> quadrupole_inp    *****************
// *****************************************************************************

TEST(h2o_molecule_properties, quadrupole_inp) {
    auto system = create_system_h2o_hf_sto3g();
    QuadrupoleMomentTag Q_xx_tag(Orient::inpOrient, Direction2::xx, std::make_shared<InpOrientReferencePointTag>());
    QuadrupoleMomentTag Q_xy_tag(Orient::inpOrient, Direction2::xy, std::make_shared<InpOrientReferencePointTag>());
    QuadrupoleMomentTag Q_xz_tag(Orient::inpOrient, Direction2::xz, std::make_shared<InpOrientReferencePointTag>());
    QuadrupoleMomentTag Q_yy_tag(Orient::inpOrient, Direction2::yy, std::make_shared<InpOrientReferencePointTag>());
    QuadrupoleMomentTag Q_yz_tag(Orient::inpOrient, Direction2::yz, std::make_shared<InpOrientReferencePointTag>());
    QuadrupoleMomentTag Q_zz_tag(Orient::inpOrient, Direction2::zz, std::make_shared<InpOrientReferencePointTag>());
    QuadrupoleMomentBit Q_xx_bit(Q_xx_tag, system);
    QuadrupoleMomentBit Q_xy_bit(Q_xy_tag, system);
    QuadrupoleMomentBit Q_xz_bit(Q_xz_tag, system);
    QuadrupoleMomentBit Q_yy_bit(Q_yy_tag, system);
    QuadrupoleMomentBit Q_yz_bit(Q_yz_tag, system);
    QuadrupoleMomentBit Q_zz_bit(Q_zz_tag, system);
    EXPECT_NEAR(+3.7284, Q_xx_bit.value(), 5e-2);
    EXPECT_NEAR(+9.4507, Q_xy_bit.value(), 5e-2);
    EXPECT_NEAR(+3.5401, Q_xz_bit.value(), 5e-2);
    EXPECT_NEAR(+6.0465, Q_yy_bit.value(), 5e-2);
    EXPECT_NEAR(+0.4045, Q_yz_bit.value(), 5e-2);
    EXPECT_NEAR(-21.0908, Q_zz_bit.value(), 5e-2);
}