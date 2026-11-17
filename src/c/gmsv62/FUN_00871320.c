/* FUN_00871320 - 0x00871320 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00871320(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  uVar1 = param_1[1];
  EnterCriticalSection(lpCriticalSection);
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)param_1[2];
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}


