/* ptr_004bad21 - 0x004bad21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall ptr_004bad21(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0045f084(param_1 + 0xac,*(undefined4 *)(param_1 + 0xb0));
  return uVar1 & 1;
}


