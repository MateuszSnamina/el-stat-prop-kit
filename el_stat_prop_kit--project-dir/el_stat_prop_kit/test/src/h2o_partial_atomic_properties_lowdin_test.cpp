#include"gtest/gtest.h"
#include"el_stat_prop_kit/fixed_systems_adapters.hpp"
#include"el_stat_prop_kit/properties_bits.hpp"
#include"el_stat_prop_kit/fragment_property_bit.hpp"

using namespace el_stat_prop;

// *****************************************************************************
// *********    h2o_partial_atomic_properties_lowdin -> charges ****************
// *****************************************************************************

TEST(h2o_partial_atomic_properties_lowdin, charges) {
    auto system = create_system_h2o_hf_sto3g();
    // ----------------------------[ ATOM 0 ]-------------------------------------    
    FragmentPropertyTag q_atom0_tag(std::make_shared<ChargeTag>(), std::make_shared<LowdinTag>(0));
    FragmentPropertyBit q_atom0_bit(q_atom0_tag, system);
    EXPECT_NEAR(+8.0000, q_atom0_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-8.2317, q_atom0_bit.value_electron(), 1e-4);
    EXPECT_NEAR(-0.2317, q_atom0_bit.value(), 1e-4);
    // ----------------------------[ ATOM 1 ]-------------------------------------    
    FragmentPropertyTag q_atom1_tag(std::make_shared<ChargeTag>(), std::make_shared<LowdinTag>(2));
    FragmentPropertyBit q_atom1_bit(q_atom1_tag, system);
    EXPECT_NEAR(+1.0000, q_atom1_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-0.8842, q_atom1_bit.value_electron(), 1e-4);
    EXPECT_NEAR(+0.1158, q_atom1_bit.value(), 1e-4);
    // ----------------------------[ ATOM 2 ]-------------------------------------    
    FragmentPropertyTag q_atom2_tag(std::make_shared<ChargeTag>(), std::make_shared<LowdinTag>(1));
    FragmentPropertyBit q_atom2_bit(q_atom2_tag, system);
    EXPECT_NEAR(+1.0000, q_atom2_bit.value_nuclei(), 1e-4);
    EXPECT_NEAR(-0.8842, q_atom2_bit.value_electron(), 1e-4);
    EXPECT_NEAR(+0.1158, q_atom2_bit.value(), 1e-4);
}

// *****************************************************************************
// *********    h2o_partial_atomic_properties_lowdin -> dipoles_std   **********
// *****************************************************************************

