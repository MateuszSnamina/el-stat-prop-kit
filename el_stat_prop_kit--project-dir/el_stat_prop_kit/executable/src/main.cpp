#include<iostream>
#include<iomanip>
#include<vector>
//#include<memory>
//#include<stdexcept>
#include<algorithm>
#include<boost/tokenizer.hpp>
#include<boost/algorithm/string.hpp>

// tags-headers:
#include"el_stat_prop_kit/properties_tags.hpp"
#include"el_stat_prop_kit/fragment_property_tag.hpp"
#include"el_stat_prop_kit/multiplied_property_tag.hpp"
#include"el_stat_prop_kit/tag_from_string.hpp"
// bits-headers:
#include"el_stat_prop_kit/properties_bits.hpp"
#include"el_stat_prop_kit/fragment_property_bit.hpp"
#include"el_stat_prop_kit/multiplied_property_bit.hpp"
#include"el_stat_prop_kit/bit_from_tag.hpp"
// bit-shortcut-header:
#include<el_stat_prop_kit/popular_bits_lists.hpp>
// adapter-headers:
#include"el_stat_prop_kit/adapter.hpp"
#include"el_stat_prop_kit/fixed_systems_adapters.hpp"
// miscellaneous:
#include<el_stat_prop_kit/transform_raw_quadrupole_into_traceless_quadupole.hpp>


using namespace el_stat_prop;

std::shared_ptr<TagAbstractBase>
token_to_tag(const std::string& token) {
    std::cout << "token  : " << token << std::endl;
    using PossibleTagsList = PossibleTagList<
            ChargeTag,
            DipoleMomentTag,
            QuadrupoleMomentTag,
            FragmentPropertyTag,
            MultipliedPropertyTag>;
    auto tag = tag_from_string<PropertyTag, PossibleTagsList>(token);
    if (!tag) {
        const std::string message = "Fail to convert token \"" + token + "\" into tag object.\n";
        throw std::runtime_error(message);
    }
    std::cout << "tag    : " << tag->to_string() << std::endl;
    return tag;
}

std::vector<std::shared_ptr<TagAbstractBase>>
tokens_to_tags(const std::vector<std::string> & tokens) {
    std::vector<std::shared_ptr < TagAbstractBase>> result;
    result.reserve(tokens.size());
    for (const auto& token : tokens) {
        auto tag = token_to_tag(token);
        result.push_back(tag);
    }
    return result;
}

std::vector<std::string> str_to_tokens(const std::string& str) {
    std::vector<std::string> tokens;
    typedef boost::tokenizer<boost::char_separator<char> > tokenizer_t;
    boost::char_separator<char> sep(",");
    tokenizer_t tokenizer(str, sep);
    for (auto tok_iter = tokenizer.begin(); tok_iter != tokenizer.end(); ++tok_iter) {
        std::string token = *tok_iter;
        boost::trim(token);
        tokens.push_back(token);
    }
    return tokens;
}

template<class InputIt>
void bits_ptr_container_print(InputIt first, InputIt last) {
    for (; first != last; ++first) {
        std::cout //<< std::setw(40) << tag->to_string() << " : "
                << "Nuc= " << std::setw(12) << (*first)->value_nuclei() << ", "
                << "Ele= " << std::setw(12) << (*first)->value_electron() << ", "
                << "Total= " << std::setw(12) << (*first)->value()
                << std::endl;
    }
}

