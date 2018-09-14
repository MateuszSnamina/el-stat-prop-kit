#ifndef BIT_EXAMPLES_HPP
#define BIT_EXAMPLES_HPP

#include<tag_examples.hpp>

// *****************************************************************************

/*
 * <Tags hierarchy used in the test>
 * 
 *      BigAnimalBitBase
 *             ^
 *             |
 *       /-----+-----\
 *       |           |
 *    CatBit      DogBit
 * 
 */

// *****************************************************************************

class BigAnimalBitBase {
public:
    virtual ~BigAnimalBitBase() = 0;
};

inline BigAnimalBitBase::~BigAnimalBitBase() = default;

// *****************************************************************************

class CatBit : public BigAnimalBitBase {
public:
    using tag_t = CatTag;
    CatBit(tag_t, const SystemAdapterAbstractBase&);
    tag_t m_tag;
};

inline CatBit::CatBit(tag_t tag, const SystemAdapterAbstractBase&) :
m_tag(tag) {
}

// *****************************************************************************

class DogBit : public BigAnimalBitBase {
public:
    using tag_t = DogTag;
    DogBit(tag_t, const SystemAdapterAbstractBase&);
    tag_t m_tag;
};

inline DogBit::DogBit(tag_t tag, const SystemAdapterAbstractBase&) :
m_tag(tag) {
}

#endif
