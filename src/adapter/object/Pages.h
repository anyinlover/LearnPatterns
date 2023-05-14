#pragma once

#include "Document.h"
#include "OpenPages.h"
#include "Serializable.h"
class Pages : public Document {
public:
  void exportToJSON() const override { exportToJSONFormat(pages); }

  void serialize(ByteStream &bs) const override {}

private:
  OpenPages pages;
};