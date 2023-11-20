#pragma once

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
