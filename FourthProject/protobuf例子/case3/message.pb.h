// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef PROTOBUF_message_2eproto__INCLUDED
#define PROTOBUF_message_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
class log_packet;
class log_packetDefaultTypeInternal;
extern log_packetDefaultTypeInternal _log_packet_default_instance_;

namespace protobuf_message_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_message_2eproto

// ===================================================================

class log_packet : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:log_packet) */ {
 public:
  log_packet();
  virtual ~log_packet();

  log_packet(const log_packet& from);

  inline log_packet& operator=(const log_packet& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const log_packet& default_instance();

  static inline const log_packet* internal_default_instance() {
    return reinterpret_cast<const log_packet*>(
               &_log_packet_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(log_packet* other);

  // implements Message ----------------------------------------------

  inline log_packet* New() const PROTOBUF_FINAL { return New(NULL); }

  log_packet* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const log_packet& from);
  void MergeFrom(const log_packet& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(log_packet* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string str = 2;
  bool has_str() const;
  void clear_str();
  static const int kStrFieldNumber = 2;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  #if LANG_CXX11
  void set_str(::std::string&& value);
  #endif
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // required int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:log_packet)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_str();
  void clear_has_str();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  ::google::protobuf::int32 id_;
  friend struct protobuf_message_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// log_packet

// required int32 id = 1;
inline bool log_packet::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void log_packet::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void log_packet::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void log_packet::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 log_packet::id() const {
  // @@protoc_insertion_point(field_get:log_packet.id)
  return id_;
}
inline void log_packet::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:log_packet.id)
}

// required string str = 2;
inline bool log_packet::has_str() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void log_packet::set_has_str() {
  _has_bits_[0] |= 0x00000001u;
}
inline void log_packet::clear_has_str() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void log_packet::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_str();
}
inline const ::std::string& log_packet::str() const {
  // @@protoc_insertion_point(field_get:log_packet.str)
  return str_.GetNoArena();
}
inline void log_packet::set_str(const ::std::string& value) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:log_packet.str)
}
#if LANG_CXX11
inline void log_packet::set_str(::std::string&& value) {
  set_has_str();
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:log_packet.str)
}
#endif
inline void log_packet::set_str(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:log_packet.str)
}
inline void log_packet::set_str(const char* value, size_t size) {
  set_has_str();
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:log_packet.str)
}
inline ::std::string* log_packet::mutable_str() {
  set_has_str();
  // @@protoc_insertion_point(field_mutable:log_packet.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* log_packet::release_str() {
  // @@protoc_insertion_point(field_release:log_packet.str)
  clear_has_str();
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void log_packet::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    set_has_str();
  } else {
    clear_has_str();
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:log_packet.str)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2eproto__INCLUDED
