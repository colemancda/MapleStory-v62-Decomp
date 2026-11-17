/* FUN_00718ea5 - 0x00718ea5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00718ea5(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00457d37(param_2);
  iVar1 = FUN_004becbc(500,0);
  if (iVar1 != 0) {
    uVar2 = FUN_007d1e08();
    FUN_00457d37(uVar2);
    FUN_004751b2(param_1 + 0xc4);
    iVar1 = DAT_00978368;
    *(undefined4 *)(DAT_00978368 + 0x208c) = 1;
    uVar2 = FUN_007d1e08();
    *(undefined4 *)(iVar1 + 0x2090) = uVar2;
  }
  return;
}


