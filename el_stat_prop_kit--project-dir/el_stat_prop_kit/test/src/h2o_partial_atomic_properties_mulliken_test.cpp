#include"gtest/gtest.h"
#include"el_stat_prop_kit/fixed_systems_adapters.hpp"
#include"el_stat_prop_kit/properties_bits.hpp"
#include"el_stat_prop_kit/fragment_property_bit.hpp"

using namespace el_stat_prop;

// *****************************************************************************
// *********    h2o_partial_atomic_properties_mulliken -> charges   ************
// *****************************************************************************

TEST(h2o_partial_atomic_properties_mulliken, charges) {
    auto system = create_system_h2o_hf_sto3g();
    // ----------------------------[ ATOM 0 ]-------------------------------------
    FragmentPropertyTag q_atom0_tag(std::make_shared<ChargeTag>(), std::make_shared<MullikenTag>(0));
    FragmentPropertyBit q_atom0_bit(q_atom0_tag, system);
    EXPECT_NEAR(+8.0000, q_atom0_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-8.3307, q_atom0_bit.value_electron(), 1e-4);
    EXPECT_NEAR(-0.3307, q_atom0_bit.value(), 1e-4);
    // ----------------------------[ ATOM 1 ]-------------------------------------
    FragmentPropertyTag q_atom1_tag(std::make_shared<ChargeTag>(), std::make_shared<MullikenTag>(2));
    FragmentPropertyBit q_atom1_bit(q_atom1_tag, system);
    EXPECT_NEAR(+1.0000, q_atom1_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-0.8346, q_atom1_bit.value_electron(), 1e-4);
    EXPECT_NEAR(+0.1654, q_atom1_bit.value(), 1e-4);
    // ----------------------------[ ATOM 2 ]-------------------------------------
    FragmentPropertyTag q_atom2_tag(std::make_shared<ChargeTag>(), std::make_shared<MullikenTag>(1));
    FragmentPropertyBit q_atom2_bit(q_atom2_tag, system);
    EXPECT_NEAR(+1.0000, q_atom2_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-0.8346, q_atom2_bit.value_electron(), 1e-4);
    EXPECT_NEAR(+0.1654, q_atom2_bit.value(), 1e-4);
}

// *****************************************************************************
// *********    h2o_partial_atomic_properties_mulliken -> dipoles_std   ********
// *****************************************************************************

