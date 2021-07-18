// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: minecpp/proto/entity/v1/entity.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
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
#define PROTOBUF_INTERNAL_EXPORT_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto;
namespace minecpp {
namespace proto {
namespace entity {
namespace v1 {
class Position;
struct PositionDefaultTypeInternal;
extern PositionDefaultTypeInternal _Position_default_instance_;
class Rotation;
struct RotationDefaultTypeInternal;
extern RotationDefaultTypeInternal _Rotation_default_instance_;
}  // namespace v1
}  // namespace entity
}  // namespace proto
}  // namespace minecpp
PROTOBUF_NAMESPACE_OPEN
template<> ::minecpp::proto::entity::v1::Position* Arena::CreateMaybeMessage<::minecpp::proto::entity::v1::Position>(Arena*);
template<> ::minecpp::proto::entity::v1::Rotation* Arena::CreateMaybeMessage<::minecpp::proto::entity::v1::Rotation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace minecpp {
namespace proto {
namespace entity {
namespace v1 {

// ===================================================================

class Position final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.entity.v1.Position) */ {
 public:
  inline Position() : Position(nullptr) {}
  ~Position() override;
  explicit constexpr Position(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Position(const Position& from);
  Position(Position&& from) noexcept
    : Position() {
    *this = ::std::move(from);
  }

  inline Position& operator=(const Position& from) {
    CopyFrom(from);
    return *this;
  }
  inline Position& operator=(Position&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const Position& default_instance() {
    return *internal_default_instance();
  }
  static inline const Position* internal_default_instance() {
    return reinterpret_cast<const Position*>(
               &_Position_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Position& a, Position& b) {
    a.Swap(&b);
  }
  inline void Swap(Position* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Position* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Position* New() const final {
    return new Position();
  }

  Position* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Position>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Position& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Position& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Position* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.entity.v1.Position";
  }
  protected:
  explicit Position(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);
  private:
  double _internal_z() const;
  void _internal_set_z(double value);
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.entity.v1.Position)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double x_;
  double y_;
  double z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto;
};
// -------------------------------------------------------------------

class Rotation final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.entity.v1.Rotation) */ {
 public:
  inline Rotation() : Rotation(nullptr) {}
  ~Rotation() override;
  explicit constexpr Rotation(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Rotation(const Rotation& from);
  Rotation(Rotation&& from) noexcept
    : Rotation() {
    *this = ::std::move(from);
  }

  inline Rotation& operator=(const Rotation& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rotation& operator=(Rotation&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const Rotation& default_instance() {
    return *internal_default_instance();
  }
  static inline const Rotation* internal_default_instance() {
    return reinterpret_cast<const Rotation*>(
               &_Rotation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Rotation& a, Rotation& b) {
    a.Swap(&b);
  }
  inline void Swap(Rotation* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Rotation* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rotation* New() const final {
    return new Rotation();
  }

  Rotation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rotation>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Rotation& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Rotation& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message*to, const ::PROTOBUF_NAMESPACE_ID::Message&from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Rotation* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.entity.v1.Rotation";
  }
  protected:
  explicit Rotation(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
    kYawFieldNumber = 1,
    kPitchFieldNumber = 2,
  };
  // float yaw = 1;
  void clear_yaw();
  float yaw() const;
  void set_yaw(float value);
  private:
  float _internal_yaw() const;
  void _internal_set_yaw(float value);
  public:

  // float pitch = 2;
  void clear_pitch();
  float pitch() const;
  void set_pitch(float value);
  private:
  float _internal_pitch() const;
  void _internal_set_pitch(float value);
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.entity.v1.Rotation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float yaw_;
  float pitch_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Position

// double x = 1;
inline void Position::clear_x() {
  x_ = 0;
}
inline double Position::_internal_x() const {
  return x_;
}
inline double Position::x() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.entity.v1.Position.x)
  return _internal_x();
}
inline void Position::_internal_set_x(double value) {
  
  x_ = value;
}
inline void Position::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.entity.v1.Position.x)
}

// double y = 2;
inline void Position::clear_y() {
  y_ = 0;
}
inline double Position::_internal_y() const {
  return y_;
}
inline double Position::y() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.entity.v1.Position.y)
  return _internal_y();
}
inline void Position::_internal_set_y(double value) {
  
  y_ = value;
}
inline void Position::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.entity.v1.Position.y)
}

// double z = 3;
inline void Position::clear_z() {
  z_ = 0;
}
inline double Position::_internal_z() const {
  return z_;
}
inline double Position::z() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.entity.v1.Position.z)
  return _internal_z();
}
inline void Position::_internal_set_z(double value) {
  
  z_ = value;
}
inline void Position::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.entity.v1.Position.z)
}

// -------------------------------------------------------------------

// Rotation

// float yaw = 1;
inline void Rotation::clear_yaw() {
  yaw_ = 0;
}
inline float Rotation::_internal_yaw() const {
  return yaw_;
}
inline float Rotation::yaw() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.entity.v1.Rotation.yaw)
  return _internal_yaw();
}
inline void Rotation::_internal_set_yaw(float value) {
  
  yaw_ = value;
}
inline void Rotation::set_yaw(float value) {
  _internal_set_yaw(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.entity.v1.Rotation.yaw)
}

// float pitch = 2;
inline void Rotation::clear_pitch() {
  pitch_ = 0;
}
inline float Rotation::_internal_pitch() const {
  return pitch_;
}
inline float Rotation::pitch() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.entity.v1.Rotation.pitch)
  return _internal_pitch();
}
inline void Rotation::_internal_set_pitch(float value) {
  
  pitch_ = value;
}
inline void Rotation::set_pitch(float value) {
  _internal_set_pitch(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.entity.v1.Rotation.pitch)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace entity
}  // namespace proto
}  // namespace minecpp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fentity_2fv1_2fentity_2eproto
