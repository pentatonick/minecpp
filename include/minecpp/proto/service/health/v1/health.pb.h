// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: minecpp/proto/service/health/v1/health.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto;
namespace minecpp {
namespace proto {
namespace service {
namespace health {
namespace v1 {
class Request;
struct RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class ServiceStatus;
struct ServiceStatusDefaultTypeInternal;
extern ServiceStatusDefaultTypeInternal _ServiceStatus_default_instance_;
}  // namespace v1
}  // namespace health
}  // namespace service
}  // namespace proto
}  // namespace minecpp
PROTOBUF_NAMESPACE_OPEN
template<> ::minecpp::proto::service::health::v1::Request* Arena::CreateMaybeMessage<::minecpp::proto::service::health::v1::Request>(Arena*);
template<> ::minecpp::proto::service::health::v1::ServiceStatus* Arena::CreateMaybeMessage<::minecpp::proto::service::health::v1::ServiceStatus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace minecpp {
namespace proto {
namespace service {
namespace health {
namespace v1 {

// ===================================================================

class Request final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:minecpp.proto.service.health.v1.Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  explicit constexpr Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const Request& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.service.health.v1.Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:minecpp.proto.service.health.v1.Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto;
};
// -------------------------------------------------------------------

class ServiceStatus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.service.health.v1.ServiceStatus) */ {
 public:
  inline ServiceStatus() : ServiceStatus(nullptr) {}
  ~ServiceStatus() override;
  explicit constexpr ServiceStatus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ServiceStatus(const ServiceStatus& from);
  ServiceStatus(ServiceStatus&& from) noexcept
    : ServiceStatus() {
    *this = ::std::move(from);
  }

  inline ServiceStatus& operator=(const ServiceStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline ServiceStatus& operator=(ServiceStatus&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ServiceStatus& default_instance() {
    return *internal_default_instance();
  }
  static inline const ServiceStatus* internal_default_instance() {
    return reinterpret_cast<const ServiceStatus*>(
               &_ServiceStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ServiceStatus& a, ServiceStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(ServiceStatus* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ServiceStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ServiceStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ServiceStatus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ServiceStatus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ServiceStatus& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ServiceStatus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.service.health.v1.ServiceStatus";
  }
  protected:
  explicit ServiceStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kServiceNameFieldNumber = 1,
    kServiceVersionFieldNumber = 2,
  };
  // string service_name = 1;
  void clear_service_name();
  const std::string& service_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_service_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_service_name();
  PROTOBUF_NODISCARD std::string* release_service_name();
  void set_allocated_service_name(std::string* service_name);
  private:
  const std::string& _internal_service_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_service_name(const std::string& value);
  std::string* _internal_mutable_service_name();
  public:

  // string service_version = 2;
  void clear_service_version();
  const std::string& service_version() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_service_version(ArgT0&& arg0, ArgT... args);
  std::string* mutable_service_version();
  PROTOBUF_NODISCARD std::string* release_service_version();
  void set_allocated_service_version(std::string* service_version);
  private:
  const std::string& _internal_service_version() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_service_version(const std::string& value);
  std::string* _internal_mutable_service_version();
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.service.health.v1.ServiceStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr service_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr service_version_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// -------------------------------------------------------------------

// ServiceStatus

// string service_name = 1;
inline void ServiceStatus::clear_service_name() {
  service_name_.ClearToEmpty();
}
inline const std::string& ServiceStatus::service_name() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.service.health.v1.ServiceStatus.service_name)
  return _internal_service_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ServiceStatus::set_service_name(ArgT0&& arg0, ArgT... args) {
 
 service_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:minecpp.proto.service.health.v1.ServiceStatus.service_name)
}
inline std::string* ServiceStatus::mutable_service_name() {
  std::string* _s = _internal_mutable_service_name();
  // @@protoc_insertion_point(field_mutable:minecpp.proto.service.health.v1.ServiceStatus.service_name)
  return _s;
}
inline const std::string& ServiceStatus::_internal_service_name() const {
  return service_name_.Get();
}
inline void ServiceStatus::_internal_set_service_name(const std::string& value) {
  
  service_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ServiceStatus::_internal_mutable_service_name() {
  
  return service_name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ServiceStatus::release_service_name() {
  // @@protoc_insertion_point(field_release:minecpp.proto.service.health.v1.ServiceStatus.service_name)
  return service_name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ServiceStatus::set_allocated_service_name(std::string* service_name) {
  if (service_name != nullptr) {
    
  } else {
    
  }
  service_name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), service_name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (service_name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    service_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:minecpp.proto.service.health.v1.ServiceStatus.service_name)
}

// string service_version = 2;
inline void ServiceStatus::clear_service_version() {
  service_version_.ClearToEmpty();
}
inline const std::string& ServiceStatus::service_version() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.service.health.v1.ServiceStatus.service_version)
  return _internal_service_version();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ServiceStatus::set_service_version(ArgT0&& arg0, ArgT... args) {
 
 service_version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:minecpp.proto.service.health.v1.ServiceStatus.service_version)
}
inline std::string* ServiceStatus::mutable_service_version() {
  std::string* _s = _internal_mutable_service_version();
  // @@protoc_insertion_point(field_mutable:minecpp.proto.service.health.v1.ServiceStatus.service_version)
  return _s;
}
inline const std::string& ServiceStatus::_internal_service_version() const {
  return service_version_.Get();
}
inline void ServiceStatus::_internal_set_service_version(const std::string& value) {
  
  service_version_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* ServiceStatus::_internal_mutable_service_version() {
  
  return service_version_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* ServiceStatus::release_service_version() {
  // @@protoc_insertion_point(field_release:minecpp.proto.service.health.v1.ServiceStatus.service_version)
  return service_version_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void ServiceStatus::set_allocated_service_version(std::string* service_version) {
  if (service_version != nullptr) {
    
  } else {
    
  }
  service_version_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), service_version,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (service_version_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    service_version_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:minecpp.proto.service.health.v1.ServiceStatus.service_version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace health
}  // namespace service
}  // namespace proto
}  // namespace minecpp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fservice_2fhealth_2fv1_2fhealth_2eproto
