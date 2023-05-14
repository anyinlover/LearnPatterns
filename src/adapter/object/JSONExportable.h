#pragma once

class JSONExportable {
public:
  virtual ~JSONExportable() = default;

  virtual void exportToJSON() const = 0;
};