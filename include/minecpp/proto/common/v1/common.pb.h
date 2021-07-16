// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: minecpp/proto/common/v1/common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto;
namespace minecpp {
namespace proto {
namespace common {
namespace v1 {
class BlockPosition;
struct BlockPositionDefaultTypeInternal;
extern BlockPositionDefaultTypeInternal _BlockPosition_default_instance_;
class ChunkPosition;
struct ChunkPositionDefaultTypeInternal;
extern ChunkPositionDefaultTypeInternal _ChunkPosition_default_instance_;
}  // namespace v1
}  // namespace common
}  // namespace proto
}  // namespace minecpp
PROTOBUF_NAMESPACE_OPEN
template<> ::minecpp::proto::common::v1::BlockPosition* Arena::CreateMaybeMessage<::minecpp::proto::common::v1::BlockPosition>(Arena*);
template<> ::minecpp::proto::common::v1::ChunkPosition* Arena::CreateMaybeMessage<::minecpp::proto::common::v1::ChunkPosition>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace minecpp {
namespace proto {
namespace common {
namespace v1 {

// ===================================================================

class ChunkPosition final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.common.v1.ChunkPosition) */ {
 public:
  inline ChunkPosition() : ChunkPosition(nullptr) {}
  ~ChunkPosition() override;
  explicit constexpr ChunkPosition(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChunkPosition(const ChunkPosition& from);
  ChunkPosition(ChunkPosition&& from) noexcept
    : ChunkPosition() {
    *this = ::std::move(from);
  }

  inline ChunkPosition& operator=(const ChunkPosition& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChunkPosition& operator=(ChunkPosition&& from) noexcept {
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
  static const ChunkPosition& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChunkPosition* internal_default_instance() {
    return reinterpret_cast<const ChunkPosition*>(
               &_ChunkPosition_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChunkPosition& a, ChunkPosition& b) {
    a.Swap(&b);
  }
  inline void Swap(ChunkPosition* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ChunkPosition* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ChunkPosition* New() const final {
    return new ChunkPosition();
  }

  ChunkPosition* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChunkPosition>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChunkPosition& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const ChunkPosition& from);
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
  void InternalSwap(ChunkPosition* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.common.v1.ChunkPosition";
  }
  protected:
  explicit ChunkPosition(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
  };
  // int32 x = 1;
  void clear_x();
  ::PROTOBUF_NAMESPACE_ID::int32 x() const;
  void set_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_x() const;
  void _internal_set_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 y = 2;
  void clear_y();
  ::PROTOBUF_NAMESPACE_ID::int32 y() const;
  void set_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y() const;
  void _internal_set_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.common.v1.ChunkPosition)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 x_;
  ::PROTOBUF_NAMESPACE_ID::int32 y_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto;
};
// -------------------------------------------------------------------

class BlockPosition final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.common.v1.BlockPosition) */ {
 public:
  inline BlockPosition() : BlockPosition(nullptr) {}
  ~BlockPosition() override;
  explicit constexpr BlockPosition(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BlockPosition(const BlockPosition& from);
  BlockPosition(BlockPosition&& from) noexcept
    : BlockPosition() {
    *this = ::std::move(from);
  }

  inline BlockPosition& operator=(const BlockPosition& from) {
    CopyFrom(from);
    return *this;
  }
  inline BlockPosition& operator=(BlockPosition&& from) noexcept {
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
  static const BlockPosition& default_instance() {
    return *internal_default_instance();
  }
  static inline const BlockPosition* internal_default_instance() {
    return reinterpret_cast<const BlockPosition*>(
               &_BlockPosition_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(BlockPosition& a, BlockPosition& b) {
    a.Swap(&b);
  }
  inline void Swap(BlockPosition* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BlockPosition* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BlockPosition* New() const final {
    return new BlockPosition();
  }

  BlockPosition* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BlockPosition>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BlockPosition& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const BlockPosition& from);
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
  void InternalSwap(BlockPosition* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.common.v1.BlockPosition";
  }
  protected:
  explicit BlockPosition(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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
  // int32 x = 1;
  void clear_x();
  ::PROTOBUF_NAMESPACE_ID::int32 x() const;
  void set_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_x() const;
  void _internal_set_x(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 y = 2;
  void clear_y();
  ::PROTOBUF_NAMESPACE_ID::int32 y() const;
  void set_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_y() const;
  void _internal_set_y(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 z = 3;
  void clear_z();
  ::PROTOBUF_NAMESPACE_ID::int32 z() const;
  void set_z(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_z() const;
  void _internal_set_z(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.common.v1.BlockPosition)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 x_;
  ::PROTOBUF_NAMESPACE_ID::int32 y_;
  ::PROTOBUF_NAMESPACE_ID::int32 z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChunkPosition

// int32 x = 1;
inline void ChunkPosition::clear_x() {
  x_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ChunkPosition::_internal_x() const {
  return x_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ChunkPosition::x() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.common.v1.ChunkPosition.x)
  return _internal_x();
}
inline void ChunkPosition::_internal_set_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  x_ = value;
}
inline void ChunkPosition::set_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.common.v1.ChunkPosition.x)
}

// int32 y = 2;
inline void ChunkPosition::clear_y() {
  y_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ChunkPosition::_internal_y() const {
  return y_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ChunkPosition::y() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.common.v1.ChunkPosition.y)
  return _internal_y();
}
inline void ChunkPosition::_internal_set_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  y_ = value;
}
inline void ChunkPosition::set_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.common.v1.ChunkPosition.y)
}

// -------------------------------------------------------------------

// BlockPosition

// int32 x = 1;
inline void BlockPosition::clear_x() {
  x_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BlockPosition::_internal_x() const {
  return x_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BlockPosition::x() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.common.v1.BlockPosition.x)
  return _internal_x();
}
inline void BlockPosition::_internal_set_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  x_ = value;
}
inline void BlockPosition::set_x(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.common.v1.BlockPosition.x)
}

// int32 y = 2;
inline void BlockPosition::clear_y() {
  y_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BlockPosition::_internal_y() const {
  return y_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BlockPosition::y() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.common.v1.BlockPosition.y)
  return _internal_y();
}
inline void BlockPosition::_internal_set_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  y_ = value;
}
inline void BlockPosition::set_y(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.common.v1.BlockPosition.y)
}

// int32 z = 3;
inline void BlockPosition::clear_z() {
  z_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BlockPosition::_internal_z() const {
  return z_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 BlockPosition::z() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.common.v1.BlockPosition.z)
  return _internal_z();
}
inline void BlockPosition::_internal_set_z(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  z_ = value;
}
inline void BlockPosition::set_z(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.common.v1.BlockPosition.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace common
}  // namespace proto
}  // namespace minecpp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fcommon_2fv1_2fcommon_2eproto
