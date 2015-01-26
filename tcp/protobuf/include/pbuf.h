// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pbuf.proto

#ifndef PROTOBUF_pbuf_2eproto__INCLUDED
#define PROTOBUF_pbuf_2eproto__INCLUDED

#define PROTOBUF_HEAD_LENGTH    10

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pbuf_2eproto();
void protobuf_AssignDesc_pbuf_2eproto();
void protobuf_ShutdownFile_pbuf_2eproto();

class pbuf_head;
class pbuf_body;

// ===================================================================

class pbuf_head : public ::google::protobuf::MessageLite {
 public:
  pbuf_head();
  virtual ~pbuf_head();

  pbuf_head(const pbuf_head& from);

  inline pbuf_head& operator=(const pbuf_head& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const pbuf_head& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const pbuf_head* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(pbuf_head* other);

  // implements Message ----------------------------------------------

  pbuf_head* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const pbuf_head& from);
  void MergeFrom(const pbuf_head& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required fixed32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::uint32 type() const;
  inline void set_type(::google::protobuf::uint32 value);

  // required fixed32 body_length = 2;
  inline bool has_body_length() const;
  inline void clear_body_length();
  static const int kBodyLengthFieldNumber = 2;
  inline ::google::protobuf::uint32 body_length() const;
  inline void set_body_length(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:pbuf_head)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_body_length();
  inline void clear_has_body_length();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 type_;
  ::google::protobuf::uint32 body_length_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_pbuf_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_pbuf_2eproto();
  #endif
  friend void protobuf_AssignDesc_pbuf_2eproto();
  friend void protobuf_ShutdownFile_pbuf_2eproto();

  void InitAsDefaultInstance();
  static pbuf_head* default_instance_;
};
// -------------------------------------------------------------------

class pbuf_body : public ::google::protobuf::MessageLite {
 public:
  pbuf_body();
  virtual ~pbuf_body();

  pbuf_body(const pbuf_body& from);

  inline pbuf_body& operator=(const pbuf_body& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::std::string* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const pbuf_body& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const pbuf_body* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(pbuf_body* other);

  // implements Message ----------------------------------------------

  pbuf_body* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const pbuf_body& from);
  void MergeFrom(const pbuf_body& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 reserve = 1;
  inline bool has_reserve() const;
  inline void clear_reserve();
  static const int kReserveFieldNumber = 1;
  inline ::google::protobuf::int32 reserve() const;
  inline void set_reserve(::google::protobuf::int32 value);

  // optional string data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const char* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // optional bytes binary = 3;
  inline bool has_binary() const;
  inline void clear_binary();
  static const int kBinaryFieldNumber = 3;
  inline const ::std::string& binary() const;
  inline void set_binary(const ::std::string& value);
  inline void set_binary(const char* value);
  inline void set_binary(const void* value, size_t size);
  inline ::std::string* mutable_binary();
  inline ::std::string* release_binary();
  inline void set_allocated_binary(::std::string* binary);

  // optional uint32 binary_length = 4;
  inline bool has_binary_length() const;
  inline void clear_binary_length();
  static const int kBinaryLengthFieldNumber = 4;
  inline ::google::protobuf::uint32 binary_length() const;
  inline void set_binary_length(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:pbuf_body)
 private:
  inline void set_has_reserve();
  inline void clear_has_reserve();
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_binary();
  inline void clear_has_binary();
  inline void set_has_binary_length();
  inline void clear_has_binary_length();

  ::std::string _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* data_;
  ::google::protobuf::int32 reserve_;
  ::google::protobuf::uint32 binary_length_;
  ::std::string* binary_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_pbuf_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_pbuf_2eproto();
  #endif
  friend void protobuf_AssignDesc_pbuf_2eproto();
  friend void protobuf_ShutdownFile_pbuf_2eproto();

  void InitAsDefaultInstance();
  static pbuf_body* default_instance_;
};
// ===================================================================


// ===================================================================

// pbuf_head

// required fixed32 type = 1;
inline bool pbuf_head::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void pbuf_head::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void pbuf_head::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void pbuf_head::clear_type() {
  type_ = 0u;
  clear_has_type();
}
inline ::google::protobuf::uint32 pbuf_head::type() const {
  // @@protoc_insertion_point(field_get:pbuf_head.type)
  return type_;
}
inline void pbuf_head::set_type(::google::protobuf::uint32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:pbuf_head.type)
}

// required fixed32 body_length = 2;
inline bool pbuf_head::has_body_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void pbuf_head::set_has_body_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void pbuf_head::clear_has_body_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void pbuf_head::clear_body_length() {
  body_length_ = 0u;
  clear_has_body_length();
}
inline ::google::protobuf::uint32 pbuf_head::body_length() const {
  // @@protoc_insertion_point(field_get:pbuf_head.body_length)
  return body_length_;
}
inline void pbuf_head::set_body_length(::google::protobuf::uint32 value) {
  set_has_body_length();
  body_length_ = value;
  // @@protoc_insertion_point(field_set:pbuf_head.body_length)
}

// -------------------------------------------------------------------

// pbuf_body

// optional int32 reserve = 1;
inline bool pbuf_body::has_reserve() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void pbuf_body::set_has_reserve() {
  _has_bits_[0] |= 0x00000001u;
}
inline void pbuf_body::clear_has_reserve() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void pbuf_body::clear_reserve() {
  reserve_ = 0;
  clear_has_reserve();
}
inline ::google::protobuf::int32 pbuf_body::reserve() const {
  // @@protoc_insertion_point(field_get:pbuf_body.reserve)
  return reserve_;
}
inline void pbuf_body::set_reserve(::google::protobuf::int32 value) {
  set_has_reserve();
  reserve_ = value;
  // @@protoc_insertion_point(field_set:pbuf_body.reserve)
}

// optional string data = 2;
inline bool pbuf_body::has_data() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void pbuf_body::set_has_data() {
  _has_bits_[0] |= 0x00000002u;
}
inline void pbuf_body::clear_has_data() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void pbuf_body::clear_data() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& pbuf_body::data() const {
  // @@protoc_insertion_point(field_get:pbuf_body.data)
  return *data_;
}
inline void pbuf_body::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set:pbuf_body.data)
}
inline void pbuf_body::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set_char:pbuf_body.data)
}
inline void pbuf_body::set_data(const char* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pbuf_body.data)
}
inline ::std::string* pbuf_body::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:pbuf_body.data)
  return data_;
}
inline ::std::string* pbuf_body::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void pbuf_body::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:pbuf_body.data)
}

