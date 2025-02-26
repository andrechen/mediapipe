// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mediapipe/util/tracking/frame_selection_solution_evaluator.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto;
namespace mediapipe {
class FrameSelectionSolutionEvaluatorOptions;
struct FrameSelectionSolutionEvaluatorOptionsDefaultTypeInternal;
extern FrameSelectionSolutionEvaluatorOptionsDefaultTypeInternal _FrameSelectionSolutionEvaluatorOptions_default_instance_;
class FrameSelectionSolutionEvaluatorType;
struct FrameSelectionSolutionEvaluatorTypeDefaultTypeInternal;
extern FrameSelectionSolutionEvaluatorTypeDefaultTypeInternal _FrameSelectionSolutionEvaluatorType_default_instance_;
}  // namespace mediapipe
PROTOBUF_NAMESPACE_OPEN
template<> ::mediapipe::FrameSelectionSolutionEvaluatorOptions* Arena::CreateMaybeMessage<::mediapipe::FrameSelectionSolutionEvaluatorOptions>(Arena*);
template<> ::mediapipe::FrameSelectionSolutionEvaluatorType* Arena::CreateMaybeMessage<::mediapipe::FrameSelectionSolutionEvaluatorType>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mediapipe {

// ===================================================================

class FrameSelectionSolutionEvaluatorOptions PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.FrameSelectionSolutionEvaluatorOptions) */ {
 public:
  inline FrameSelectionSolutionEvaluatorOptions() : FrameSelectionSolutionEvaluatorOptions(nullptr) {}
  ~FrameSelectionSolutionEvaluatorOptions() override;
  explicit constexpr FrameSelectionSolutionEvaluatorOptions(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FrameSelectionSolutionEvaluatorOptions(const FrameSelectionSolutionEvaluatorOptions& from);
  FrameSelectionSolutionEvaluatorOptions(FrameSelectionSolutionEvaluatorOptions&& from) noexcept
    : FrameSelectionSolutionEvaluatorOptions() {
    *this = ::std::move(from);
  }

  inline FrameSelectionSolutionEvaluatorOptions& operator=(const FrameSelectionSolutionEvaluatorOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline FrameSelectionSolutionEvaluatorOptions& operator=(FrameSelectionSolutionEvaluatorOptions&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const FrameSelectionSolutionEvaluatorOptions& default_instance() {
    return *internal_default_instance();
  }
  static inline const FrameSelectionSolutionEvaluatorOptions* internal_default_instance() {
    return reinterpret_cast<const FrameSelectionSolutionEvaluatorOptions*>(
               &_FrameSelectionSolutionEvaluatorOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FrameSelectionSolutionEvaluatorOptions& a, FrameSelectionSolutionEvaluatorOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(FrameSelectionSolutionEvaluatorOptions* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FrameSelectionSolutionEvaluatorOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FrameSelectionSolutionEvaluatorOptions* New() const final {
    return CreateMaybeMessage<FrameSelectionSolutionEvaluatorOptions>(nullptr);
  }

  FrameSelectionSolutionEvaluatorOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FrameSelectionSolutionEvaluatorOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FrameSelectionSolutionEvaluatorOptions& from);
  void MergeFrom(const FrameSelectionSolutionEvaluatorOptions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FrameSelectionSolutionEvaluatorOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.FrameSelectionSolutionEvaluatorOptions";
  }
  protected:
  explicit FrameSelectionSolutionEvaluatorOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(FrameSelectionSolutionEvaluatorOptions)
  // @@protoc_insertion_point(class_scope:mediapipe.FrameSelectionSolutionEvaluatorOptions)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::ExtensionSet _extensions_;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto;
};
// -------------------------------------------------------------------

class FrameSelectionSolutionEvaluatorType PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mediapipe.FrameSelectionSolutionEvaluatorType) */ {
 public:
  inline FrameSelectionSolutionEvaluatorType() : FrameSelectionSolutionEvaluatorType(nullptr) {}
  ~FrameSelectionSolutionEvaluatorType() override;
  explicit constexpr FrameSelectionSolutionEvaluatorType(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FrameSelectionSolutionEvaluatorType(const FrameSelectionSolutionEvaluatorType& from);
  FrameSelectionSolutionEvaluatorType(FrameSelectionSolutionEvaluatorType&& from) noexcept
    : FrameSelectionSolutionEvaluatorType() {
    *this = ::std::move(from);
  }

  inline FrameSelectionSolutionEvaluatorType& operator=(const FrameSelectionSolutionEvaluatorType& from) {
    CopyFrom(from);
    return *this;
  }
  inline FrameSelectionSolutionEvaluatorType& operator=(FrameSelectionSolutionEvaluatorType&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const FrameSelectionSolutionEvaluatorType& default_instance() {
    return *internal_default_instance();
  }
  static inline const FrameSelectionSolutionEvaluatorType* internal_default_instance() {
    return reinterpret_cast<const FrameSelectionSolutionEvaluatorType*>(
               &_FrameSelectionSolutionEvaluatorType_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FrameSelectionSolutionEvaluatorType& a, FrameSelectionSolutionEvaluatorType& b) {
    a.Swap(&b);
  }
  inline void Swap(FrameSelectionSolutionEvaluatorType* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FrameSelectionSolutionEvaluatorType* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FrameSelectionSolutionEvaluatorType* New() const final {
    return CreateMaybeMessage<FrameSelectionSolutionEvaluatorType>(nullptr);
  }

  FrameSelectionSolutionEvaluatorType* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FrameSelectionSolutionEvaluatorType>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FrameSelectionSolutionEvaluatorType& from);
  void MergeFrom(const FrameSelectionSolutionEvaluatorType& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FrameSelectionSolutionEvaluatorType* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mediapipe.FrameSelectionSolutionEvaluatorType";
  }
  protected:
  explicit FrameSelectionSolutionEvaluatorType(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClassNameFieldNumber = 1,
    kOptionsFieldNumber = 2,
  };
  // optional string class_name = 1 [default = "FrameSelectionSolutionEvaluator"];
  bool has_class_name() const;
  private:
  bool _internal_has_class_name() const;
  public:
  void clear_class_name();
  const std::string& class_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_class_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_class_name();
  std::string* release_class_name();
  void set_allocated_class_name(std::string* class_name);
  private:
  const std::string& _internal_class_name() const;
  void _internal_set_class_name(const std::string& value);
  std::string* _internal_mutable_class_name();
  public:

  // optional .mediapipe.FrameSelectionSolutionEvaluatorOptions options = 2;
  bool has_options() const;
  private:
  bool _internal_has_options() const;
  public:
  void clear_options();
  const ::mediapipe::FrameSelectionSolutionEvaluatorOptions& options() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::mediapipe::FrameSelectionSolutionEvaluatorOptions* release_options();
  ::mediapipe::FrameSelectionSolutionEvaluatorOptions* mutable_options();
  void set_allocated_options(::mediapipe::FrameSelectionSolutionEvaluatorOptions* options);
  private:
  const ::mediapipe::FrameSelectionSolutionEvaluatorOptions& _internal_options() const;
  ::mediapipe::FrameSelectionSolutionEvaluatorOptions* _internal_mutable_options();
  public:
  void unsafe_arena_set_allocated_options(
      ::mediapipe::FrameSelectionSolutionEvaluatorOptions* options);
  ::mediapipe::FrameSelectionSolutionEvaluatorOptions* unsafe_arena_release_options();

  // @@protoc_insertion_point(class_scope:mediapipe.FrameSelectionSolutionEvaluatorType)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  static const ::PROTOBUF_NAMESPACE_ID::internal::LazyString _i_give_permission_to_break_this_code_default_class_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr class_name_;
  ::mediapipe::FrameSelectionSolutionEvaluatorOptions* options_;
  friend struct ::TableStruct_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FrameSelectionSolutionEvaluatorOptions

// -------------------------------------------------------------------

// FrameSelectionSolutionEvaluatorType

// optional string class_name = 1 [default = "FrameSelectionSolutionEvaluator"];
inline bool FrameSelectionSolutionEvaluatorType::_internal_has_class_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FrameSelectionSolutionEvaluatorType::has_class_name() const {
  return _internal_has_class_name();
}
inline void FrameSelectionSolutionEvaluatorType::clear_class_name() {
  class_name_.ClearToDefault(::mediapipe::FrameSelectionSolutionEvaluatorType::_i_give_permission_to_break_this_code_default_class_name_, GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FrameSelectionSolutionEvaluatorType::class_name() const {
  // @@protoc_insertion_point(field_get:mediapipe.FrameSelectionSolutionEvaluatorType.class_name)
  if (class_name_.IsDefault(nullptr)) return _i_give_permission_to_break_this_code_default_class_name_.get();
  return _internal_class_name();
}
template <typename ArgT0, typename... ArgT>
PROTOBUF_ALWAYS_INLINE
inline void FrameSelectionSolutionEvaluatorType::set_class_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 class_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::NonEmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArena());
  // @@protoc_insertion_point(field_set:mediapipe.FrameSelectionSolutionEvaluatorType.class_name)
}
inline std::string* FrameSelectionSolutionEvaluatorType::mutable_class_name() {
  // @@protoc_insertion_point(field_mutable:mediapipe.FrameSelectionSolutionEvaluatorType.class_name)
  return _internal_mutable_class_name();
}
inline const std::string& FrameSelectionSolutionEvaluatorType::_internal_class_name() const {
  return class_name_.Get();
}
inline void FrameSelectionSolutionEvaluatorType::_internal_set_class_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  class_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::NonEmptyDefault{}, value, GetArena());
}
inline std::string* FrameSelectionSolutionEvaluatorType::_internal_mutable_class_name() {
  _has_bits_[0] |= 0x00000001u;
  return class_name_.Mutable(::mediapipe::FrameSelectionSolutionEvaluatorType::_i_give_permission_to_break_this_code_default_class_name_, GetArena());
}
inline std::string* FrameSelectionSolutionEvaluatorType::release_class_name() {
  // @@protoc_insertion_point(field_release:mediapipe.FrameSelectionSolutionEvaluatorType.class_name)
  if (!_internal_has_class_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return class_name_.ReleaseNonDefault(nullptr, GetArena());
}
inline void FrameSelectionSolutionEvaluatorType::set_allocated_class_name(std::string* class_name) {
  if (class_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  class_name_.SetAllocated(nullptr, class_name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:mediapipe.FrameSelectionSolutionEvaluatorType.class_name)
}

// optional .mediapipe.FrameSelectionSolutionEvaluatorOptions options = 2;
inline bool FrameSelectionSolutionEvaluatorType::_internal_has_options() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || options_ != nullptr);
  return value;
}
inline bool FrameSelectionSolutionEvaluatorType::has_options() const {
  return _internal_has_options();
}
inline void FrameSelectionSolutionEvaluatorType::clear_options() {
  if (options_ != nullptr) options_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::mediapipe::FrameSelectionSolutionEvaluatorOptions& FrameSelectionSolutionEvaluatorType::_internal_options() const {
  const ::mediapipe::FrameSelectionSolutionEvaluatorOptions* p = options_;
  return p != nullptr ? *p : reinterpret_cast<const ::mediapipe::FrameSelectionSolutionEvaluatorOptions&>(
      ::mediapipe::_FrameSelectionSolutionEvaluatorOptions_default_instance_);
}
inline const ::mediapipe::FrameSelectionSolutionEvaluatorOptions& FrameSelectionSolutionEvaluatorType::options() const {
  // @@protoc_insertion_point(field_get:mediapipe.FrameSelectionSolutionEvaluatorType.options)
  return _internal_options();
}
inline void FrameSelectionSolutionEvaluatorType::unsafe_arena_set_allocated_options(
    ::mediapipe::FrameSelectionSolutionEvaluatorOptions* options) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(options_);
  }
  options_ = options;
  if (options) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:mediapipe.FrameSelectionSolutionEvaluatorType.options)
}
inline ::mediapipe::FrameSelectionSolutionEvaluatorOptions* FrameSelectionSolutionEvaluatorType::release_options() {
  _has_bits_[0] &= ~0x00000002u;
  ::mediapipe::FrameSelectionSolutionEvaluatorOptions* temp = options_;
  options_ = nullptr;
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::mediapipe::FrameSelectionSolutionEvaluatorOptions* FrameSelectionSolutionEvaluatorType::unsafe_arena_release_options() {
  // @@protoc_insertion_point(field_release:mediapipe.FrameSelectionSolutionEvaluatorType.options)
  _has_bits_[0] &= ~0x00000002u;
  ::mediapipe::FrameSelectionSolutionEvaluatorOptions* temp = options_;
  options_ = nullptr;
  return temp;
}
inline ::mediapipe::FrameSelectionSolutionEvaluatorOptions* FrameSelectionSolutionEvaluatorType::_internal_mutable_options() {
  _has_bits_[0] |= 0x00000002u;
  if (options_ == nullptr) {
    auto* p = CreateMaybeMessage<::mediapipe::FrameSelectionSolutionEvaluatorOptions>(GetArena());
    options_ = p;
  }
  return options_;
}
inline ::mediapipe::FrameSelectionSolutionEvaluatorOptions* FrameSelectionSolutionEvaluatorType::mutable_options() {
  // @@protoc_insertion_point(field_mutable:mediapipe.FrameSelectionSolutionEvaluatorType.options)
  return _internal_mutable_options();
}
inline void FrameSelectionSolutionEvaluatorType::set_allocated_options(::mediapipe::FrameSelectionSolutionEvaluatorOptions* options) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete options_;
  }
  if (options) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      ::PROTOBUF_NAMESPACE_ID::Arena::GetArena(options);
    if (message_arena != submessage_arena) {
      options = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, options, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  options_ = options;
  // @@protoc_insertion_point(field_set_allocated:mediapipe.FrameSelectionSolutionEvaluatorType.options)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mediapipe

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_mediapipe_2futil_2ftracking_2fframe_5fselection_5fsolution_5fevaluator_2eproto
