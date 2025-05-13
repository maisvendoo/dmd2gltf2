#ifndef     COMMAND_LINE_H
#define     COMMAND_LINE_H

#include    <string>

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
template <class T>
struct option_t
{
private:

    T       value;

public:

    bool    is_present;

    option_t()
        : value(T())
        , is_present(false)
    {

    }

    T get()
    {
        if (is_present)
            return value;

        return T();
    }

    void operator=(T value)
    {
        this->value = value;
    }
};

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
struct cmd_line_t
{
    option_t<std::string> input_route_path;
    option_t<std::string> output_route_path;

    option_t<std::string> input_model_path;
    option_t<std::string> input_texture_path;

    option_t<std::string> output_model_path;
};

#endif // COMMAND_LINE_H
