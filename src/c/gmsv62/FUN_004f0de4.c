/* FUN_004f0de4 - 0x004f0de4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004f0de4(int param_1,undefined4 *param_2)

{
  bool bVar1;
  SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  (*DAT_0097b4a8)(&local_1c);
  SystemTimeToFileTime(&local_1c,&local_c);
  bVar1 = CARRY4(*(uint *)(param_1 + 0x1e8),local_c.dwLowDateTime);
  local_c.dwLowDateTime = *(uint *)(param_1 + 0x1e8) + local_c.dwLowDateTime;
  local_c.dwHighDateTime = *(int *)(param_1 + 0x1ec) + local_c.dwHighDateTime + (uint)bVar1;
  FileTimeToSystemTime(&local_c,&local_1c);
  *param_2 = local_1c._0_4_;
  param_2[1] = local_1c._4_4_;
  param_2[2] = local_1c._8_4_;
  param_2[3] = local_1c._12_4_;
  return;
}