int main(int argc, char **argv) {
    std::cout << std::string(100, '*') << std::endl;

    //std::string input_str = "q, p_stdOrient::x->std, p_stdOrient::y->std,p_stdOrient::z->std";
    //std::string input_str = "q, p_inpOrient::x->inp, p_inpOrient::y->inp,p_inpOrient::z->inp";
    //std::string input_str = "q@0M, q@1M, q@2M";
    //std::string input_str = "q@0L, q@1L, q@2L";    
    //std::string input_str = "q@0M,p_inpOrient::x->Atom0@0L, p_inpOrient::y->Atom0@0L, p_inpOrient::z->Atom0@0L";   //atom 0    
    //std::string input_str = "q@1M,p_inpOrient::x->Atom1@1M, p_inpOrient::y->Atom1@1M, p_inpOrient::z->Atom1@1M";   //atom 1
    //std::string input_str = "q@2M,p_inpOrient::x->Atom2@2M, p_inpOrient::y->Atom2@2M, p_inpOrient::z->Atom2@2M";   //atom 2

    //std::string input_str = "Q_stdOrient::xx->std, Q_stdOrient::yy->std, Q_stdOrient::zz->std,"
    //                        "Q_stdOrient::xy->std, Q_stdOrient::xz->std, Q_stdOrient::yz->std";    

    //std::string input_str = "Q_inpOrient::xx->inp, Q_inpOrient::yy->inp, Q_inpOrient::zz->inp,"
    //                        "Q_inpOrient::xy->inp, Q_inpOrient::xz->inp, Q_inpOrient::yz->inp";    

    //    std::string input_str = "Q_inpOrient::xx->Atom0@0M, Q_inpOrient::yy->Atom0@0M, Q_inpOrient::zz->Atom0@0M,"
    //            "Q_inpOrient::xy->Atom0@0M, Q_inpOrient::xz->Atom0@0M, Q_inpOrient::yz->Atom0@0M";

    std::cout << ">> MANUAL:" << std::endl;

    std::string input_str = "p_stdOrient::y->std, 10*p_stdOrient::y->std";

    // strings-to-tags:
    auto tokens = str_to_tokens(input_str);
    // tags-to-operators:
    auto tags = tokens_to_tags(tokens);
    // system creation:
    //SimpleSystemAdapter system;
    auto system = create_system_h2o_hf_sto3g();
    // tags-to-bits:
    std::cout << std::string(100, '*') << std::endl;
    for (const auto& tag : tags) {
        using BitsList = PossibleBitsList<
                ChargeBit,
                DipoleMomentBit,
                QuadrupoleMomentBit,
                FragmentPropertyBit,
                MultipliedPropertyBit>;
        auto bit = bit_from_tag<PropertyBit, BitsList>(*tag, system);
        if (!bit)
            std::cout << "nie udalo sie stworzyc bitu" << std::endl;

        std::cout << std::setw(40) << tag->to_string() << " : "
                << "Nuc= " << std::setw(12) << bit->value_nuclei() << ", "
                << "Ele= " << std::setw(12) << bit->value_electron() << ", "
                << "Total= " << std::setw(12) << bit->value()
                << std::endl;
    }

    std::cout << std::endl;
    std::cout << ">> AUTOMATIC:" << std::endl;
    if (true) {
        const auto bits = el_stat_prop::atomic_partial_lowdin_dipoles_bits_in_inp_frame(system);
        const auto values = el_stat_prop::transform_bit_collection_to_values(bits.begin(), bits.end());
        const arma::mat value_electrons(values.value_electron().memptr(), 3u, system.n_atoms());
        value_electrons.print("dipoles");
        std::cout << std::endl;
    }
    std::cout << std::endl;
    if (true) {
        const auto bits = el_stat_prop::atomic_partial_lowdin_quadrupoles_bits_in_inp_frame(system);
        const auto values = el_stat_prop::transform_bit_collection_to_values(bits.begin(), bits.end());
        const arma::mat value_electrons(values.value_electron().memptr(), 6u, system.n_atoms());
        value_electrons.print("quadrupoles");
        std::cout << std::endl;
    }
    
    
    if (true) {
        const auto bits = el_stat_prop::bits_for_pi10N_lowdin_in_inp_frame(system);
        const auto values = el_stat_prop::transform_bit_collection_to_values(bits.begin(), bits.end());
        const arma::vec value_electrons = values.value_electron();
        value_electrons.print("pi10N");
        std::cout << std::endl;
    }




}