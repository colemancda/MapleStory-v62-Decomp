/* FUN_008740c0 - 0x008740c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_008740c0(undefined4 *param_1)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = (local_10._6_4_ & 0xffff) * (uint)local_10.wMonth * (uint)local_10.wYear ^ 0xdad53a;
  *param_1 = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  param_1[0x18b] = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  param_1[0x58c] = 0;
  return param_1;
}


