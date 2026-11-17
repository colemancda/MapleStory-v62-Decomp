/* FUN_0052b5f0 - 0x0052b5f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0052b5f0(int param_1,undefined4 *param_2)

{
  DWORD *pDVar1;
  SYSTEMTIME local_24;
  undefined1 local_14 [8];
  _FILETIME local_c;
  
  (*DAT_0097b4a8)(&local_24);
  SystemTimeToFileTime(&local_24,&local_c);
  pDVar1 = (DWORD *)FUN_0052b5b4(local_14,local_c.dwLowDateTime,local_c.dwHighDateTime,
                                 *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),0);
  local_c.dwLowDateTime = *pDVar1;
  local_c.dwHighDateTime = pDVar1[1];
  FileTimeToSystemTime(&local_c,&local_24);
  *param_2 = local_24._0_4_;
  param_2[1] = local_24._4_4_;
  param_2[2] = local_24._8_4_;
  param_2[3] = local_24._12_4_;
  return;
}


