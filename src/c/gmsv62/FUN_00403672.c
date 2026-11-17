/* FUN_00403672 - 0x00403672 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00403672(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  while (uVar2 != 0) {
    uVar2 = -(uint)(uVar2 != 0) & uVar2 - 0x10;
    iVar1 = *(int *)(uVar2 + 4);
    FUN_0040294d(uVar2);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


