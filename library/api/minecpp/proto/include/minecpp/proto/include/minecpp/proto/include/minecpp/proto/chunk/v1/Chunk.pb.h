// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: minecpp/proto/chunk/v1/Chunk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto;
namespace minecpp {
namespace proto {
namespace chunk {
namespace v1 {
class Chunk;
struct ChunkDefaultTypeInternal;
extern ChunkDefaultTypeInternal _Chunk_default_instance_;
class Chunk_Section;
struct Chunk_SectionDefaultTypeInternal;
extern Chunk_SectionDefaultTypeInternal _Chunk_Section_default_instance_;
}  // namespace v1
}  // namespace chunk
}  // namespace proto
}  // namespace minecpp
PROTOBUF_NAMESPACE_OPEN
template<> ::minecpp::proto::chunk::v1::Chunk* Arena::CreateMaybeMessage<::minecpp::proto::chunk::v1::Chunk>(Arena*);
template<> ::minecpp::proto::chunk::v1::Chunk_Section* Arena::CreateMaybeMessage<::minecpp::proto::chunk::v1::Chunk_Section>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace minecpp {
namespace proto {
namespace chunk {
namespace v1 {

// ===================================================================

class Chunk_Section final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.chunk.v1.Chunk.Section) */ {
 public:
  inline Chunk_Section() : Chunk_Section(nullptr) {}
  ~Chunk_Section() override;
  explicit PROTOBUF_CONSTEXPR Chunk_Section(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Chunk_Section(const Chunk_Section& from);
  Chunk_Section(Chunk_Section&& from) noexcept
    : Chunk_Section() {
    *this = ::std::move(from);
  }

  inline Chunk_Section& operator=(const Chunk_Section& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chunk_Section& operator=(Chunk_Section&& from) noexcept {
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
  static const Chunk_Section& default_instance() {
    return *internal_default_instance();
  }
  static inline const Chunk_Section* internal_default_instance() {
    return reinterpret_cast<const Chunk_Section*>(
               &_Chunk_Section_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Chunk_Section& a, Chunk_Section& b) {
    a.Swap(&b);
  }
  inline void Swap(Chunk_Section* other) {
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
  void UnsafeArenaSwap(Chunk_Section* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Chunk_Section* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Chunk_Section>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Chunk_Section& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Chunk_Section& from) {
    Chunk_Section::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Chunk_Section* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.chunk.v1.Chunk.Section";
  }
  protected:
  explicit Chunk_Section(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPaletteFieldNumber = 4,
    kDataFieldNumber = 5,
    kBlockLightFieldNumber = 6,
    kSkyLightFieldNumber = 7,
    kYFieldNumber = 1,
    kBitsFieldNumber = 2,
    kRefCountFieldNumber = 3,
  };
  // repeated int32 palette = 4;
  int palette_size() const;
  private:
  int _internal_palette_size() const;
  public:
  void clear_palette();
  private:
  int32_t _internal_palette(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_palette() const;
  void _internal_add_palette(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_palette();
  public:
  int32_t palette(int index) const;
  void set_palette(int index, int32_t value);
  void add_palette(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      palette() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_palette();

  // repeated int64 data = 5;
  int data_size() const;
  private:
  int _internal_data_size() const;
  public:
  void clear_data();
  private:
  int64_t _internal_data(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_data() const;
  void _internal_add_data(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_data();
  public:
  int64_t data(int index) const;
  void set_data(int index, int64_t value);
  void add_data(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_data();

  // bytes block_light = 6;
  void clear_block_light();
  const std::string& block_light() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_block_light(ArgT0&& arg0, ArgT... args);
  std::string* mutable_block_light();
  PROTOBUF_NODISCARD std::string* release_block_light();
  void set_allocated_block_light(std::string* block_light);
  private:
  const std::string& _internal_block_light() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_block_light(const std::string& value);
  std::string* _internal_mutable_block_light();
  public:

  // bytes sky_light = 7;
  void clear_sky_light();
  const std::string& sky_light() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_sky_light(ArgT0&& arg0, ArgT... args);
  std::string* mutable_sky_light();
  PROTOBUF_NODISCARD std::string* release_sky_light();
  void set_allocated_sky_light(std::string* sky_light);
  private:
  const std::string& _internal_sky_light() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_sky_light(const std::string& value);
  std::string* _internal_mutable_sky_light();
  public:

  // int32 y = 1;
  void clear_y();
  int32_t y() const;
  void set_y(int32_t value);
  private:
  int32_t _internal_y() const;
  void _internal_set_y(int32_t value);
  public:

  // int32 bits = 2;
  void clear_bits();
  int32_t bits() const;
  void set_bits(int32_t value);
  private:
  int32_t _internal_bits() const;
  void _internal_set_bits(int32_t value);
  public:

  // int32 ref_count = 3;
  void clear_ref_count();
  int32_t ref_count() const;
  void set_ref_count(int32_t value);
  private:
  int32_t _internal_ref_count() const;
  void _internal_set_ref_count(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.chunk.v1.Chunk.Section)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > palette_;
    mutable std::atomic<int> _palette_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > data_;
    mutable std::atomic<int> _data_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr block_light_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sky_light_;
    int32_t y_;
    int32_t bits_;
    int32_t ref_count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto;
};
// -------------------------------------------------------------------

class Chunk final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:minecpp.proto.chunk.v1.Chunk) */ {
 public:
  inline Chunk() : Chunk(nullptr) {}
  ~Chunk() override;
  explicit PROTOBUF_CONSTEXPR Chunk(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Chunk(const Chunk& from);
  Chunk(Chunk&& from) noexcept
    : Chunk() {
    *this = ::std::move(from);
  }

  inline Chunk& operator=(const Chunk& from) {
    CopyFrom(from);
    return *this;
  }
  inline Chunk& operator=(Chunk&& from) noexcept {
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
  static const Chunk& default_instance() {
    return *internal_default_instance();
  }
  static inline const Chunk* internal_default_instance() {
    return reinterpret_cast<const Chunk*>(
               &_Chunk_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Chunk& a, Chunk& b) {
    a.Swap(&b);
  }
  inline void Swap(Chunk* other) {
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
  void UnsafeArenaSwap(Chunk* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Chunk* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Chunk>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Chunk& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Chunk& from) {
    Chunk::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Chunk* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "minecpp.proto.chunk.v1.Chunk";
  }
  protected:
  explicit Chunk(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Chunk_Section Section;

  // accessors -------------------------------------------------------

  enum : int {
    kBiomesFieldNumber = 4,
    kHmWorldSurfaceFieldNumber = 5,
    kHmMotionBlockingFieldNumber = 6,
    kSectionsFieldNumber = 7,
    kPosXFieldNumber = 1,
    kPosZFieldNumber = 2,
    kFullFieldNumber = 3,
  };
  // repeated int32 biomes = 4 [packed = true];
  int biomes_size() const;
  private:
  int _internal_biomes_size() const;
  public:
  void clear_biomes();
  private:
  int32_t _internal_biomes(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      _internal_biomes() const;
  void _internal_add_biomes(int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      _internal_mutable_biomes();
  public:
  int32_t biomes(int index) const;
  void set_biomes(int index, int32_t value);
  void add_biomes(int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
      biomes() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
      mutable_biomes();

  // repeated int64 hm_world_surface = 5;
  int hm_world_surface_size() const;
  private:
  int _internal_hm_world_surface_size() const;
  public:
  void clear_hm_world_surface();
  private:
  int64_t _internal_hm_world_surface(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_hm_world_surface() const;
  void _internal_add_hm_world_surface(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_hm_world_surface();
  public:
  int64_t hm_world_surface(int index) const;
  void set_hm_world_surface(int index, int64_t value);
  void add_hm_world_surface(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      hm_world_surface() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_hm_world_surface();

  // repeated int64 hm_motion_blocking = 6;
  int hm_motion_blocking_size() const;
  private:
  int _internal_hm_motion_blocking_size() const;
  public:
  void clear_hm_motion_blocking();
  private:
  int64_t _internal_hm_motion_blocking(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      _internal_hm_motion_blocking() const;
  void _internal_add_hm_motion_blocking(int64_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      _internal_mutable_hm_motion_blocking();
  public:
  int64_t hm_motion_blocking(int index) const;
  void set_hm_motion_blocking(int index, int64_t value);
  void add_hm_motion_blocking(int64_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
      hm_motion_blocking() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
      mutable_hm_motion_blocking();

  // repeated .minecpp.proto.chunk.v1.Chunk.Section sections = 7;
  int sections_size() const;
  private:
  int _internal_sections_size() const;
  public:
  void clear_sections();
  ::minecpp::proto::chunk::v1::Chunk_Section* mutable_sections(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::minecpp::proto::chunk::v1::Chunk_Section >*
      mutable_sections();
  private:
  const ::minecpp::proto::chunk::v1::Chunk_Section& _internal_sections(int index) const;
  ::minecpp::proto::chunk::v1::Chunk_Section* _internal_add_sections();
  public:
  const ::minecpp::proto::chunk::v1::Chunk_Section& sections(int index) const;
  ::minecpp::proto::chunk::v1::Chunk_Section* add_sections();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::minecpp::proto::chunk::v1::Chunk_Section >&
      sections() const;

  // int32 pos_x = 1;
  void clear_pos_x();
  int32_t pos_x() const;
  void set_pos_x(int32_t value);
  private:
  int32_t _internal_pos_x() const;
  void _internal_set_pos_x(int32_t value);
  public:

  // int32 pos_z = 2;
  void clear_pos_z();
  int32_t pos_z() const;
  void set_pos_z(int32_t value);
  private:
  int32_t _internal_pos_z() const;
  void _internal_set_pos_z(int32_t value);
  public:

  // bool full = 3;
  void clear_full();
  bool full() const;
  void set_full(bool value);
  private:
  bool _internal_full() const;
  void _internal_set_full(bool value);
  public:

  // @@protoc_insertion_point(class_scope:minecpp.proto.chunk.v1.Chunk)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t > biomes_;
    mutable std::atomic<int> _biomes_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > hm_world_surface_;
    mutable std::atomic<int> _hm_world_surface_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t > hm_motion_blocking_;
    mutable std::atomic<int> _hm_motion_blocking_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::minecpp::proto::chunk::v1::Chunk_Section > sections_;
    int32_t pos_x_;
    int32_t pos_z_;
    bool full_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Chunk_Section

// int32 y = 1;
inline void Chunk_Section::clear_y() {
  _impl_.y_ = 0;
}
inline int32_t Chunk_Section::_internal_y() const {
  return _impl_.y_;
}
inline int32_t Chunk_Section::y() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.y)
  return _internal_y();
}
inline void Chunk_Section::_internal_set_y(int32_t value) {
  
  _impl_.y_ = value;
}
inline void Chunk_Section::set_y(int32_t value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.y)
}

// int32 bits = 2;
inline void Chunk_Section::clear_bits() {
  _impl_.bits_ = 0;
}
inline int32_t Chunk_Section::_internal_bits() const {
  return _impl_.bits_;
}
inline int32_t Chunk_Section::bits() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.bits)
  return _internal_bits();
}
inline void Chunk_Section::_internal_set_bits(int32_t value) {
  
  _impl_.bits_ = value;
}
inline void Chunk_Section::set_bits(int32_t value) {
  _internal_set_bits(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.bits)
}

// int32 ref_count = 3;
inline void Chunk_Section::clear_ref_count() {
  _impl_.ref_count_ = 0;
}
inline int32_t Chunk_Section::_internal_ref_count() const {
  return _impl_.ref_count_;
}
inline int32_t Chunk_Section::ref_count() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.ref_count)
  return _internal_ref_count();
}
inline void Chunk_Section::_internal_set_ref_count(int32_t value) {
  
  _impl_.ref_count_ = value;
}
inline void Chunk_Section::set_ref_count(int32_t value) {
  _internal_set_ref_count(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.ref_count)
}

// repeated int32 palette = 4;
inline int Chunk_Section::_internal_palette_size() const {
  return _impl_.palette_.size();
}
inline int Chunk_Section::palette_size() const {
  return _internal_palette_size();
}
inline void Chunk_Section::clear_palette() {
  _impl_.palette_.Clear();
}
inline int32_t Chunk_Section::_internal_palette(int index) const {
  return _impl_.palette_.Get(index);
}
inline int32_t Chunk_Section::palette(int index) const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.palette)
  return _internal_palette(index);
}
inline void Chunk_Section::set_palette(int index, int32_t value) {
  _impl_.palette_.Set(index, value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.palette)
}
inline void Chunk_Section::_internal_add_palette(int32_t value) {
  _impl_.palette_.Add(value);
}
inline void Chunk_Section::add_palette(int32_t value) {
  _internal_add_palette(value);
  // @@protoc_insertion_point(field_add:minecpp.proto.chunk.v1.Chunk.Section.palette)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Chunk_Section::_internal_palette() const {
  return _impl_.palette_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Chunk_Section::palette() const {
  // @@protoc_insertion_point(field_list:minecpp.proto.chunk.v1.Chunk.Section.palette)
  return _internal_palette();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Chunk_Section::_internal_mutable_palette() {
  return &_impl_.palette_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Chunk_Section::mutable_palette() {
  // @@protoc_insertion_point(field_mutable_list:minecpp.proto.chunk.v1.Chunk.Section.palette)
  return _internal_mutable_palette();
}

// repeated int64 data = 5;
inline int Chunk_Section::_internal_data_size() const {
  return _impl_.data_.size();
}
inline int Chunk_Section::data_size() const {
  return _internal_data_size();
}
inline void Chunk_Section::clear_data() {
  _impl_.data_.Clear();
}
inline int64_t Chunk_Section::_internal_data(int index) const {
  return _impl_.data_.Get(index);
}
inline int64_t Chunk_Section::data(int index) const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.data)
  return _internal_data(index);
}
inline void Chunk_Section::set_data(int index, int64_t value) {
  _impl_.data_.Set(index, value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.data)
}
inline void Chunk_Section::_internal_add_data(int64_t value) {
  _impl_.data_.Add(value);
}
inline void Chunk_Section::add_data(int64_t value) {
  _internal_add_data(value);
  // @@protoc_insertion_point(field_add:minecpp.proto.chunk.v1.Chunk.Section.data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Chunk_Section::_internal_data() const {
  return _impl_.data_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Chunk_Section::data() const {
  // @@protoc_insertion_point(field_list:minecpp.proto.chunk.v1.Chunk.Section.data)
  return _internal_data();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Chunk_Section::_internal_mutable_data() {
  return &_impl_.data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Chunk_Section::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:minecpp.proto.chunk.v1.Chunk.Section.data)
  return _internal_mutable_data();
}

// bytes block_light = 6;
inline void Chunk_Section::clear_block_light() {
  _impl_.block_light_.ClearToEmpty();
}
inline const std::string& Chunk_Section::block_light() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.block_light)
  return _internal_block_light();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Chunk_Section::set_block_light(ArgT0&& arg0, ArgT... args) {
 
 _impl_.block_light_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.block_light)
}
inline std::string* Chunk_Section::mutable_block_light() {
  std::string* _s = _internal_mutable_block_light();
  // @@protoc_insertion_point(field_mutable:minecpp.proto.chunk.v1.Chunk.Section.block_light)
  return _s;
}
inline const std::string& Chunk_Section::_internal_block_light() const {
  return _impl_.block_light_.Get();
}
inline void Chunk_Section::_internal_set_block_light(const std::string& value) {
  
  _impl_.block_light_.Set(value, GetArenaForAllocation());
}
inline std::string* Chunk_Section::_internal_mutable_block_light() {
  
  return _impl_.block_light_.Mutable(GetArenaForAllocation());
}
inline std::string* Chunk_Section::release_block_light() {
  // @@protoc_insertion_point(field_release:minecpp.proto.chunk.v1.Chunk.Section.block_light)
  return _impl_.block_light_.Release();
}
inline void Chunk_Section::set_allocated_block_light(std::string* block_light) {
  if (block_light != nullptr) {
    
  } else {
    
  }
  _impl_.block_light_.SetAllocated(block_light, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.block_light_.IsDefault()) {
    _impl_.block_light_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:minecpp.proto.chunk.v1.Chunk.Section.block_light)
}

// bytes sky_light = 7;
inline void Chunk_Section::clear_sky_light() {
  _impl_.sky_light_.ClearToEmpty();
}
inline const std::string& Chunk_Section::sky_light() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.Section.sky_light)
  return _internal_sky_light();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Chunk_Section::set_sky_light(ArgT0&& arg0, ArgT... args) {
 
 _impl_.sky_light_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.Section.sky_light)
}
inline std::string* Chunk_Section::mutable_sky_light() {
  std::string* _s = _internal_mutable_sky_light();
  // @@protoc_insertion_point(field_mutable:minecpp.proto.chunk.v1.Chunk.Section.sky_light)
  return _s;
}
inline const std::string& Chunk_Section::_internal_sky_light() const {
  return _impl_.sky_light_.Get();
}
inline void Chunk_Section::_internal_set_sky_light(const std::string& value) {
  
  _impl_.sky_light_.Set(value, GetArenaForAllocation());
}
inline std::string* Chunk_Section::_internal_mutable_sky_light() {
  
  return _impl_.sky_light_.Mutable(GetArenaForAllocation());
}
inline std::string* Chunk_Section::release_sky_light() {
  // @@protoc_insertion_point(field_release:minecpp.proto.chunk.v1.Chunk.Section.sky_light)
  return _impl_.sky_light_.Release();
}
inline void Chunk_Section::set_allocated_sky_light(std::string* sky_light) {
  if (sky_light != nullptr) {
    
  } else {
    
  }
  _impl_.sky_light_.SetAllocated(sky_light, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.sky_light_.IsDefault()) {
    _impl_.sky_light_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:minecpp.proto.chunk.v1.Chunk.Section.sky_light)
}

// -------------------------------------------------------------------

// Chunk

// int32 pos_x = 1;
inline void Chunk::clear_pos_x() {
  _impl_.pos_x_ = 0;
}
inline int32_t Chunk::_internal_pos_x() const {
  return _impl_.pos_x_;
}
inline int32_t Chunk::pos_x() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.pos_x)
  return _internal_pos_x();
}
inline void Chunk::_internal_set_pos_x(int32_t value) {
  
  _impl_.pos_x_ = value;
}
inline void Chunk::set_pos_x(int32_t value) {
  _internal_set_pos_x(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.pos_x)
}

// int32 pos_z = 2;
inline void Chunk::clear_pos_z() {
  _impl_.pos_z_ = 0;
}
inline int32_t Chunk::_internal_pos_z() const {
  return _impl_.pos_z_;
}
inline int32_t Chunk::pos_z() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.pos_z)
  return _internal_pos_z();
}
inline void Chunk::_internal_set_pos_z(int32_t value) {
  
  _impl_.pos_z_ = value;
}
inline void Chunk::set_pos_z(int32_t value) {
  _internal_set_pos_z(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.pos_z)
}

// bool full = 3;
inline void Chunk::clear_full() {
  _impl_.full_ = false;
}
inline bool Chunk::_internal_full() const {
  return _impl_.full_;
}
inline bool Chunk::full() const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.full)
  return _internal_full();
}
inline void Chunk::_internal_set_full(bool value) {
  
  _impl_.full_ = value;
}
inline void Chunk::set_full(bool value) {
  _internal_set_full(value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.full)
}

// repeated int32 biomes = 4 [packed = true];
inline int Chunk::_internal_biomes_size() const {
  return _impl_.biomes_.size();
}
inline int Chunk::biomes_size() const {
  return _internal_biomes_size();
}
inline void Chunk::clear_biomes() {
  _impl_.biomes_.Clear();
}
inline int32_t Chunk::_internal_biomes(int index) const {
  return _impl_.biomes_.Get(index);
}
inline int32_t Chunk::biomes(int index) const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.biomes)
  return _internal_biomes(index);
}
inline void Chunk::set_biomes(int index, int32_t value) {
  _impl_.biomes_.Set(index, value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.biomes)
}
inline void Chunk::_internal_add_biomes(int32_t value) {
  _impl_.biomes_.Add(value);
}
inline void Chunk::add_biomes(int32_t value) {
  _internal_add_biomes(value);
  // @@protoc_insertion_point(field_add:minecpp.proto.chunk.v1.Chunk.biomes)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Chunk::_internal_biomes() const {
  return _impl_.biomes_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >&
Chunk::biomes() const {
  // @@protoc_insertion_point(field_list:minecpp.proto.chunk.v1.Chunk.biomes)
  return _internal_biomes();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Chunk::_internal_mutable_biomes() {
  return &_impl_.biomes_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int32_t >*
Chunk::mutable_biomes() {
  // @@protoc_insertion_point(field_mutable_list:minecpp.proto.chunk.v1.Chunk.biomes)
  return _internal_mutable_biomes();
}

// repeated int64 hm_world_surface = 5;
inline int Chunk::_internal_hm_world_surface_size() const {
  return _impl_.hm_world_surface_.size();
}
inline int Chunk::hm_world_surface_size() const {
  return _internal_hm_world_surface_size();
}
inline void Chunk::clear_hm_world_surface() {
  _impl_.hm_world_surface_.Clear();
}
inline int64_t Chunk::_internal_hm_world_surface(int index) const {
  return _impl_.hm_world_surface_.Get(index);
}
inline int64_t Chunk::hm_world_surface(int index) const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.hm_world_surface)
  return _internal_hm_world_surface(index);
}
inline void Chunk::set_hm_world_surface(int index, int64_t value) {
  _impl_.hm_world_surface_.Set(index, value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.hm_world_surface)
}
inline void Chunk::_internal_add_hm_world_surface(int64_t value) {
  _impl_.hm_world_surface_.Add(value);
}
inline void Chunk::add_hm_world_surface(int64_t value) {
  _internal_add_hm_world_surface(value);
  // @@protoc_insertion_point(field_add:minecpp.proto.chunk.v1.Chunk.hm_world_surface)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Chunk::_internal_hm_world_surface() const {
  return _impl_.hm_world_surface_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Chunk::hm_world_surface() const {
  // @@protoc_insertion_point(field_list:minecpp.proto.chunk.v1.Chunk.hm_world_surface)
  return _internal_hm_world_surface();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Chunk::_internal_mutable_hm_world_surface() {
  return &_impl_.hm_world_surface_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Chunk::mutable_hm_world_surface() {
  // @@protoc_insertion_point(field_mutable_list:minecpp.proto.chunk.v1.Chunk.hm_world_surface)
  return _internal_mutable_hm_world_surface();
}

// repeated int64 hm_motion_blocking = 6;
inline int Chunk::_internal_hm_motion_blocking_size() const {
  return _impl_.hm_motion_blocking_.size();
}
inline int Chunk::hm_motion_blocking_size() const {
  return _internal_hm_motion_blocking_size();
}
inline void Chunk::clear_hm_motion_blocking() {
  _impl_.hm_motion_blocking_.Clear();
}
inline int64_t Chunk::_internal_hm_motion_blocking(int index) const {
  return _impl_.hm_motion_blocking_.Get(index);
}
inline int64_t Chunk::hm_motion_blocking(int index) const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.hm_motion_blocking)
  return _internal_hm_motion_blocking(index);
}
inline void Chunk::set_hm_motion_blocking(int index, int64_t value) {
  _impl_.hm_motion_blocking_.Set(index, value);
  // @@protoc_insertion_point(field_set:minecpp.proto.chunk.v1.Chunk.hm_motion_blocking)
}
inline void Chunk::_internal_add_hm_motion_blocking(int64_t value) {
  _impl_.hm_motion_blocking_.Add(value);
}
inline void Chunk::add_hm_motion_blocking(int64_t value) {
  _internal_add_hm_motion_blocking(value);
  // @@protoc_insertion_point(field_add:minecpp.proto.chunk.v1.Chunk.hm_motion_blocking)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Chunk::_internal_hm_motion_blocking() const {
  return _impl_.hm_motion_blocking_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >&
Chunk::hm_motion_blocking() const {
  // @@protoc_insertion_point(field_list:minecpp.proto.chunk.v1.Chunk.hm_motion_blocking)
  return _internal_hm_motion_blocking();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Chunk::_internal_mutable_hm_motion_blocking() {
  return &_impl_.hm_motion_blocking_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< int64_t >*
Chunk::mutable_hm_motion_blocking() {
  // @@protoc_insertion_point(field_mutable_list:minecpp.proto.chunk.v1.Chunk.hm_motion_blocking)
  return _internal_mutable_hm_motion_blocking();
}

// repeated .minecpp.proto.chunk.v1.Chunk.Section sections = 7;
inline int Chunk::_internal_sections_size() const {
  return _impl_.sections_.size();
}
inline int Chunk::sections_size() const {
  return _internal_sections_size();
}
inline void Chunk::clear_sections() {
  _impl_.sections_.Clear();
}
inline ::minecpp::proto::chunk::v1::Chunk_Section* Chunk::mutable_sections(int index) {
  // @@protoc_insertion_point(field_mutable:minecpp.proto.chunk.v1.Chunk.sections)
  return _impl_.sections_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::minecpp::proto::chunk::v1::Chunk_Section >*
Chunk::mutable_sections() {
  // @@protoc_insertion_point(field_mutable_list:minecpp.proto.chunk.v1.Chunk.sections)
  return &_impl_.sections_;
}
inline const ::minecpp::proto::chunk::v1::Chunk_Section& Chunk::_internal_sections(int index) const {
  return _impl_.sections_.Get(index);
}
inline const ::minecpp::proto::chunk::v1::Chunk_Section& Chunk::sections(int index) const {
  // @@protoc_insertion_point(field_get:minecpp.proto.chunk.v1.Chunk.sections)
  return _internal_sections(index);
}
inline ::minecpp::proto::chunk::v1::Chunk_Section* Chunk::_internal_add_sections() {
  return _impl_.sections_.Add();
}
inline ::minecpp::proto::chunk::v1::Chunk_Section* Chunk::add_sections() {
  ::minecpp::proto::chunk::v1::Chunk_Section* _add = _internal_add_sections();
  // @@protoc_insertion_point(field_add:minecpp.proto.chunk.v1.Chunk.sections)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::minecpp::proto::chunk::v1::Chunk_Section >&
Chunk::sections() const {
  // @@protoc_insertion_point(field_list:minecpp.proto.chunk.v1.Chunk.sections)
  return _impl_.sections_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace chunk
}  // namespace proto
}  // namespace minecpp

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_minecpp_2fproto_2fchunk_2fv1_2fChunk_2eproto
