#pragma once

/// this .h file is for codes I didn't get and I wanna ask about them later (TODO)

enum class Type { A, B };
class ATypeClass {};
class BTypeClass {};
template<Type t> struct TypeTraits;
template<> struct TypeTraits<Type::A> { using Class = ATypeClass; }
template<> struct TypeTraits<Type::B> { using Class = BTypeClass; }