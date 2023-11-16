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
