/* FUN_00617de1 - 0x00617de1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_00617de1(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0045f084(param_1 + 0x49,*(undefined4 *)(param_1 + 0x4d));
  return uVar1 & 1;
}


