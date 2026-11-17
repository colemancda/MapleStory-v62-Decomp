/* FUN_005eac7f - 0x005eac7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005eac7f(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  uVar3 = 1;
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar1 & 1;
  }
  iVar2 = (int)uVar1 >> 1;
  if ((iVar2 == 1) || (iVar2 != 2)) {
    uVar3 = 0;
  }
  iVar2 = FUN_005ea7e8();
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xa0);
  }
  return uVar3;
}


