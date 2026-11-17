/* FUN_004bb1ec - 0x004bb1ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004bb1ec(int param_1)

{
  undefined4 uVar1;
  
  FUN_0045f084(param_1 + 0x30,*(undefined4 *)(param_1 + 0x34));
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return;
}


