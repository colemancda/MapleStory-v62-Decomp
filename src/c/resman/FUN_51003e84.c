/* FUN_51003e84 - 0x51003e84 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


uint __thiscall FUN_51003e84(void *this,short *param_1)

{
  int *this_00;
  undefined4 uVar1;
  uint uVar2;
  int iVar4;
  uint uVar5;
  int iVar3;
  
  this_00 = (int *)((int)this + 0x10);
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = *(uint *)(*(int *)((int)this + 0x10) + -4);
  }
  if (uVar2 <= *(uint *)((int)this + 0xc)) {
    iVar4 = *(int *)((int)this + 8);
    if ((iVar4 == 0) && (*this_00 != 0)) {
      iVar4 = *(int *)(*this_00 + -4);
    }
    iVar3 = 0;
    if (*this_00 != 0) {
      iVar3 = *(int *)(*this_00 + -4);
    }
    uVar2 = iVar3 + iVar4;
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    FUN_51004697(this_00,uVar2,0);
  }
  uVar1 = *(undefined4 *)((int)this + 0xc);
  iVar4 = FUN_51004be1();
  *(undefined4 *)(iVar4 + 4) = uVar1;
  uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  *(uint *)(*this_00 + *(int *)((int)this + 0xc) * 4) = uVar5;
  uVar2 = -(uint)(uVar5 != 0) & uVar5 - 0x10;
  FUN_5100462d((void *)(-(uint)(uVar2 != 0) & uVar2 + 0x10),param_1);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  FUN_5100473d(this);
  return uVar5;
}


