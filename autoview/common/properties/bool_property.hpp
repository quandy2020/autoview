/******************************************************************************
 * Copyright 2025 The Openbot Authors (duyongquan)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *****************************************************************************/

#pragma once

#include "autoview/common/properties/property.hpp"

namespace autoview {
namespace common {
namespace properties {

/// Property for boolean values.
class BoolProperty : public Property
{
  Q_OBJECT
public:
  explicit BoolProperty(
    const QString& name = QString(),
    bool default_value = false,
    const QString& description = QString(),
    Property* parent = nullptr,
    const char* changed_slot = nullptr,
    QObject* receiver = nullptr);
  ~BoolProperty() override;
};

}  // namespace properties
}  // namespace common
}  // namespace autoview
