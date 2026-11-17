/* FUN_008711d0 - 0x008711d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_008711d0(undefined4 *param_1)

{
  LPVOID lpAddress;
  LPCRITICAL_SECTION lpCriticalSection;
  
  param_1[3] = 8;
  lpAddress = VirtualAlloc((LPVOID)0x0,8,0x1000,2);
  param_1[2] = lpAddress;
  if (lpAddress == (LPVOID)0x0) {
    return param_1;
  }
  VirtualQuery(lpAddress,(PMEMORY_BASIC_INFORMATION)(param_1 + 6),0x1c);
  param_1[4] = (uint)param_1[9] / (uint)param_1[3];
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_00402605(0x18);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSection(lpCriticalSection);
    *param_1 = lpCriticalSection;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


