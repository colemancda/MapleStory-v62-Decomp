/* FUN_005cfe71 - 0x005cfe71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005cfe71(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  FUN_0066b6c1(0xffffffff);
  FUN_0066a2b3(*(undefined4 *)(param_1 + 0x15c));
  uVar1 = FUN_0042459a();
  uVar2 = FUN_007d1e08();
  FUN_0066aceb(uVar1,param_2,uVar2);
  if ((uVar1 & 0x10000) != 0) {
    uVar2 = FUN_005d90ec(0x18705);
    FUN_0066a3d0(uVar2);
  }
  FUN_0066b981(*(undefined4 *)(param_1 + 0x220));
  *(undefined4 *)(param_1 + 0x444) = param_3;
  FUN_005c7141(0);
  if ((uVar1 & 0x40) != 0) {
    FUN_005c55cd();
  }
  return;
}