TEST(h2o_partial_atomic_properties_mulliken, dipoles_std) {
    auto system = create_system_h2o_hf_sto3g();
    // ----------------------------[ ATOM 0 ]-------------------------------------
    auto p_x_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::x, std::make_shared<AtomReferencePointTag>(0));
    auto p_y_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::y, std::make_shared<AtomReferencePointTag>(0));
    auto p_z_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::z, std::make_shared<AtomReferencePointTag>(0));
    auto p_x_atom0_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom0_tag, std::make_shared<MullikenTag>(0));
    auto p_y_atom0_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom0_tag, std::make_shared<MullikenTag>(0));
    auto p_z_atom0_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom0_tag, std::make_shared<MullikenTag>(0));
    FragmentPropertyBit p_x_atom0_bit(*p_x_atom0_tag, system);
    FragmentPropertyBit p_y_atom0_bit(*p_y_atom0_tag, system);
    FragmentPropertyBit p_z_atom0_bit(*p_z_atom0_tag, system);
    EXPECT_NEAR(-0.0000, p_x_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(-0.0000, p_y_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(+0.2157, p_z_atom0_bit.value(), 1e-4);
    // ----------------------------[ ATOM 1 ]-------------------------------------
    auto p_x_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::x, std::make_shared<AtomReferencePointTag>(1));
    auto p_y_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::y, std::make_shared<AtomReferencePointTag>(1));
    auto p_z_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::z, std::make_shared<AtomReferencePointTag>(1));
    auto p_x_atom1_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom1_tag, std::make_shared<MullikenTag>(1));
    auto p_y_atom1_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom1_tag, std::make_shared<MullikenTag>(1));
    auto p_z_atom1_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom1_tag, std::make_shared<MullikenTag>(1));
    FragmentPropertyBit p_x_atom1_bit(*p_x_atom1_tag, system);
    FragmentPropertyBit p_y_atom1_bit(*p_y_atom1_tag, system);
    FragmentPropertyBit p_z_atom1_bit(*p_z_atom1_tag, system);
    EXPECT_NEAR(+0.0216, p_x_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.0000, p_y_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(+0.0298, p_z_atom1_bit.value(), 1e-4);
    // ----------------------------[ ATOM 2 ]-------------------------------------
    auto p_x_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::x, std::make_shared<AtomReferencePointTag>(2));
    auto p_y_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::y, std::make_shared<AtomReferencePointTag>(2));
    auto p_z_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::z, std::make_shared<AtomReferencePointTag>(2));
    auto p_x_atom2_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom2_tag, std::make_shared<MullikenTag>(2));
    auto p_y_atom2_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom2_tag, std::make_shared<MullikenTag>(2));
    auto p_z_atom2_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom2_tag, std::make_shared<MullikenTag>(2));
    FragmentPropertyBit p_x_atom2_bit(*p_x_atom2_tag, system);
    FragmentPropertyBit p_y_atom2_bit(*p_y_atom2_tag, system);
    FragmentPropertyBit p_z_atom2_bit(*p_z_atom2_tag, system);
    EXPECT_NEAR(-0.0216, p_x_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(+0.0000, p_y_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(+0.0298, p_z_atom2_bit.value(), 1e-4);
}

// *****************************************************************************
// *********    h2o_partial_atomic_properties_mulliken -> dipoles_inp  ***********
// *****************************************************************************

TEST(h2o_partial_atomic_properties_mulliken, dipoles_inp) {
    auto system = create_system_h2o_hf_sto3g();
    // ----------------------------[ ATOM 0 ]-------------------------------------
    auto p_x_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::x, std::make_shared<AtomReferencePointTag>(0));
    auto p_y_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::y, std::make_shared<AtomReferencePointTag>(0));
    auto p_z_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::z, std::make_shared<AtomReferencePointTag>(0));
    auto p_x_atom0_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom0_tag, std::make_shared<MullikenTag>(0));
    auto p_y_atom0_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom0_tag, std::make_shared<MullikenTag>(0));
    auto p_z_atom0_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom0_tag, std::make_shared<MullikenTag>(0));
    FragmentPropertyBit p_x_atom0_bit(*p_x_atom0_tag, system);
    FragmentPropertyBit p_y_atom0_bit(*p_y_atom0_tag, system);
    FragmentPropertyBit p_z_atom0_bit(*p_z_atom0_tag, system);
    EXPECT_NEAR(+0.12943, p_x_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(+0.10354, p_y_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(-0.13805, p_z_atom0_bit.value(), 1e-4);
    // ----------------------------[ ATOM 1 ]-------------------------------------
    auto p_x_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::x, std::make_shared<AtomReferencePointTag>(1));
    auto p_y_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::y, std::make_shared<AtomReferencePointTag>(1));
    auto p_z_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::z, std::make_shared<AtomReferencePointTag>(1));
    auto p_x_atom1_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom1_tag, std::make_shared<MullikenTag>(1));
    auto p_y_atom1_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom1_tag, std::make_shared<MullikenTag>(1));
    auto p_z_atom1_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom1_tag, std::make_shared<MullikenTag>(1));
    FragmentPropertyBit p_x_atom1_bit(*p_x_atom1_tag, system);
    FragmentPropertyBit p_y_atom1_bit(*p_y_atom1_tag, system);
    FragmentPropertyBit p_z_atom1_bit(*p_z_atom1_tag, system);
    EXPECT_NEAR(+0.01788, p_x_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.00300, p_y_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.03205, p_z_atom1_bit.value(), 1e-4);
    // ----------------------------[ ATOM 2 ]-------------------------------------
    auto p_x_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::x, std::make_shared<AtomReferencePointTag>(2));
    auto p_y_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::y, std::make_shared<AtomReferencePointTag>(2));
    auto p_z_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::z, std::make_shared<AtomReferencePointTag>(2));
    auto p_x_atom2_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom2_tag, std::make_shared<MullikenTag>(2));
    auto p_y_atom2_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom2_tag, std::make_shared<MullikenTag>(2));
    auto p_z_atom2_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom2_tag, std::make_shared<MullikenTag>(2));
    FragmentPropertyBit p_x_atom2_bit(*p_x_atom2_tag, system);
    FragmentPropertyBit p_y_atom2_bit(*p_y_atom2_tag, system);
    FragmentPropertyBit p_z_atom2_bit(*p_z_atom2_tag, system);
    EXPECT_NEAR(+0.01788, p_x_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(+0.03161, p_y_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(-0.00610, p_z_atom2_bit.value(), 1e-4);
}

// *****************************************************************************
// *********    h2o_partial_atomic_properties_mulliken -> quadrupoles_std   ****
// *****************************************************************************

TEST(h2o_partial_atomic_properties_mulliken, quadrupoles_std) {

    struct Rank2 {
        double xx, xy, xz, yy, yz, zz;
    };

    auto system = create_system_h2o_hf_sto3g();

    // ----------------------------[ ATOM 0 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_xy_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_xz_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_yy_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_yz_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_zz_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_xx_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_xy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_xz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_yy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_yz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_zz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        FragmentPropertyBit rawQ_xx_atom0_bit(*rawQ_xx_atom0_tag, system);
        FragmentPropertyBit rawQ_xy_atom0_bit(*rawQ_xy_atom0_tag, system);
        FragmentPropertyBit rawQ_xz_atom0_bit(*rawQ_xz_atom0_tag, system);
        FragmentPropertyBit rawQ_yy_atom0_bit(*rawQ_yy_atom0_tag, system);
        FragmentPropertyBit rawQ_yz_atom0_bit(*rawQ_yz_atom0_tag, system);
        FragmentPropertyBit rawQ_zz_atom0_bit(*rawQ_zz_atom0_tag, system);
        Rank2 ref_traceless_Q_atom0 = {
            +0.2951635298943763, -0.0000000000000021, +0.0000000944185785,
            -0.2927158220791846, -0.0000000000000014, -0.0024477078151882
        };
        Rank2 got_raw_Q_atom0 = {
            rawQ_xx_atom0_bit.value(), rawQ_xy_atom0_bit.value(), rawQ_xz_atom0_bit.value(),
            rawQ_yy_atom0_bit.value(), rawQ_yz_atom0_bit.value(), rawQ_zz_atom0_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom0.xx, 2 * got_raw_Q_atom0.xx - got_raw_Q_atom0.yy - got_raw_Q_atom0.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.xy, 3 * got_raw_Q_atom0.xy, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.xz, 3 * got_raw_Q_atom0.xz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.yy, 2 * got_raw_Q_atom0.yy - got_raw_Q_atom0.xx - got_raw_Q_atom0.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.yz, 3 * got_raw_Q_atom0.yz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.zz, 2 * got_raw_Q_atom0.zz - got_raw_Q_atom0.xx - got_raw_Q_atom0.yy, 5e-5);
    }
    // ----------------------------[ ATOM 1 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_zz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xx_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_xy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_xz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_yy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_yz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_zz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        FragmentPropertyBit rawQ_xx_atom1_bit(*rawQ_xx_atom1_tag, system);
        FragmentPropertyBit rawQ_xy_atom1_bit(*rawQ_xy_atom1_tag, system);
        FragmentPropertyBit rawQ_xz_atom1_bit(*rawQ_xz_atom1_tag, system);
        FragmentPropertyBit rawQ_yy_atom1_bit(*rawQ_yy_atom1_tag, system);
        FragmentPropertyBit rawQ_yz_atom1_bit(*rawQ_yz_atom1_tag, system);
        FragmentPropertyBit rawQ_zz_atom1_bit(*rawQ_zz_atom1_tag, system);
        Rank2 ref_traceless_Q_atom1 = {
            +0.3713694803417539, -0.0000000000000013, -0.3295725947644590,
            -0.3318941554638992, +0.0000000000000011, -0.0394753248778546
        };
        Rank2 got_raw_Q_atom1 = {
            rawQ_xx_atom1_bit.value(), rawQ_xy_atom1_bit.value(), rawQ_xz_atom1_bit.value(),
            rawQ_yy_atom1_bit.value(), rawQ_yz_atom1_bit.value(), rawQ_zz_atom1_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom1.xx, 2 * got_raw_Q_atom1.xx - got_raw_Q_atom1.yy - got_raw_Q_atom1.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.xy, 3 * got_raw_Q_atom1.xy, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.xz, 3 * got_raw_Q_atom1.xz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.yy, 2 * got_raw_Q_atom1.yy - got_raw_Q_atom1.xx - got_raw_Q_atom1.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.yz, 3 * got_raw_Q_atom1.yz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.zz, 2 * got_raw_Q_atom1.zz - got_raw_Q_atom1.xx - got_raw_Q_atom1.yy, 5e-5);
    }
    // ----------------------------[ ATOM 2 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_zz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xx_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_xy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_xz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_yy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_yz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_zz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        FragmentPropertyBit rawQ_xx_atom2_bit(*rawQ_xx_atom2_tag, system);
        FragmentPropertyBit rawQ_xy_atom2_bit(*rawQ_xy_atom2_tag, system);
        FragmentPropertyBit rawQ_xz_atom2_bit(*rawQ_xz_atom2_tag, system);
        FragmentPropertyBit rawQ_yy_atom2_bit(*rawQ_yy_atom2_tag, system);
        FragmentPropertyBit rawQ_yz_atom2_bit(*rawQ_yz_atom2_tag, system);
        FragmentPropertyBit rawQ_zz_atom2_bit(*rawQ_zz_atom2_tag, system);
        Rank2 ref_traceless_Q_atom2 = {
            +0.3713689350405316, -0.0000000000000024, +0.3295727867686856,
            -0.3318940554003380, -0.0000000000000020, -0.0394748796401935
        };
        Rank2 got_raw_Q_atom2 = {
            rawQ_xx_atom2_bit.value(), rawQ_xy_atom2_bit.value(), rawQ_xz_atom2_bit.value(),
            rawQ_yy_atom2_bit.value(), rawQ_yz_atom2_bit.value(), rawQ_zz_atom2_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom2.xx, 2 * got_raw_Q_atom2.xx - got_raw_Q_atom2.yy - got_raw_Q_atom2.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.xy, 3 * got_raw_Q_atom2.xy, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.xz, 3 * got_raw_Q_atom2.xz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.yy, 2 * got_raw_Q_atom2.yy - got_raw_Q_atom2.xx - got_raw_Q_atom2.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.yz, 3 * got_raw_Q_atom2.yz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.zz, 2 * got_raw_Q_atom2.zz - got_raw_Q_atom2.xx - got_raw_Q_atom2.yy, 5e-5);
    }
}

