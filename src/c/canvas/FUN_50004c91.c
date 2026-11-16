/* FUN_50004c91 - 0x50004c91 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void * __thiscall FUN_50004c91(void *this,undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  puVar2 = (ushort *)FUN_50005b9c((void *)((int)this + 0x58),(ushort *)&param_1,(undefined4 *)0x0);
  if (puVar2 != (ushort *)0x0) {
    if (param_2 != (uint *)0x0) {
      uVar1 = *puVar2;
      *param_2 = (uint)uVar1;
      param_2[2] = (uint)puVar2[1] + (uint)uVar1;
      uVar5 = (uint)puVar2[3] * *(int *)((int)this + 0x20);
      param_2[1] = uVar5;
      param_2[3] = *(int *)((int)this + 0x20) + uVar5;
    }
    return (void *)(uint)puVar2[2];
  }
  do {
    if ((*(int *)((int)this + 0x4c) != 0) && (iVar3 = **(int **)((int)this + 0x54), iVar3 != 0)) {
      uVar5 = *(uint *)((int)this + 0x70);
      iVar3 = FUN_50004859(this,*(undefined4 *)(iVar3 + 0x34),iVar3 + 0x38,uVar5,0,(short)param_1,
                           (int *)&local_c,(int *)&local_8);
      if (iVar3 != 0) {
        if (param_2 != (uint *)0x0) {
          param_2[2] = (int)local_8 + uVar5;
          *param_2 = uVar5;
          uVar4 = (*(int *)((int)this + 0x4c) + -1) * *(int *)((int)this + 0x20);
          param_2[1] = uVar4;
          param_2[3] = *(int *)((int)this + 0x20) + uVar4;
        }
        *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + (int)local_8;
        iVar3 = FUN_50005bf0((void *)((int)this + 0x58),(ushort *)&param_1,(undefined4 *)0x0);
        *(short *)(iVar3 + 0xc) = (short)uVar5;
        *(undefined2 *)(iVar3 + 0xe) = local_8._0_2_;
        *(undefined2 *)(iVar3 + 0x10) = local_c._0_2_;
        *(short *)(iVar3 + 0x12) = (short)*(undefined4 *)((int)this + 0x4c) + -1;
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((int)this + 0x54);
        return local_c;
      }
    }
    FUN_50004a3b();
    *(undefined4 *)((int)this + 0x70) = 0;
  } while( true );
}


