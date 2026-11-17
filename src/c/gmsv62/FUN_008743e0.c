/* FUN_008743e0 - 0x008743e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008743e0(undefined4 *param_1)

{
  DWORD DVar1;
  
  if (param_1[1] == -1) {
    return 0;
  }
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    SetEvent((HANDLE)param_1[4]);
  }
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject((HANDLE)*param_1,100);
    if (DVar1 == 0x102) {
      TerminateThread((HANDLE)*param_1,0);
    }
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  if ((HANDLE)param_1[1] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0xffffffff;
  }
  if ((HANDLE)param_1[2] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0xffffffff;
  }
  return 1;
}


