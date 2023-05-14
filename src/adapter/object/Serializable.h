#pragma once
class ByteStream {};
class Serializable {
public:
  virtual ~Serializable() = default;
  virtual void serialize(ByteStream &bs) const = 0;
};