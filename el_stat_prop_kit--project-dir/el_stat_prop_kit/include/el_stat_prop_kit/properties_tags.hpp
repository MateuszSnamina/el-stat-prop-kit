#ifndef ELECTRON_DENSITY_PROPERTIES_TAGS_HPP
#define ELECTRON_DENSITY_PROPERTIES_TAGS_HPP

#include<string>
#include<memory>

#include<el_stat_prop_kit/tag_abstract_base.hpp>
#include<el_stat_prop_kit/using_self_type_macro.hpp>
#include<el_stat_prop_kit/direction_enum.hpp>
#include<el_stat_prop_kit/reference_points_tags.hpp>

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ElectronDensityPropertyTag - abstract base class: **************
    // *****************************************************************************

    class PropertyTag : public TagAbstractBase {
    public:
        USING_SELF_TYPE
    };

    // *****************************************************************************
    // ***************              PropertyTag - concrete classes:    *************
    // *****************************************************************************

    class ChargeTag : public PropertyTag {
    public:
        USING_SELF_TYPE
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    };

    // *****************************************************************************

    class DipoleMomentTag : public PropertyTag {
    public:
        USING_SELF_TYPE
        DipoleMomentTag(Orient, Direction,
                std::shared_ptr<ReferencePointTag>);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    public:
        const Orient m_orient;
        const Direction m_direction;
        const std::shared_ptr<ReferencePointTag> m_reference_point;
    };

    // *****************************************************************************

    class QuadrupoleMomentTag : public PropertyTag {
    public:
        USING_SELF_TYPE
        QuadrupoleMomentTag(Orient, Direction2,
                std::shared_ptr<ReferencePointTag>);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    public:
        const Orient m_orient;
        const Direction2 m_direction;
        const std::shared_ptr<ReferencePointTag> m_reference_point;
    };

} // end of namespace el_stat_prop

#endif
