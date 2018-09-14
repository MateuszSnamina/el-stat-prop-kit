#ifndef MULTIPLIED_TAG_HPP
#define MULTIPLIED_TAG_HPP

#include"el_stat_prop_kit/using_self_type_macro.hpp"
#include"el_stat_prop_kit/tag_abstract_base.hpp"
#include"el_stat_prop_kit/properties_tags.hpp"

namespace el_stat_prop {

    class MultipliedPropertyTag : public PropertyTag {
    public:
        USING_SELF_TYPE
        MultipliedPropertyTag(
                const std::shared_ptr<PropertyTag> unit_property_tag,
                double factor);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    public:
        const std::shared_ptr<PropertyTag> m_unit_property_tag;
        const double m_factor;
    };

} // end of namespace el_stat_prop

#endif