/* FUN_50004859 - 0x50004859 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 __thiscall
FUN_50004859(void *this,undefined4 param_1,int param_2,int param_3,undefined4 param_4,
            undefined2 param_5,int *param_6,int *param_7)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  uint *puVar9;
  int iVar10;
  undefined2 uStack00000016;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_1c [2];
  int local_14 [2];
  int local_c;
  undefined1 *local_8;
  
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  uStack_3c = 2;
  puStack_40 = &param_5;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack00000016 = 0x48;
  local_c = (*DAT_50081c24)();
  iVar7 = local_c + -1;
  FUN_50012e10();
  local_8 = (undefined1 *)&uStack_48;
  (*DAT_50081c24)(0,0,&param_5,2,&uStack_48,0x3fffffff,0,0);
  (*DAT_50081dcc)(*(undefined4 *)((int)this + 0x30),*(undefined4 *)((int)this + 0x2c));
  (*DAT_50081dcc)(*(undefined4 *)((int)this + 0x30),param_1);
  puVar4 = local_8;
  (*DAT_50081de0)(*(undefined4 *)((int)this + 0x30),local_8,local_c,local_14);
  (*DAT_50081de0)(*(undefined4 *)((int)this + 0x30),puVar4 + iVar7,1,local_1c);
  local_14[0] = local_14[0] - local_1c[0];
  *param_6 = local_14[0];
  *param_7 = local_14[0];
  if ((*(byte *)((int)this + 0x1c) & 2) != 0) {
    *param_7 = ((uint)(*(int *)((int)this + 0x14) * 3) >> 1) + local_14[0];
  }
  *param_7 = *param_7 + 2;
  if (*(int *)(param_2 + 4) < *param_7 + param_3) {
    uVar5 = 0;
  }
  else {
    (*DAT_50081ddc)(*(undefined4 *)((int)this + 0x30),param_3,param_4,local_8,iVar7);
    uVar3 = *(uint *)((int)this + 0x18);
    if (*(short *)(param_2 + 0x12) == 0x10) {
      uVar6 = FUN_50004a0b(uVar3 & 0xffffff);
      uVar3 = *(uint *)(param_2 + 0xc);
      puVar1 = (ushort *)(*(int *)(param_2 + 0x14) + param_3 * 2);
      for (iVar7 = *(int *)((int)this + 0x20); iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar10 = *param_7;
        puVar8 = puVar1;
        if (0 < iVar10) {
          do {
            if ((~(byte)*puVar8 & 0x1f) == 0) {
              *puVar8 = 0;
            }
            else {
              *puVar8 = ((byte)~(byte)*puVar8 & 0x1e) << 0xb | (ushort)uVar6;
            }
            iVar10 = iVar10 + -1;
            puVar8 = puVar8 + 1;
          } while (iVar10 != 0);
        }
        puVar1 = (ushort *)((int)puVar1 + (uVar3 & 0xfffffffe));
      }
    }
    else {
      uVar6 = *(uint *)(param_2 + 0xc);
      puVar2 = (uint *)(*(int *)(param_2 + 0x14) + param_3 * 4);
      for (iVar7 = *(int *)((int)this + 0x20); iVar7 != 0; iVar7 = iVar7 + -1) {
        iVar10 = *param_7;
        puVar9 = puVar2;
        if (0 < iVar10) {
          do {
            if ((~*puVar9 & 0xff) == 0) {
              *puVar9 = 0;
            }
            else {
              *puVar9 = ~*puVar9 << 0x18 | uVar3 & 0xffffff;
            }
            iVar10 = iVar10 + -1;
            puVar9 = puVar9 + 1;
          } while (iVar10 != 0);
        }
        puVar2 = (uint *)((int)puVar2 + (uVar6 & 0xfffffffc));
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


