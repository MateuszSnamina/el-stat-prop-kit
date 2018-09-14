#ifndef ELECTRON_DENSITY_FRAGMENTS_TAGS
#define ELECTRON_DENSITY_FRAGMENTS_TAGS

#include<string>
#include<memory>

#include"el_stat_prop_kit/using_self_type_macro.hpp"
#include"el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ElectronDensityFragmentTag - abstract base class: **************
    // *****************************************************************************

    class FragmentTag : public TagAbstractBase {
    public:
        USING_SELF_TYPE
    };

    // *****************************************************************************
    // ***************  ElectronDensityFragmentTag - concrete classes: *************
    // *****************************************************************************

    class MullikenTag : public FragmentTag {
    public:
        USING_SELF_TYPE
        explicit MullikenTag(unsigned atom);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    public:
        const unsigned m_atom;
    };

    // *****************************************************************************

    class LowdinTag : public FragmentTag {
    public:
        USING_SELF_TYPE
        explicit LowdinTag(unsigned atom);
        std::string to_string() const override;
        static auto from_string(const std::string&) -> std::shared_ptr<type>;
    public:
        const unsigned m_atom;
    };

} // end of namespace el_stat_prop

#endif
