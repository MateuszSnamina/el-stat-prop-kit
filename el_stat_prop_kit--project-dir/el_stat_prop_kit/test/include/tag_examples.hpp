#ifndef TAG_EXAMPLES_HPP
#define TAG_EXAMPLES_HPP

#include<el_stat_prop_kit/tag_abstract_base.hpp>

/*
 * <Tags hierarchy used in the test>
 * 
 *          TagAbstractBase
 *                 ^
 *                 |
 *           AnimalTagBase
 *                 ^
 *                 |
 *       /---------+---------\ 
 *       |         |         | 
 *    CatTag    DogTag    AntTag
 * 
 */

// *****************************************************************************


struct AnimalTagBase : public el_stat_prop::TagAbstractBase {
public:
    AnimalTagBase(const std::string & descritpion);
    virtual ~AnimalTagBase() = 0;
    const std::string m_descritpion;
    std::string to_string() const override;
};

inline AnimalTagBase::AnimalTagBase(const std::string & descritpion) :
m_descritpion(descritpion) {
}

inline AnimalTagBase::~AnimalTagBase() = default;

inline std::string AnimalTagBase::to_string() const {
    return m_descritpion;
}

// *****************************************************************************

struct CatTag : AnimalTagBase {
    CatTag(const std::string & descritpion);
    static std::shared_ptr<CatTag> from_string(const std::string&);
};

inline CatTag::CatTag(const std::string & descritpion) :
AnimalTagBase(descritpion + "--ctorCat") {
}

inline std::shared_ptr<CatTag> CatTag::from_string(const std::string& str) {
    if (str == "Cat")
        return std::make_shared<CatTag>(str);
    return nullptr;
}

// *****************************************************************************

struct DogTag : AnimalTagBase {
    DogTag(const std::string & descritpion);
    static std::shared_ptr<DogTag> from_string(const std::string&);
};

inline DogTag::DogTag(const std::string & descritpion) :
AnimalTagBase(descritpion + "--ctorDog") {
}

inline std::shared_ptr<DogTag> DogTag::from_string(const std::string&str) {
    if (str == "Dog")
        return std::make_shared<DogTag>(str);
    return nullptr;
}

// *****************************************************************************

struct AntTag : AnimalTagBase {
    AntTag(const std::string & descritpion);
    static std::shared_ptr<AntTag> from_string(const std::string& str);

};

inline AntTag::AntTag(const std::string & descritpion) :
AnimalTagBase(descritpion + "--ctorAnt") {
}

inline std::shared_ptr<AntTag> AntTag::from_string(const std::string& str) {
    if (str == "Ant_happy")
        return std::make_shared<AntTag>("HappyAnt");
    if (str == "Ant_unhappy")
        return std::make_shared<AntTag>("SadAnt");
    return nullptr;
}

#endif
