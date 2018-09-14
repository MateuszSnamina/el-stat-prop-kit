#ifndef TAG_ABSTRACT_BASE_HPP
#define TAG_ABSTRACT_BASE_HPP

#include<string>
#include<el_stat_prop_kit/using_self_type_macro.hpp>

namespace el_stat_prop {

    class TagAbstractBase {
    public:
        USING_SELF_TYPE
        virtual std::string to_string() const = 0;
        virtual ~TagAbstractBase() = 0;
    };

    inline TagAbstractBase::~TagAbstractBase() = default;

} // end of namespace el_stat_prop

#endif



