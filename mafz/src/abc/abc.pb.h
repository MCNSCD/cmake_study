// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: abc.proto

#ifndef PROTOBUF_INCLUDED_abc_2eproto
#define PROTOBUF_INCLUDED_abc_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_abc_2eproto 

namespace protobuf_abc_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_abc_2eproto
namespace pt {
class abc;
class abcDefaultTypeInternal;
extern abcDefaultTypeInternal _abc_default_instance_;
}  // namespace pt
namespace google {
namespace protobuf {
template<> ::pt::abc* Arena::CreateMaybeMessage<::pt::abc>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace pt {

// ===================================================================

class abc : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:pt.abc) */ {
 public:
  abc();
  virtual ~abc();

  abc(const abc& from);

  inline abc& operator=(const abc& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  abc(abc&& from) noexcept
    : abc() {
    *this = ::std::move(from);
  }

  inline abc& operator=(abc&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const abc& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const abc* internal_default_instance() {
    return reinterpret_cast<const abc*>(
               &_abc_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(abc* other);
  friend void swap(abc& a, abc& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline abc* New() const final {
    return CreateMaybeMessage<abc>(NULL);
  }

  abc* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<abc>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const abc& from);
  void MergeFrom(const abc& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(abc* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string a = 1;
  bool has_a() const;
  void clear_a();
  static const int kAFieldNumber = 1;
  const ::std::string& a() const;
  void set_a(const ::std::string& value);
  #if LANG_CXX11
  void set_a(::std::string&& value);
  #endif
  void set_a(const char* value);
  void set_a(const char* value, size_t size);
  ::std::string* mutable_a();
  ::std::string* release_a();
  void set_allocated_a(::std::string* a);

  // required int32 b = 2;
  bool has_b() const;
  void clear_b();
  static const int kBFieldNumber = 2;
  ::google::protobuf::int32 b() const;
  void set_b(::google::protobuf::int32 value);

  // required int32 c = 3;
  bool has_c() const;
  void clear_c();
  static const int kCFieldNumber = 3;
  ::google::protobuf::int32 c() const;
  void set_c(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:pt.abc)
 private:
  void set_has_a();
  void clear_has_a();
  void set_has_b();
  void clear_has_b();
  void set_has_c();
  void clear_has_c();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr a_;
  ::google::protobuf::int32 b_;
  ::google::protobuf::int32 c_;
  friend struct ::protobuf_abc_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// abc

// required string a = 1;
inline bool abc::has_a() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void abc::set_has_a() {
  _has_bits_[0] |= 0x00000001u;
}
inline void abc::clear_has_a() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void abc::clear_a() {
  a_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_a();
}
inline const ::std::string& abc::a() const {
  // @@protoc_insertion_point(field_get:pt.abc.a)
  return a_.GetNoArena();
}
inline void abc::set_a(const ::std::string& value) {
  set_has_a();
  a_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:pt.abc.a)
}
#if LANG_CXX11
inline void abc::set_a(::std::string&& value) {
  set_has_a();
  a_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:pt.abc.a)
}
#endif
inline void abc::set_a(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_a();
  a_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:pt.abc.a)
}
inline void abc::set_a(const char* value, size_t size) {
  set_has_a();
  a_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:pt.abc.a)
}
inline ::std::string* abc::mutable_a() {
  set_has_a();
  // @@protoc_insertion_point(field_mutable:pt.abc.a)
  return a_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* abc::release_a() {
  // @@protoc_insertion_point(field_release:pt.abc.a)
  if (!has_a()) {
    return NULL;
  }
  clear_has_a();
  return a_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void abc::set_allocated_a(::std::string* a) {
  if (a != NULL) {
    set_has_a();
  } else {
    clear_has_a();
  }
  a_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), a);
  // @@protoc_insertion_point(field_set_allocated:pt.abc.a)
}

// required int32 b = 2;
inline bool abc::has_b() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void abc::set_has_b() {
  _has_bits_[0] |= 0x00000002u;
}
inline void abc::clear_has_b() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void abc::clear_b() {
  b_ = 0;
  clear_has_b();
}
inline ::google::protobuf::int32 abc::b() const {
  // @@protoc_insertion_point(field_get:pt.abc.b)
  return b_;
}
inline void abc::set_b(::google::protobuf::int32 value) {
  set_has_b();
  b_ = value;
  // @@protoc_insertion_point(field_set:pt.abc.b)
}

// required int32 c = 3;
inline bool abc::has_c() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void abc::set_has_c() {
  _has_bits_[0] |= 0x00000004u;
}
inline void abc::clear_has_c() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void abc::clear_c() {
  c_ = 0;
  clear_has_c();
}
inline ::google::protobuf::int32 abc::c() const {
  // @@protoc_insertion_point(field_get:pt.abc.c)
  return c_;
}
inline void abc::set_c(::google::protobuf::int32 value) {
  set_has_c();
  c_ = value;
  // @@protoc_insertion_point(field_set:pt.abc.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace pt

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_abc_2eproto