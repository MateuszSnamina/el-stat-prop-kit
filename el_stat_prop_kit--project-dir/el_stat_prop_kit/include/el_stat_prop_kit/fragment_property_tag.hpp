#ifndef ELECTRON_DENSITY_FRAGMENT_PROPERTY_TAG
#define ELECTRON_DENSITY_FRAGMENT_PROPERTY_TAG

#include<string>
#include<memory>

#include"el_stat_prop_kit/using_self_type_macro.hpp"
#include"el_stat_prop_kit/tag_abstract_base.hpp"
#include"el_stat_prop_kit/properties_tags.hpp"
#include"el_stat_prop_kit/fragments_tags.hpp"

namespace el_stat_prop {

    class FragmentPropertyTag : public PropertyTag {
    public:
        USING_SELF_TYPE
        FragmentPropertyTag(
                const std::shared_ptr<PropertyTag> property_tag,
                const std::shared_ptr<FragmentTag> fragment_tag);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    public:
        const std::shared_ptr<PropertyTag> m_property_tag;
        const std::shared_ptr<FragmentTag> m_fragment_tag;
    };

} // end of namespace el_stat_prop

#endif
