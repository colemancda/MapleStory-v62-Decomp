/* ptr_004bb167 - 0x004bb167 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall ptr_004bb167(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0045f084(param_1 + 0x30,*(undefined4 *)(param_1 + 0x34));
  return uVar1 & 1;
}


