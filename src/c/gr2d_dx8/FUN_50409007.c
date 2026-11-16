/* FUN_50409007 - 0x50409007 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __thiscall FUN_50409007(void *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  *(int *)((int)this + 0x35c) = *(int *)((int)this + 0x35c) + 1;
  *(int *)((int)this + 0x360) = *(int *)((int)this + 0x360) + *(int *)(param_1 + 0x3c);
  *(int *)((int)this + 0x364) = *(int *)((int)this + 0x364) + *(int *)(param_1 + 0x40);
  uVar3 = *(uint *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x4c);
  puVar1 = (uint *)((int)this + 0x368);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x36c) = *(int *)((int)this + 0x36c) + iVar4 + (uint)CARRY4(uVar2,uVar3);
  iVar4 = (*DAT_50438e0c)();
  if (1000 < iVar4 - *(int *)((int)this + 0x358)) {
    (**(code **)(**(int **)((int)this + 900) + 0xc))();
    uVar2 = *(uint *)((int)this + 0x35c);
    if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x370) = 0;
      *(undefined4 *)((int)this + 0x374) = 0;
      *(undefined4 *)((int)this + 0x378) = 0;
      *(undefined4 *)((int)this + 0x37c) = 0;
    }
    else {
      *(uint *)((int)this + 0x370) = (uVar2 * 0x1f400) / (uint)(iVar4 - *(int *)((int)this + 0x358))
      ;
      *(uint *)((int)this + 0x374) = (uint)(*(int *)((int)this + 0x360) << 7) / uVar2;
      *(uint *)((int)this + 0x378) = (uint)(*(int *)((int)this + 0x364) << 7) / uVar2;
      uVar5 = __aulldiv(*(uint *)((int)this + 0x368),*(uint *)((int)this + 0x36c),uVar2 << 7,0);
      *(int *)((int)this + 0x37c) = (int)uVar5;
    }
    *(undefined4 *)((int)this + 0x368) = 0;
    *(undefined4 *)((int)this + 0x380) = 1;
    *(undefined4 *)((int)this + 0x35c) = 0;
    *(undefined4 *)((int)this + 0x360) = 0;
    *(undefined4 *)((int)this + 0x364) = 0;
    *(undefined4 *)((int)this + 0x36c) = 0;
    *(int *)((int)this + 0x358) = iVar4;
  }
  if (*(int *)((int)this + 0x94) < 0) {
    *(undefined4 *)((int)this + 0x32c) = 1;
    *(undefined4 *)((int)this + 0x334) = 1;
    *(undefined4 *)((int)this + 0x330) = 1;
  }
  return;
}


