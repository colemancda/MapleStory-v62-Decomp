/* FUN_00871240 - 0x00871240 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00871240(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1[2] != 0) {
    VirtualFree((LPVOID)param_1[7],0,0x8000);
    lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection(lpCriticalSection);
      FUN_00402614(lpCriticalSection);
    }
  }
  return;
}


