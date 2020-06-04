// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: chunk_storage.proto

#include "chunk_storage.pb.h"
#include "chunk_storage.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace minecpp {
namespace chunk_storage {

static const char* ChunkStorage_method_names[] = {
  "/minecpp.chunk_storage.ChunkStorage/LoadChunk",
};

std::unique_ptr< ChunkStorage::Stub> ChunkStorage::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ChunkStorage::Stub> stub(new ChunkStorage::Stub(channel));
  return stub;
}

ChunkStorage::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_LoadChunk_(ChunkStorage_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ChunkStorage::Stub::LoadChunk(::grpc::ClientContext* context, const ::minecpp::chunk_storage::LoadChunkRequest& request, ::minecpp::chunk::NetChunk* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_LoadChunk_, context, request, response);
}

void ChunkStorage::Stub::experimental_async::LoadChunk(::grpc::ClientContext* context, const ::minecpp::chunk_storage::LoadChunkRequest* request, ::minecpp::chunk::NetChunk* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_LoadChunk_, context, request, response, std::move(f));
}

void ChunkStorage::Stub::experimental_async::LoadChunk(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::minecpp::chunk::NetChunk* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_LoadChunk_, context, request, response, std::move(f));
}

void ChunkStorage::Stub::experimental_async::LoadChunk(::grpc::ClientContext* context, const ::minecpp::chunk_storage::LoadChunkRequest* request, ::minecpp::chunk::NetChunk* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_LoadChunk_, context, request, response, reactor);
}

void ChunkStorage::Stub::experimental_async::LoadChunk(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::minecpp::chunk::NetChunk* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_LoadChunk_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::minecpp::chunk::NetChunk>* ChunkStorage::Stub::AsyncLoadChunkRaw(::grpc::ClientContext* context, const ::minecpp::chunk_storage::LoadChunkRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::minecpp::chunk::NetChunk>::Create(channel_.get(), cq, rpcmethod_LoadChunk_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::minecpp::chunk::NetChunk>* ChunkStorage::Stub::PrepareAsyncLoadChunkRaw(::grpc::ClientContext* context, const ::minecpp::chunk_storage::LoadChunkRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::minecpp::chunk::NetChunk>::Create(channel_.get(), cq, rpcmethod_LoadChunk_, context, request, false);
}

ChunkStorage::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ChunkStorage_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ChunkStorage::Service, ::minecpp::chunk_storage::LoadChunkRequest, ::minecpp::chunk::NetChunk>(
          std::mem_fn(&ChunkStorage::Service::LoadChunk), this)));
}

ChunkStorage::Service::~Service() {
}

::grpc::Status ChunkStorage::Service::LoadChunk(::grpc::ServerContext* context, const ::minecpp::chunk_storage::LoadChunkRequest* request, ::minecpp::chunk::NetChunk* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace minecpp
}  // namespace chunk_storage

