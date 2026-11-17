/* FUN_0041f52d - 0x0041f52d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0041f52d(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  (*DAT_0097b3d8)(*(undefined4 *)(param_1 + 0xc));
  (*DAT_0097b3e4)(uVar1,0xffffffff);
  (*DAT_0097b388)(uVar1);
  return;
}