TEST(h2o_partial_atomic_properties_lowdin, dipoles_std) {
    auto system = create_system_h2o_hf_sto3g();
    // ----------------------------[ ATOM 0 ]-------------------------------------    
    auto p_x_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::x, std::make_shared<AtomReferencePointTag>(0));
    auto p_y_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::y, std::make_shared<AtomReferencePointTag>(0));
    auto p_z_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::z, std::make_shared<AtomReferencePointTag>(0));
    auto p_x_atom0_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom0_tag, std::make_shared<LowdinTag>(0));
    auto p_y_atom0_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom0_tag, std::make_shared<LowdinTag>(0));
    auto p_z_atom0_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom0_tag, std::make_shared<LowdinTag>(0));
    FragmentPropertyBit p_x_atom0_bit(*p_x_atom0_tag, system);
    FragmentPropertyBit p_y_atom0_bit(*p_y_atom0_tag, system);
    FragmentPropertyBit p_z_atom0_bit(*p_z_atom0_tag, system);
    EXPECT_NEAR(-0.0000, p_x_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(-0.0000, p_y_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(+0.6175, p_z_atom0_bit.value(), 1e-4);
    // ----------------------------[ ATOM 1 ]-------------------------------------    
    auto p_x_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::x, std::make_shared<AtomReferencePointTag>(1));
    auto p_y_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::y, std::make_shared<AtomReferencePointTag>(1));
    auto p_z_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::z, std::make_shared<AtomReferencePointTag>(1));
    auto p_x_atom1_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom1_tag, std::make_shared<LowdinTag>(1));
    auto p_y_atom1_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom1_tag, std::make_shared<LowdinTag>(1));
    auto p_z_atom1_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom1_tag, std::make_shared<LowdinTag>(1));
    FragmentPropertyBit p_x_atom1_bit(*p_x_atom1_tag, system);
    FragmentPropertyBit p_y_atom1_bit(*p_y_atom1_tag, system);
    FragmentPropertyBit p_z_atom1_bit(*p_z_atom1_tag, system);
    EXPECT_NEAR(+0.1549, p_x_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.0000, p_y_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.1116, p_z_atom1_bit.value(), 1e-4);
    // ----------------------------[ ATOM 2 ]-------------------------------------    
    auto p_x_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::x, std::make_shared<AtomReferencePointTag>(2));
    auto p_y_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::y, std::make_shared<AtomReferencePointTag>(2));
    auto p_z_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::stdOrient, Direction::z, std::make_shared<AtomReferencePointTag>(2));
    auto p_x_atom2_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom2_tag, std::make_shared<LowdinTag>(2));
    auto p_y_atom2_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom2_tag, std::make_shared<LowdinTag>(2));
    auto p_z_atom2_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom2_tag, std::make_shared<LowdinTag>(2));
    FragmentPropertyBit p_x_atom2_bit(*p_x_atom2_tag, system);
    FragmentPropertyBit p_y_atom2_bit(*p_y_atom2_tag, system);
    FragmentPropertyBit p_z_atom2_bit(*p_z_atom2_tag, system);
    EXPECT_NEAR(-0.1549, p_x_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(+0.0000, p_y_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(-0.1116, p_z_atom2_bit.value(), 1e-4);
    /*
    More exact data:
    -0.0000002813283588  -0.0000000000000003  +0.6175302318569673 
    +0.1549051252915766  -0.0000000000000002  -0.1116229483828127 
    -0.1549050061048585  +0.0000000000000003  -0.1116230312324857 
     */
}

// *****************************************************************************
// *********    h2o_partial_atomic_properties_lowdin -> dipoles_inp   ********** 
// *****************************************************************************

TEST(h2o_partial_atomic_properties_lowdin, dipoles_inp) {
    auto system = create_system_h2o_hf_sto3g();
    // ----------------------------[ ATOM 0 ]-------------------------------------    
    auto p_x_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::x, std::make_shared<AtomReferencePointTag>(0));
    auto p_y_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::y, std::make_shared<AtomReferencePointTag>(0));
    auto p_z_ref_atom0_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::z, std::make_shared<AtomReferencePointTag>(0));
    auto p_x_atom0_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom0_tag, std::make_shared<LowdinTag>(0));
    auto p_y_atom0_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom0_tag, std::make_shared<LowdinTag>(0));
    auto p_z_atom0_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom0_tag, std::make_shared<LowdinTag>(0));
    FragmentPropertyBit p_x_atom0_bit(*p_x_atom0_tag, system);
    FragmentPropertyBit p_y_atom0_bit(*p_y_atom0_tag, system);
    FragmentPropertyBit p_z_atom0_bit(*p_z_atom0_tag, system);
    EXPECT_NEAR(+0.3705, p_x_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(+0.2964, p_y_atom0_bit.value(), 1e-4);
    EXPECT_NEAR(-0.3952, p_z_atom0_bit.value(), 1e-4);
    // ----------------------------[ ATOM 1 ]-------------------------------------    
    auto p_x_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::x, std::make_shared<AtomReferencePointTag>(1));
    auto p_y_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::y, std::make_shared<AtomReferencePointTag>(1));
    auto p_z_ref_atom1_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::z, std::make_shared<AtomReferencePointTag>(1));
    auto p_x_atom1_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom1_tag, std::make_shared<LowdinTag>(1));
    auto p_y_atom1_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom1_tag, std::make_shared<LowdinTag>(1));
    auto p_z_atom1_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom1_tag, std::make_shared<LowdinTag>(1));
    FragmentPropertyBit p_x_atom1_bit(*p_x_atom1_tag, system);
    FragmentPropertyBit p_y_atom1_bit(*p_y_atom1_tag, system);
    FragmentPropertyBit p_z_atom1_bit(*p_z_atom1_tag, system);
    EXPECT_NEAR(-0.0670, p_x_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.1775, p_y_atom1_bit.value(), 1e-4);
    EXPECT_NEAR(-0.0215, p_z_atom1_bit.value(), 1e-4);
    // ----------------------------[ ATOM 2 ]-------------------------------------    
    auto p_x_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::x, std::make_shared<AtomReferencePointTag>(2));
    auto p_y_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::y, std::make_shared<AtomReferencePointTag>(2));
    auto p_z_ref_atom2_tag = std::make_shared<DipoleMomentTag>(Orient::inpOrient, Direction::z, std::make_shared<AtomReferencePointTag>(2));
    auto p_x_atom2_tag = std::make_shared<FragmentPropertyTag>(p_x_ref_atom2_tag, std::make_shared<LowdinTag>(2));
    auto p_y_atom2_tag = std::make_shared<FragmentPropertyTag>(p_y_ref_atom2_tag, std::make_shared<LowdinTag>(2));
    auto p_z_atom2_tag = std::make_shared<FragmentPropertyTag>(p_z_ref_atom2_tag, std::make_shared<LowdinTag>(2));
    FragmentPropertyBit p_x_atom2_bit(*p_x_atom2_tag, system);
    FragmentPropertyBit p_y_atom2_bit(*p_y_atom2_tag, system);
    FragmentPropertyBit p_z_atom2_bit(*p_z_atom2_tag, system);
    EXPECT_NEAR(-0.0670, p_x_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(+0.0703, p_y_atom2_bit.value(), 1e-4);
    EXPECT_NEAR(+0.1644, p_z_atom2_bit.value(), 1e-4);
    /*
    More exact data:
    +0.3705204454846074  +0.2964141195866684  -0.3952172305678643 
    -0.0669741385709912  -0.1775028530407905  -0.0215048414085386 
    -0.0669742467873827  +0.0703449229422919  +0.1643814412954571 
     */
}

