#include "graphicselement.h"
#include "parser.h"

namespace lunasvg {

GraphicsElement::GraphicsElement(const ElementID id)
    : StyledElement(id)
{
}

Transform GraphicsElement::transform() const
{
    auto& value = get(PropertyID::Transform);
    return Parser::parseTransform(value);
}

} // namespace lunasvg
