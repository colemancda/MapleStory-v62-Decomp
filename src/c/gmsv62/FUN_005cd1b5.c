/* FUN_005cd1b5 - 0x005cd1b5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005cd1b5(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_0042459a();
  FUN_0066b90b(uVar1,param_2);
  if ((uVar1 & 0x200) != 0) {
    if ((*(int *)(param_1 + 0x274) == 0) || (iVar2 = *(int *)(param_1 + 0x160), iVar2 == 0)) {
      iVar2 = *(int *)(param_1 + 0x15c);
    }
    FUN_0066b9be(iVar2 + 0x118);
  }
  if ((uVar1 & 0x10000) != 0) {
    FUN_0066a2b3(*(undefined4 *)(param_1 + 0x15c));
  }
  if ((uVar1 & 0x10000000) != 0) {
    FUN_005cc3d9(0,0,0);
    iVar2 = FUN_005d053d();
    if (iVar2 != 0) {
      FUN_005d62bf(param_1);
    }
    FUN_005d0cc5(0);
  }
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x444) = uVar3 & 0xff;
  FUN_005c7141(0);
  if ((uVar1 & 0x40) != 0) {
    FUN_005c55cd();
  }
  return;
}