// *****************************************************************************
// *********  h2o_partial_atomic_properties_lowdin -> quadrupoles_std  *********
// *****************************************************************************

TEST(h2o_partial_atomic_properties_lowdin, quadrupoles_std) {

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
        auto rawQ_xx_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_xy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_xz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_yy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_yz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_zz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        FragmentPropertyBit rawQ_xx_atom0_bit(*rawQ_xx_atom0_tag, system);
        FragmentPropertyBit rawQ_xy_atom0_bit(*rawQ_xy_atom0_tag, system);
        FragmentPropertyBit rawQ_xz_atom0_bit(*rawQ_xz_atom0_tag, system);
        FragmentPropertyBit rawQ_yy_atom0_bit(*rawQ_yy_atom0_tag, system);
        FragmentPropertyBit rawQ_yz_atom0_bit(*rawQ_yz_atom0_tag, system);
        FragmentPropertyBit rawQ_zz_atom0_bit(*rawQ_zz_atom0_tag, system);
        Rank2 ref_traceless_Q_atom0 = {
            +1.4813336010680991, -0.0000000000000014, +0.0000004735143037,
            -1.8006765344997895, -0.0000000000000012, +0.3193429334316906
        };
        Rank2 got_raw_Q_atom0 = {
            rawQ_xx_atom0_bit.value(), rawQ_xy_atom0_bit.value(), rawQ_xz_atom0_bit.value(),
            rawQ_yy_atom0_bit.value(), rawQ_yz_atom0_bit.value(), rawQ_zz_atom0_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom0.xx, 2 * got_raw_Q_atom0.xx - got_raw_Q_atom0.yy - got_raw_Q_atom0.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.xy, 3 * got_raw_Q_atom0.xy, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.xz, 3 * got_raw_Q_atom0.xz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.yy, 2 * got_raw_Q_atom0.yy - got_raw_Q_atom0.xx - got_raw_Q_atom0.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.yz, 3 * got_raw_Q_atom0.yz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.zz, 2 * got_raw_Q_atom0.zz - got_raw_Q_atom0.xx - got_raw_Q_atom0.yy, 1e-4);
    }
    // ----------------------------[ ATOM 1 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_zz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xx_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_xy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_xz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_yy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_yz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_zz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        FragmentPropertyBit rawQ_xx_atom1_bit(*rawQ_xx_atom1_tag, system);
        FragmentPropertyBit rawQ_xy_atom1_bit(*rawQ_xy_atom1_tag, system);
        FragmentPropertyBit rawQ_xz_atom1_bit(*rawQ_xz_atom1_tag, system);
        FragmentPropertyBit rawQ_yy_atom1_bit(*rawQ_yy_atom1_tag, system);
        FragmentPropertyBit rawQ_yz_atom1_bit(*rawQ_yz_atom1_tag, system);
        FragmentPropertyBit rawQ_zz_atom1_bit(*rawQ_zz_atom1_tag, system);
        Rank2 ref_traceless_Q_atom1 = {
            +0.3340003127665063, -0.0000000000000003, -0.6610525662176876,
            -0.4725208592515024, +0.0000000000000003, +0.1385205464849962
        };
        Rank2 got_raw_Q_atom1 = {
            rawQ_xx_atom1_bit.value(), rawQ_xy_atom1_bit.value(), rawQ_xz_atom1_bit.value(),
            rawQ_yy_atom1_bit.value(), rawQ_yz_atom1_bit.value(), rawQ_zz_atom1_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom1.xx, 2 * got_raw_Q_atom1.xx - got_raw_Q_atom1.yy - got_raw_Q_atom1.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.xy, 3 * got_raw_Q_atom1.xy, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.xz, 3 * got_raw_Q_atom1.xz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.yy, 2 * got_raw_Q_atom1.yy - got_raw_Q_atom1.xx - got_raw_Q_atom1.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.yz, 3 * got_raw_Q_atom1.yz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.zz, 2 * got_raw_Q_atom1.zz - got_raw_Q_atom1.xx - got_raw_Q_atom1.yy, 1e-4);
    }
    // ----------------------------[ ATOM 2 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_zz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::stdOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xx_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_xy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_xz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_yy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_yz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_zz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        FragmentPropertyBit rawQ_xx_atom2_bit(*rawQ_xx_atom2_tag, system);
        FragmentPropertyBit rawQ_xy_atom2_bit(*rawQ_xy_atom2_tag, system);
        FragmentPropertyBit rawQ_xz_atom2_bit(*rawQ_xz_atom2_tag, system);
        FragmentPropertyBit rawQ_yy_atom2_bit(*rawQ_yy_atom2_tag, system);
        FragmentPropertyBit rawQ_yz_atom2_bit(*rawQ_yz_atom2_tag, system);
        FragmentPropertyBit rawQ_zz_atom2_bit(*rawQ_zz_atom2_tag, system);
        Rank2 ref_traceless_Q_atom2 = {
            +0.3339993492958821, -0.0000000000000006, +0.6610527309791487,
            -0.4725208651316510, -0.0000000000000005, +0.1385215158357694
        };
        Rank2 got_raw_Q_atom2 = {
            rawQ_xx_atom2_bit.value(), rawQ_xy_atom2_bit.value(), rawQ_xz_atom2_bit.value(),
            rawQ_yy_atom2_bit.value(), rawQ_yz_atom2_bit.value(), rawQ_zz_atom2_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom2.xx, 2 * got_raw_Q_atom2.xx - got_raw_Q_atom2.yy - got_raw_Q_atom2.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.xy, 3 * got_raw_Q_atom2.xy, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.xz, 3 * got_raw_Q_atom2.xz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.yy, 2 * got_raw_Q_atom2.yy - got_raw_Q_atom2.xx - got_raw_Q_atom2.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.yz, 3 * got_raw_Q_atom2.yz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.zz, 2 * got_raw_Q_atom2.zz - got_raw_Q_atom2.xx - got_raw_Q_atom2.yy, 1e-4);
    }
}

