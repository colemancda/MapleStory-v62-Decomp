/* FUN_007e6d32 - 0x007e6d32 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007e6d32(int param_1)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x74)) {
  case 0:
  case 1:
  case 4:
    uVar1 = -(uint)(*(int *)(param_1 + 0x9c) != 0) & 0xffffff7d;
    break;
  case 2:
  case 3:
  case 7:
    uVar1 = -(uint)(*(int *)(param_1 + 0x9c) != 0) & 0xffffff8c;
    break;
  case 5:
  case 6:
    return 0x118;
  default:
    return 0;
  }
  return uVar1 + 0x155;
}


