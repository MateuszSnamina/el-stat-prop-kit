#ifndef REFERENCE_POINTS_TAGS_HPP
#define REFERENCE_POINTS_TAGS_HPP

#include<string>
#include<memory>

#include"el_stat_prop_kit/using_self_type_macro.hpp"
#include"el_stat_prop_kit/tag_abstract_base.hpp"

namespace el_stat_prop {

    // *****************************************************************************
    // ***********  ReferencePointTag -  abstract base class: **********************
    // *****************************************************************************

    class ReferencePointTag : public TagAbstractBase {
    public:
        USING_SELF_TYPE
    };

    // *****************************************************************************
    // ***************  ReferencePointTag - concrete classes: **********************
    // *****************************************************************************

    class StdOrientReferencePointTag : public ReferencePointTag {
    public:
        USING_SELF_TYPE
        std::string to_string() const override;
        static auto from_string(const std::string& s) -> std::shared_ptr<type>;
    };

    // *****************************************************************************

    class InpOrientReferencePointTag : public ReferencePointTag {
    public:
        USING_SELF_TYPE
        std::string to_string() const override;
        static auto from_string(const std::string& s) -> std::shared_ptr<type>;
    };

    // *****************************************************************************

    class AtomReferencePointTag : public ReferencePointTag {
    public:
        USING_SELF_TYPE
        explicit AtomReferencePointTag(unsigned atom);
        std::string to_string() const override;
        static auto from_string(const std::string& s) -> std::shared_ptr<type>;
    public:
        const unsigned m_atom;
    };

} // end of namespace el_stat_prop

#endif

