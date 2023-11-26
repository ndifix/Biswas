#pragma once

#include <cstdint>
#include <memory>

template<class T>
class Nullable : protected std::unique_ptr<T> {
private:
public:
    explicit operator bool() const noexcept { return std::unique_ptr<T>::operator bool(); }
    T* get () const noexcept { return std::unique_ptr<T>::get(); }

    T
    operator= (
        const T val
        )
    {
        if (this->operator bool()) {
            *this->get() = val;
        } else {
            this->reset(new T(val));
        }

        return val;
    };
};

class Emu {
private:
    int64_t val;
public:
    inline explicit Emu(int64_t value) : val(value) {};
    operator int64_t() const noexcept { return this->val; };
};
inline Emu EmuFromMm (int val) { return Emu(static_cast<int64_t>(val) * 36000); }

// using HexBinaryValue = uint_fast32_t;
class HexBinaryValue {
private:
    uint32_t val;
public:
    HexBinaryValue(const uint32_t value) : val(value) {};

    inline uint32_t operator=(const uint32_t value) noexcept { return this->val = value;};
    operator uint32_t() const noexcept { return this->val; };
};

enum ColorSchemeIndexValues {
    Accent1           = 4,
    Accent2           = 5,
    Accent3           = 6,
    Accent4           = 7,
    Accent5           = 8,
    Accent6           = 9,
    Dark1             = 0,
    Dark2             = 2,
    FollowedHyperlink = 11,
    Hyperlink         = 10,
    Light1            = 1,
    Light2            = 3,
};

enum class SchemeColorValues {
    Accent1           = 4,
    Accent2           = 5,
    Accent3           = 6,
    Accent4           = 7,
    Accent5           = 8,
    Accent6           = 9,
    Background1       = 0,
    Background2       = 2,
    Dark1             = 13,
    Dark2             = 15,
    FollowedHyperlink = 11,
    Hyperlink         = 10,
    Light1            = 14,
    Light2            = 16,
    PhColor           = 12,
    Text1             = 1,
    Text2             = 3,
};

enum class SystemColorValues {
    ActiveBorder            = 10,
    ActiveCaption           = 2,
    ApplicationWorkspace    = 12,
    Background              = 1,
    ButtonFace              = 15,
    ButtonHighlight         = 20,
    ButtonShadow            = 16,
    ButtonText              = 18,
    CaptionText             = 9,
    GradientActiveCaption   = 26,
    GradientInactiveCaption = 27,
    GrayText                = 17,
    Highlight               = 13,
    HighlightText           = 14,
    HotLight                = 25,
    InactiveBorder          = 11,
    InactiveCaption         = 3,
    InactiveCaptionText     = 19,
    InfoBack                = 24,
    InfoText                = 23,
    Menu                    = 4,
    MenuBar                 = 29,
    MenuHighlight           = 28,
    MenuText                = 7,
    ScrollBar               = 0,
    ThreeDDarkShadow        = 21,
    ThreeDLight             = 22,
    Window                  = 5,
    WindowFrame             = 6,
    WindowText              = 8,
};

enum class ShapeTypeValues {
    Rectangle                  = 4,
};
