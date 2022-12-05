/**
 * @file
 *
 * @brief A single file which includes, in turn, all of the CUDA
 * Runtime API wrappers and related headers.
 *
 * @note This header includes a subset of the overall API wrapper code;
 * but note that, indirectly, additional headers are included including
 * driver-related ones.
 */
#pragma once
#ifndef CUDA_RUNTIME_API_WRAPPERS_HPP_
#define CUDA_RUNTIME_API_WRAPPERS_HPP_

#include <cuda/api/types.hpp>
#include <cuda/api/array.hpp>
#include <cuda/api/constants.hpp>
#include <cuda/api/error.hpp>
#include <cuda/api/versions.hpp>
#include <cuda/api/miscellany.hpp>
#include <cuda/api/device_properties.hpp>
#include <cuda/api/current_device.hpp>
#include <cuda/api/memory.hpp>
#include <cuda/api/pointer.hpp>
#include <cuda/api/texture_view.hpp>
#include <cuda/api/unique_ptr.hpp>
#include <cuda/api/ipc.hpp>

#include <cuda/api/stream.hpp>
#include <cuda/api/device.hpp>
#include <cuda/api/event.hpp>

#include <cuda/api/peer_to_peer.hpp>
#include <cuda/api/devices.hpp>

#include <cuda/api/detail/pci_id.hpp>
#include <cuda/api/apriori_compiled_kernel.hpp>
#include <cuda/api/kernel.hpp>
#include <cuda/api/launch_configuration.hpp>
#include <cuda/api/kernel_launch.hpp>

#include <cuda/api/multi_wrapper_impls/pointer.hpp>
#include <cuda/api/multi_wrapper_impls/array.hpp>
#include <cuda/api/multi_wrapper_impls/event.hpp>
#include <cuda/api/multi_wrapper_impls/device.hpp>
#include <cuda/api/multi_wrapper_impls/event.hpp>
#include <cuda/api/multi_wrapper_impls/stream.hpp>
#include <cuda/api/multi_wrapper_impls/memory.hpp>
#include <cuda/api/multi_wrapper_impls/kernel.hpp>
#include <cuda/api/multi_wrapper_impls/kernel_launch.hpp>
#include <cuda/api/multi_wrapper_impls/apriori_compiled_kernel.hpp>

#endif // CUDA_RUNTIME_API_WRAPPERS_HPP_
