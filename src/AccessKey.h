#pragma once
namespace design {
    template<typename T>
    class AccessKey {
        friend T;
        AccessKey() {}
    };
}