/*
Reference values:
msnamina@starnak:~/el-stat-prop-kit--tests$ cat niedoida-h2o-std_coords_mulliken.mat_Q0 
      +0.2951635298943763       -0.0000000000000021       +0.0000000944185785       -0.2927158220791846       -0.0000000000000014       -0.0024477078151882 
      +0.3713694803417539       -0.0000000000000013       -0.3295725947644590       -0.3318941554638992       +0.0000000000000011       -0.0394753248778546 
      +0.3713689350405316       -0.0000000000000024       +0.3295727867686856       -0.3318940554003380       -0.0000000000000020       -0.0394748796401935 
 */

// *****************************************************************************
// *********    h2o_partial_atomic_properties_mulliken -> quadrupoles_inp   ****
// *****************************************************************************

TEST(h2o_partial_atomic_properties_mulliken, quadrupoles_inp) {

    struct Rank2 {
        double xx, xy, xz, yy, yz, zz;
    };
    auto system = create_system_h2o_hf_sto3g();

    // ----------------------------[ ATOM 0 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_xy_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_xz_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_yy_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_yz_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_zz_ref_atom0_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(0));
        auto rawQ_xx_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_xy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_xz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_yy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_yz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        auto rawQ_zz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom0_tag, std::make_shared<MullikenTag>(0));
        FragmentPropertyBit rawQ_xx_atom0_bit(*rawQ_xx_atom0_tag, system);
        FragmentPropertyBit rawQ_xy_atom0_bit(*rawQ_xy_atom0_tag, system);
        FragmentPropertyBit rawQ_xz_atom0_bit(*rawQ_xz_atom0_tag, system);
        FragmentPropertyBit rawQ_yy_atom0_bit(*rawQ_yy_atom0_tag, system);
        FragmentPropertyBit rawQ_yz_atom0_bit(*rawQ_yz_atom0_tag, system);
        FragmentPropertyBit rawQ_zz_atom0_bit(*rawQ_zz_atom0_tag, system);
        Rank2 ref_traceless_Q_atom0 = {
            -0.1882177793133865, +0.0835974612504707, -0.1114633250974279,
            +0.1504036605815791, +0.1930122330175973, +0.0378141187318109
        };
        Rank2 got_raw_Q_atom0 = {
            rawQ_xx_atom0_bit.value(), rawQ_xy_atom0_bit.value(), rawQ_xz_atom0_bit.value(),
            rawQ_yy_atom0_bit.value(), rawQ_yz_atom0_bit.value(), rawQ_zz_atom0_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom0.xx, 2 * got_raw_Q_atom0.xx - got_raw_Q_atom0.yy - got_raw_Q_atom0.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.xy, 3 * got_raw_Q_atom0.xy, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.xz, 3 * got_raw_Q_atom0.xz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.yy, 2 * got_raw_Q_atom0.yy - got_raw_Q_atom0.xx - got_raw_Q_atom0.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.yz, 3 * got_raw_Q_atom0.yz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom0.zz, 2 * got_raw_Q_atom0.zz - got_raw_Q_atom0.xx - got_raw_Q_atom0.yy, 5e-5);
    }
    // ----------------------------[ ATOM 1 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_zz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xx_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_xy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_xz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_yy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_yz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        auto rawQ_zz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom1_tag, std::make_shared<MullikenTag>(1));
        FragmentPropertyBit rawQ_xx_atom1_bit(*rawQ_xx_atom1_tag, system);
        FragmentPropertyBit rawQ_xy_atom1_bit(*rawQ_xy_atom1_tag, system);
        FragmentPropertyBit rawQ_xz_atom1_bit(*rawQ_xz_atom1_tag, system);
        FragmentPropertyBit rawQ_yy_atom1_bit(*rawQ_yy_atom1_tag, system);
        FragmentPropertyBit rawQ_yz_atom1_bit(*rawQ_yz_atom1_tag, system);
        FragmentPropertyBit rawQ_zz_atom1_bit(*rawQ_zz_atom1_tag, system);
        Rank2 ref_traceless_Q_atom1 = {
            -0.2266219752246427, +0.2424125237087984, +0.0063579025387270,
            +0.4386777238466578, +0.1739126712140709, -0.2120557486220150
        };
        Rank2 got_raw_Q_atom1 = {
            rawQ_xx_atom1_bit.value(), rawQ_xy_atom1_bit.value(), rawQ_xz_atom1_bit.value(),
            rawQ_yy_atom1_bit.value(), rawQ_yz_atom1_bit.value(), rawQ_zz_atom1_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom1.xx, 2 * got_raw_Q_atom1.xx - got_raw_Q_atom1.yy - got_raw_Q_atom1.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.xy, 3 * got_raw_Q_atom1.xy, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.xz, 3 * got_raw_Q_atom1.xz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.yy, 2 * got_raw_Q_atom1.yy - got_raw_Q_atom1.xx - got_raw_Q_atom1.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.yz, 3 * got_raw_Q_atom1.yz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom1.zz, 2 * got_raw_Q_atom1.zz - got_raw_Q_atom1.xx - got_raw_Q_atom1.yy, 5e-5);
    }
    // ----------------------------[ ATOM 2 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_zz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xx_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_xy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_xz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_yy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_yz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        auto rawQ_zz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom2_tag, std::make_shared<MullikenTag>(2));
        FragmentPropertyBit rawQ_xx_atom2_bit(*rawQ_xx_atom2_tag, system);
        FragmentPropertyBit rawQ_xy_atom2_bit(*rawQ_xy_atom2_tag, system);
        FragmentPropertyBit rawQ_xz_atom2_bit(*rawQ_xz_atom2_tag, system);
        FragmentPropertyBit rawQ_yy_atom2_bit(*rawQ_yy_atom2_tag, system);
        FragmentPropertyBit rawQ_yz_atom2_bit(*rawQ_yz_atom2_tag, system);
        FragmentPropertyBit rawQ_zz_atom2_bit(*rawQ_zz_atom2_tag, system);
        Rank2 ref_traceless_Q_atom2 = {
            -0.2266214868729835, -0.0739787548522405, -0.2309363523659343,
            -0.0675445194945561, +0.3215590051552104, +0.2941660063675399
        };
        Rank2 got_raw_Q_atom2 = {
            rawQ_xx_atom2_bit.value(), rawQ_xy_atom2_bit.value(), rawQ_xz_atom2_bit.value(),
            rawQ_yy_atom2_bit.value(), rawQ_yz_atom2_bit.value(), rawQ_zz_atom2_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom2.xx, 2 * got_raw_Q_atom2.xx - got_raw_Q_atom2.yy - got_raw_Q_atom2.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.xy, 3 * got_raw_Q_atom2.xy, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.xz, 3 * got_raw_Q_atom2.xz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.yy, 2 * got_raw_Q_atom2.yy - got_raw_Q_atom2.xx - got_raw_Q_atom2.zz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.yz, 3 * got_raw_Q_atom2.yz, 5e-5);
        EXPECT_NEAR(ref_traceless_Q_atom2.zz, 2 * got_raw_Q_atom2.zz - got_raw_Q_atom2.xx - got_raw_Q_atom2.yy, 5e-5);
    }
}

/*
Reference values:
msnamina@starnak:~/el-stat-prop-kit--tests$ cat niedoida-h2o-inp_coords_mulliken.mat_Q0 
      -0.1882177793133865       +0.0835974612504707       -0.1114633250974279       +0.1504036605815791       +0.1930122330175973       +0.0378141187318109 
      -0.2266219752246427       +0.2424125237087984       +0.0063579025387270       +0.4386777238466578       +0.1739126712140709       -0.2120557486220150 
      -0.2266214868729835       -0.0739787548522405       -0.2309363523659343       -0.0675445194945561       +0.3215590051552104       +0.2941660063675399 
 */