/*
Reference values:
msnamina@starnak:~/el-stat-prop-kit--tests$ cat niedoida-h2o-std_coords_lowdin.mat_Q0 
      +1.4813336010680991       -0.0000000000000014       +0.0000004735143037       -1.8006765344997895       -0.0000000000000012       +0.3193429334316906 
      +0.3340003127665063       -0.0000000000000003       -0.6610525662176876       -0.4725208592515024       +0.0000000000000003       +0.1385205464849962 
      +0.3339993492958821       -0.0000000000000006       +0.6610527309791487       -0.4725208651316510       -0.0000000000000005       +0.1385215158357694 
 */

// *****************************************************************************
// *********  h2o_partial_atomic_properties_lowdin -> quadrupoles_inp  *********
// *****************************************************************************

TEST(h2o_partial_atomic_properties_lowdin, quadrupoles_inp) {

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
        auto rawQ_xx_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_xy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_xz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_yy_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_yz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        auto rawQ_zz_atom0_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom0_tag, std::make_shared<LowdinTag>(0));
        FragmentPropertyBit rawQ_xx_atom0_bit(*rawQ_xx_atom0_tag, system);
        FragmentPropertyBit rawQ_xy_atom0_bit(*rawQ_xy_atom0_tag, system);
        FragmentPropertyBit rawQ_xz_atom0_bit(*rawQ_xz_atom0_tag, system);
        FragmentPropertyBit rawQ_yy_atom0_bit(*rawQ_yy_atom0_tag, system);
        FragmentPropertyBit rawQ_yz_atom0_bit(*rawQ_yz_atom0_tag, system);
        FragmentPropertyBit rawQ_zz_atom0_bit(*rawQ_zz_atom0_tag, system);
        Rank2 ref_traceless_Q_atom0 = {
            -1.0374604466409993, +0.6105668511375691, -0.8140889816448847,
            +0.7882576971382367, +0.9241019412821718, +0.2492027495027610
        };
        Rank2 got_raw_Q_atom0 = {
            rawQ_xx_atom0_bit.value(), rawQ_xy_atom0_bit.value(), rawQ_xz_atom0_bit.value(),
            rawQ_yy_atom0_bit.value(), rawQ_yz_atom0_bit.value(), rawQ_zz_atom0_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom0.xx, 2 * got_raw_Q_atom0.xx - got_raw_Q_atom0.yy - got_raw_Q_atom0.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.xy, 3 * got_raw_Q_atom0.xy, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.xz, 3 * got_raw_Q_atom0.xz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.yy, 2 * got_raw_Q_atom0.yy - got_raw_Q_atom0.xx - got_raw_Q_atom0.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.yz, 3 * got_raw_Q_atom0.yz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom0.zz, 2 * got_raw_Q_atom0.zz - got_raw_Q_atom0.xx - got_raw_Q_atom0.yy, 1e-4);
    }
    // ----------------------------[ ATOM 1 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yy_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_yz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_zz_ref_atom1_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(1));
        auto rawQ_xx_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_xy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_xz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_yy_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_yz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        auto rawQ_zz_atom1_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom1_tag, std::make_shared<LowdinTag>(1));
        FragmentPropertyBit rawQ_xx_atom1_bit(*rawQ_xx_atom1_tag, system);
        FragmentPropertyBit rawQ_xy_atom1_bit(*rawQ_xy_atom1_tag, system);
        FragmentPropertyBit rawQ_xz_atom1_bit(*rawQ_xz_atom1_tag, system);
        FragmentPropertyBit rawQ_yy_atom1_bit(*rawQ_yy_atom1_tag, system);
        FragmentPropertyBit rawQ_yz_atom1_bit(*rawQ_yz_atom1_tag, system);
        FragmentPropertyBit rawQ_zz_atom1_bit(*rawQ_zz_atom1_tag, system);
        Rank2 ref_traceless_Q_atom1 = {
            -0.2525434072109989, +0.4932872553278157, +0.0033406325433778,
            +0.6921222594580343, +0.0513459836891341, -0.4395788522470356
        };
        Rank2 got_raw_Q_atom1 = {
            rawQ_xx_atom1_bit.value(), rawQ_xy_atom1_bit.value(), rawQ_xz_atom1_bit.value(),
            rawQ_yy_atom1_bit.value(), rawQ_yz_atom1_bit.value(), rawQ_zz_atom1_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom1.xx, 2 * got_raw_Q_atom1.xx - got_raw_Q_atom1.yy - got_raw_Q_atom1.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.xy, 3 * got_raw_Q_atom1.xy, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.xz, 3 * got_raw_Q_atom1.xz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.yy, 2 * got_raw_Q_atom1.yy - got_raw_Q_atom1.xx - got_raw_Q_atom1.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.yz, 3 * got_raw_Q_atom1.yz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom1.zz, 2 * got_raw_Q_atom1.zz - got_raw_Q_atom1.xx - got_raw_Q_atom1.yy, 1e-4);
    }
    // ----------------------------[ ATOM 2 ]-------------------------------------
    {
        auto rawQ_xx_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xx, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::xz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yy_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yy, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_yz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::yz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_zz_ref_atom2_tag = std::make_shared<QuadrupoleMomentTag>(Orient::inpOrient, Direction2::zz, std::make_shared<AtomReferencePointTag>(2));
        auto rawQ_xx_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xx_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_xy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xy_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_xz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_xz_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_yy_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yy_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_yz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_yz_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        auto rawQ_zz_atom2_tag = std::make_shared<FragmentPropertyTag>(rawQ_zz_ref_atom2_tag, std::make_shared<LowdinTag>(2));
        FragmentPropertyBit rawQ_xx_atom2_bit(*rawQ_xx_atom2_tag, system);
        FragmentPropertyBit rawQ_xy_atom2_bit(*rawQ_xy_atom2_tag, system);
        FragmentPropertyBit rawQ_xz_atom2_bit(*rawQ_xz_atom2_tag, system);
        FragmentPropertyBit rawQ_yy_atom2_bit(*rawQ_yy_atom2_tag, system);
        FragmentPropertyBit rawQ_yz_atom2_bit(*rawQ_yz_atom2_tag, system);
        FragmentPropertyBit rawQ_zz_atom2_bit(*rawQ_zz_atom2_tag, system);
        Rank2 ref_traceless_Q_atom2 = {
            -0.2525426557105318, -0.1413263395682607, -0.4726215297023016,
            -0.3232519879234705, +0.3474933645118274, +0.5757946436340025
        };
        Rank2 got_raw_Q_atom2 = {
            rawQ_xx_atom2_bit.value(), rawQ_xy_atom2_bit.value(), rawQ_xz_atom2_bit.value(),
            rawQ_yy_atom2_bit.value(), rawQ_yz_atom2_bit.value(), rawQ_zz_atom2_bit.value()
        };
        EXPECT_NEAR(ref_traceless_Q_atom2.xx, 2 * got_raw_Q_atom2.xx - got_raw_Q_atom2.yy - got_raw_Q_atom2.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.xy, 3 * got_raw_Q_atom2.xy, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.xz, 3 * got_raw_Q_atom2.xz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.yy, 2 * got_raw_Q_atom2.yy - got_raw_Q_atom2.xx - got_raw_Q_atom2.zz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.yz, 3 * got_raw_Q_atom2.yz, 1e-4);
        EXPECT_NEAR(ref_traceless_Q_atom2.zz, 2 * got_raw_Q_atom2.zz - got_raw_Q_atom2.xx - got_raw_Q_atom2.yy, 1e-4);
    }
}

/*
Reference values:
msnamina@starnak:~/el-stat-prop-kit--tests$ cat niedoida-h2o-inp_coords_lowdin.mat_Q0 
      -1.0374604466409993       +0.6105668511375691       -0.8140889816448847       +0.7882576971382367       +0.9241019412821718       +0.2492027495027610 
      -0.2525434072109989       +0.4932872553278157       +0.0033406325433778       +0.6921222594580343       +0.0513459836891341       -0.4395788522470356 
      -0.2525426557105318       -0.1413263395682607       -0.4726215297023016       -0.3232519879234705       +0.3474933645118274       +0.5757946436340025 

 */