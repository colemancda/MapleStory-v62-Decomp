/* FUN_00455bfd - 0x00455bfd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_00455bfd(int param_1)

{
  int iVar1;
  SYSTEMTIME local_34;
  _SYSTEMTIME local_24;
  _FILETIME local_14;
  _FILETIME local_c;
  
  GetLocalTime(&local_24);
  SystemTimeToFileTime(&local_24,&local_14);
  local_34._0_4_ = *(undefined4 *)(param_1 + 0x206a);
  local_34._4_4_ = *(undefined4 *)(param_1 + 0x206e);
  local_34._8_4_ = *(undefined4 *)(param_1 + 0x2072);
  local_34._12_4_ = *(undefined4 *)(param_1 + 0x2076);
  SystemTimeToFileTime(&local_34,&local_c);
  iVar1 = FUN_00483b80(&local_14,&local_c);
  return iVar1 < 0x4ec0;
}


