// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: abc.proto

#include "abc.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace pt {
class abcDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<abc>
      _instance;
} _abc_default_instance_;
}  // namespace pt
namespace protobuf_abc_2eproto {
static void InitDefaultsabc() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::pt::_abc_default_instance_;
    new (ptr) ::pt::abc();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pt::abc::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_abc =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsabc}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_abc.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pt::abc, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pt::abc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pt::abc, a_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pt::abc, b_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pt::abc, c_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::pt::abc)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::pt::_abc_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "abc.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tabc.proto\022\002pt\"&\n\003abc\022\t\n\001a\030\001 \002(\t\022\t\n\001b\030\002"
      " \002(\005\022\t\n\001c\030\003 \002(\005"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 55);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "abc.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_abc_2eproto
namespace pt {

// ===================================================================

void abc::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int abc::kAFieldNumber;
const int abc::kBFieldNumber;
const int abc::kCFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

abc::abc()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_abc_2eproto::scc_info_abc.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:pt.abc)
}
abc::abc(const abc& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  a_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_a()) {
    a_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.a_);
  }
  ::memcpy(&b_, &from.b_,
    static_cast<size_t>(reinterpret_cast<char*>(&c_) -
    reinterpret_cast<char*>(&b_)) + sizeof(c_));
  // @@protoc_insertion_point(copy_constructor:pt.abc)
}

void abc::SharedCtor() {
  a_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&b_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&c_) -
      reinterpret_cast<char*>(&b_)) + sizeof(c_));
}

abc::~abc() {
  // @@protoc_insertion_point(destructor:pt.abc)
  SharedDtor();
}

void abc::SharedDtor() {
  a_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void abc::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* abc::descriptor() {
  ::protobuf_abc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_abc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const abc& abc::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_abc_2eproto::scc_info_abc.base);
  return *internal_default_instance();
}


void abc::Clear() {
// @@protoc_insertion_point(message_clear_start:pt.abc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    a_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 6u) {
    ::memset(&b_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&c_) -
        reinterpret_cast<char*>(&b_)) + sizeof(c_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool abc::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pt.abc)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string a = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_a()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->a().data(), static_cast<int>(this->a().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "pt.abc.a");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 b = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_b();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &b_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 c = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_c();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &c_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pt.abc)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pt.abc)
  return false;
#undef DO_
}

void abc::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pt.abc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string a = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->a().data(), static_cast<int>(this->a().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pt.abc.a");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->a(), output);
  }

  // required int32 b = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->b(), output);
  }

  // required int32 c = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->c(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pt.abc)
}

::google::protobuf::uint8* abc::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pt.abc)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string a = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->a().data(), static_cast<int>(this->a().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "pt.abc.a");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->a(), target);
  }

  // required int32 b = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->b(), target);
  }

  // required int32 c = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->c(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pt.abc)
  return target;
}

size_t abc::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:pt.abc)
  size_t total_size = 0;

  if (has_a()) {
    // required string a = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->a());
  }

  if (has_b()) {
    // required int32 b = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->b());
  }

  if (has_c()) {
    // required int32 c = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->c());
  }

  return total_size;
}
size_t abc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pt.abc)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string a = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->a());

    // required int32 b = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->b());

    // required int32 c = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->c());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void abc::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pt.abc)
  GOOGLE_DCHECK_NE(&from, this);
  const abc* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const abc>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pt.abc)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pt.abc)
    MergeFrom(*source);
  }
}

void abc::MergeFrom(const abc& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pt.abc)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_a();
      a_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.a_);
    }
    if (cached_has_bits & 0x00000002u) {
      b_ = from.b_;
    }
    if (cached_has_bits & 0x00000004u) {
      c_ = from.c_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void abc::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pt.abc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void abc::CopyFrom(const abc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pt.abc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool abc::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void abc::Swap(abc* other) {
  if (other == this) return;
  InternalSwap(other);
}
void abc::InternalSwap(abc* other) {
  using std::swap;
  a_.Swap(&other->a_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(b_, other->b_);
  swap(c_, other->c_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata abc::GetMetadata() const {
  protobuf_abc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_abc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pt
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::pt::abc* Arena::CreateMaybeMessage< ::pt::abc >(Arena* arena) {
  return Arena::CreateInternal< ::pt::abc >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
