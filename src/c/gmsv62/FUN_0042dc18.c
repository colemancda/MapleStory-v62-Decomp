/* FUN_0042dc18 - 0x0042dc18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0042dc18(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((*(int *)(DAT_00978134 + 0x7c) != 0) || (param_6 != 0)) {
    *(undefined8 *)(param_1 + 0x180) = param_2;
    iVar2 = FUN_007d1e08();
    *(int *)(param_1 + 0x188) = iVar2 + param_4;
    *(uint *)(param_1 + 0x18c) =
         (-(uint)(param_3 != 0) & 0xfffffe0c) + 2000 + iVar2 + param_4 + param_5;
    if (param_5 == 0) {
      uVar1 = _DAT_008e8aa0;
      if (param_3 != 0) {
        uVar1 = _DAT_008e8aa8;
      }
    }
    else {
      uVar1 = 0x3ff0000000000000;
    }
    *(undefined8 *)(param_1 + 400) = uVar1;
  }
  return;
}


