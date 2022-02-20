
#pragma once

#define CONFIG_ARM_HIKEY_OUTSTANDING_PREFETCHERS  0
#define CONFIG_ARM_HIKEY_PREFETCHER_STRIDE  0
#define CONFIG_ARM_HIKEY_PREFETCHER_NPFSTRM  0
/* disabled: CONFIG_ARM_HIKEY_PREFETCHER_STBPFDIS */
/* disabled: CONFIG_ARM_HIKEY_PREFETCHER_STBPFRS */
/* disabled: CONFIG_PLAT_IMX7 */
#define CONFIG_USER_TOP  0xa0000000
/* disabled: CONFIG_ARCH_AARCH32 */
/* disabled: CONFIG_ARCH_AARCH64 */
/* disabled: CONFIG_ARCH_ARM_HYP */
/* disabled: CONFIG_ARCH_RISCV32 */
#define CONFIG_ARCH_RISCV64  1  /* KernelSel4ArchRiscV64=ON */
/* disabled: CONFIG_ARCH_X86_64 */
/* disabled: CONFIG_ARCH_IA32 */
#define CONFIG_SEL4_ARCH  riscv64
#define CONFIG_ARCH_RISCV  1  /* KernelArchRiscV=ON */
#define CONFIG_ARCH  riscv
#define CONFIG_WORD_SIZE  64
#define CONFIG_RISCV_PLAT  spike
#define CONFIG_FIRST_HART_ID  0
#define CONFIG_OPENSBI_PLATFORM  generic
/* disabled: CONFIG_PLAT_ARIANE */
/* disabled: CONFIG_PLAT_HIFIVE */
/* disabled: CONFIG_PLAT_POLARFIRE */
/* disabled: CONFIG_PLAT_ROCKETCHIP */
#define CONFIG_PLAT_SPIKE  1  /* KernelPlatformSpike=ON */
/* disabled: CONFIG_PLAT_ARIANE */
/* disabled: CONFIG_PLAT_HIFIVE */
/* disabled: CONFIG_PLAT_POLARFIRE */
/* disabled: CONFIG_PLAT_ROCKETCHIP */
#define CONFIG_PLAT_SPIKE  1  /* KernelPlatformSpike=ON */
#define CONFIG_PLAT  spike
/* disabled: CONFIG_ARM_CORTEX_A7 */
/* disabled: CONFIG_ARM_CORTEX_A8 */
/* disabled: CONFIG_ARM_CORTEX_A9 */
/* disabled: CONFIG_ARM_CORTEX_A15 */
/* disabled: CONFIG_ARM_CORTEX_A35 */
/* disabled: CONFIG_ARM_CORTEX_A53 */
/* disabled: CONFIG_ARM_CORTEX_A55 */
/* disabled: CONFIG_ARM_CORTEX_A57 */
/* disabled: CONFIG_ARM_CORTEX_A72 */
/* disabled: CONFIG_ARCH_ARM_V7A */
/* disabled: CONFIG_ARCH_ARM_V7VE */
/* disabled: CONFIG_ARCH_ARM_V8A */
/* disabled: CONFIG_ARM_SMMU */
/* disabled: CONFIG_AARCH64_SERROR_IGNORE */
/* disabled: CONFIG_KERNEL_MCS */
#define CONFIG_PT_LEVELS  3
/* disabled: CONFIG_RISCV_EXT_F */
/* disabled: CONFIG_RISCV_EXT_D */
/* disabled: CONFIG_EXPORT_PCNT_USER */
/* disabled: CONFIG_EXPORT_VCNT_USER */
/* disabled: CONFIG_EXPORT_PTMR_USER */
/* disabled: CONFIG_EXPORT_VTMR_USER */
#define CONFIG_VTIMER_UPDATE_VOFFSET  1  /* KernelArmVtimerUpdateVOffset=ON */
/* disabled: CONFIG_HAVE_FPU */
#define CONFIG_PADDR_USER_DEVICE_TOP  549755813888
#define CONFIG_ROOT_CNODE_SIZE_BITS  12
#define CONFIG_TIMER_TICK_MS  2
#define CONFIG_TIME_SLICE  5
#define CONFIG_RETYPE_FAN_OUT_LIMIT  256
#define CONFIG_MAX_NUM_WORK_UNITS_PER_PREEMPTION  100
#define CONFIG_RESET_CHUNK_BITS  8
#define CONFIG_MAX_NUM_BOOTINFO_UNTYPED_CAPS  230
#define CONFIG_FASTPATH  1  /* KernelFastpath=ON */
#define CONFIG_NUM_DOMAINS  1
#define CONFIG_NUM_PRIORITIES  256
#define CONFIG_MAX_NUM_NODES  1
/* disabled: CONFIG_ENABLE_SMP_SUPPORT */
#define CONFIG_KERNEL_STACK_BITS  12
#define CONFIG_VERIFICATION_BUILD  1  /* KernelVerificationBuild=ON */
/* disabled: CONFIG_DEBUG_BUILD */
/* disabled: CONFIG_HARDWARE_DEBUG_API */
/* disabled: CONFIG_PRINTING */
/* disabled: CONFIG_KERNEL_INVOCATION_REPORT_ERROR_IPC */
/* disabled: CONFIG_NO_BENCHMARKS */
#define CONFIG_KERNEL_BENCHMARK  none
#define CONFIG_NO_BENCHMARKS  1  /* KernelBenchmarksNone=ON */
/* disabled: CONFIG_ENABLE_BENCHMARKS */
/* disabled: CONFIG_KERNEL_LOG_BUFFER */
#define CONFIG_MAX_NUM_TRACE_POINTS  0
/* disabled: CONFIG_IRQ_REPORTING */
/* disabled: CONFIG_COLOUR_PRINTING */
#define CONFIG_USER_STACK_TRACE_LENGTH  0
/* disabled: CONFIG_KERNEL_OPT_LEVEL_O2 */
/* disabled: CONFIG_KERNEL_OPT_LEVEL_OS */
/* disabled: CONFIG_KERNEL_OPT_LEVEL_O0 */
/* disabled: CONFIG_KERNEL_OPT_LEVEL_O1 */
/* disabled: CONFIG_KERNEL_OPT_LEVEL_O3 */
#define CONFIG_KERNEL_OPT_LEVEL  -O2
#define CONFIG_KERNEL_OPT_LEVEL_O2  1  /* KernelOptimisationO2=ON */
/* disabled: CONFIG_KERNEL_FWHOLE_PROGRAM */
/* disabled: CONFIG_DANGEROUS_CODE_INJECTION */
/* disabled: CONFIG_DEBUG_DISABLE_PREFETCHERS */
/* disabled: CONFIG_SET_TLS_BASE_SELF */
/* disabled: CONFIG_CLZ_32 */
#define CONFIG_CLZ_64  1  /* KernelClz64=ON */
/* disabled: CONFIG_CTZ_32 */
#define CONFIG_CTZ_64  1  /* KernelCtz64=ON */
/* disabled: CONFIG_CLZ_NO_BUILTIN */
/* disabled: CONFIG_CTZ_NO_BUILTIN */