// optional bytes binary = 3;
inline bool pbuf_body::has_binary() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void pbuf_body::set_has_binary() {
  _has_bits_[0] |= 0x00000004u;
}
inline void pbuf_body::clear_has_binary() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void pbuf_body::clear_binary() {
  if (binary_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    binary_->clear();
  }
  clear_has_binary();
}
inline const ::std::string& pbuf_body::binary() const {
  // @@protoc_insertion_point(field_get:pbuf_body.binary)
  return *binary_;
}
inline void pbuf_body::set_binary(const ::std::string& value) {
  set_has_binary();
  if (binary_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    binary_ = new ::std::string;
  }
  binary_->assign(value);
  // @@protoc_insertion_point(field_set:pbuf_body.binary)
}
inline void pbuf_body::set_binary(const char* value) {
  set_has_binary();
  if (binary_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    binary_ = new ::std::string;
  }
  binary_->assign(value);
  // @@protoc_insertion_point(field_set_char:pbuf_body.binary)
}
inline void pbuf_body::set_binary(const void* value, size_t size) {
  set_has_binary();
  if (binary_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    binary_ = new ::std::string;
  }
  binary_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:pbuf_body.binary)
}
inline ::std::string* pbuf_body::mutable_binary() {
  set_has_binary();
  if (binary_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    binary_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:pbuf_body.binary)
  return binary_;
}
inline ::std::string* pbuf_body::release_binary() {
  clear_has_binary();
  if (binary_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = binary_;
    binary_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void pbuf_body::set_allocated_binary(::std::string* binary) {
  if (binary_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete binary_;
  }
  if (binary) {
    set_has_binary();
    binary_ = binary;
  } else {
    clear_has_binary();
    binary_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:pbuf_body.binary)
}

// optional uint32 binary_length = 4;
inline bool pbuf_body::has_binary_length() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void pbuf_body::set_has_binary_length() {
  _has_bits_[0] |= 0x00000008u;
}
inline void pbuf_body::clear_has_binary_length() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void pbuf_body::clear_binary_length() {
  binary_length_ = 0u;
  clear_has_binary_length();
}
inline ::google::protobuf::uint32 pbuf_body::binary_length() const {
  // @@protoc_insertion_point(field_get:pbuf_body.binary_length)
  return binary_length_;
}
inline void pbuf_body::set_binary_length(::google::protobuf::uint32 value) {
  set_has_binary_length();
  binary_length_ = value;
  // @@protoc_insertion_point(field_set:pbuf_body.binary_length)
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pbuf_2eproto__INCLUDED