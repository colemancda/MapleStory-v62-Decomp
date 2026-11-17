/* FUN_005cd0ad - 0x005cd0ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005cd0ad(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_007d1e08();
  uVar3 = FUN_0042459a();
  FUN_0066aceb(uVar3,param_2,uVar2);
  if ((uVar3 & 0x200) != 0) {
    iVar4 = *(int *)(param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x3dc) = uVar2;
    if ((iVar4 == 0x205d2b) || (iVar4 == 0x21e3cb)) {
      FUN_0066b981(iVar4);
    }
    else {
      if ((*(int *)(param_1 + 0x274) == 0) || (iVar4 = *(int *)(param_1 + 0x160), iVar4 == 0)) {
        iVar4 = *(int *)(param_1 + 0x15c);
      }
      FUN_0066b9be(iVar4 + 0x118);
    }
  }
  if ((uVar3 & 0x1000000) != 0) {
    *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  }
  if ((uVar3 & 0x400000) != 0) {
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  }
  if ((uVar3 & 0x10000) != 0) {
    uVar2 = FUN_005d90ec(0x18705);
    FUN_0066a3d0(uVar2);
  }
  if ((uVar3 & 0x10000000) != 0) {
    FUN_005cc3d9(0,0,0);
    FUN_005d0cc5(param_1);
  }
  uVar1 = FUN_00424561();
  uVar5 = FUN_0042452b();
  *(uint *)(param_1 + 0x444) = uVar5 & 0xff;
  FUN_005c7141(uVar1);
  if ((uVar3 & 0x40) != 0) {
    FUN_005c55cd();
  }
  return;
}


