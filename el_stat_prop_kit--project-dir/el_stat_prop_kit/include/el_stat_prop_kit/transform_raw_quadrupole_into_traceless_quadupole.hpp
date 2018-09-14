#ifndef TRANSFORM_RAW_QUADRUPOLE_INTO_TRACELESS_QUADUPOLE_HPP
#define TRANSFORM_RAW_QUADRUPOLE_INTO_TRACELESS_QUADUPOLE_HPP

#include<armadillo>

namespace el_stat_prop {

    /*
     * Transform transform raw quadrupole into traceless quadupole
     * The quadupoles are represented as arma::vec6
     * using conventions vec = {Q_xx, Q_xy, Q_xz, Q_yy, Q_yz, Q_zz}
     */
    arma::vec6 transform_raw_quadrupole_into_traceless_quadupole(const arma::vec6& raw);

} // end of namespace el_stat_prop

#endif