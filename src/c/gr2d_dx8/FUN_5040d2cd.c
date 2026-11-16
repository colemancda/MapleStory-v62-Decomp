/* FUN_5040d2cd - 0x5040d2cd in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 __thiscall
FUN_5040d2cd(void *this,uint param_1,uint param_2,float *param_3,uint *param_4,uint *param_5,
            int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint local_60 [16];
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar4 = param_5;
  if (*(int *)((int)this + 0x74) == 0) {
LAB_5040d2f6:
    local_8 = 0;
  }
  else {
    iVar5 = (*DAT_50438d40)(param_5,(int)this + 100);
    local_8 = 1;
    if (iVar5 == 0) goto LAB_5040d2f6;
  }
  if (*(int *)((int)this + 0x74) != 0) {
    iVar5 = (*DAT_50438d40)(param_4,(int)this + 0x54);
    if (iVar5 != 0) {
      bVar3 = true;
      goto LAB_5040d316;
    }
  }
  bVar3 = false;
LAB_5040d316:
  if ((local_8 == 0) || (!bVar3)) {
    *(uint *)((int)this + 100) = *param_5;
    *(uint *)((int)this + 0x68) = param_5[1];
    *(uint *)((int)this + 0x6c) = param_5[2];
    *(uint *)((int)this + 0x70) = param_5[3];
    *(uint *)((int)this + 0x54) = *param_4;
    *(uint *)((int)this + 0x58) = param_4[1];
    *(uint *)((int)this + 0x5c) = param_4[2];
    *(uint *)((int)this + 0x60) = param_4[3];
    local_c = (int)((*param_5 - 1) + param_5[2]) / (int)param_5[2];
    local_10 = (int)((param_5[3] - 1) + param_5[1]) / (int)param_5[3];
    if (local_8 == 0) {
      iVar5 = local_c * 2 + 2;
      uVar8 = (local_10 + 1) * iVar5;
      *(int *)((int)this + 0x7c) = iVar5;
      if ((*(undefined4 **)((int)this + 0x74) == (undefined4 *)0x0) ||
         (*(uint *)((int)this + 0x80) < uVar8)) {
        *(uint *)((int)this + 0x80) = uVar8;
        FUN_5040170b(&DAT_50438f50,*(undefined4 **)((int)this + 0x74));
        puVar6 = FUN_504015ff();
        *(uint **)((int)this + 0x74) = puVar6;
        FUN_5040170b(&DAT_50438f50,*(undefined4 **)((int)this + 0x78));
        puVar6 = FUN_504015ff();
        *(uint **)((int)this + 0x78) = puVar6;
      }
    }
    FUN_5040d56a(local_60,*param_5,param_5[1],param_2,(uint)param_3,*param_4,param_4[1],
                 param_4[2] - *param_4,param_4[3] - param_4[1],param_1);
    param_3 = *(float **)((int)this + 0x74);
    param_4 = (uint *)0x0;
    piVar9 = *(int **)((int)this + 0x78);
    local_10 = local_10 + 1;
    do {
      if ((int)puVar4[1] <= (int)param_4) {
        param_4 = (uint *)puVar4[1];
      }
      param_5 = (uint *)0x0;
      local_8 = local_c + 1;
      do {
        piVar10 = piVar9;
        if ((int)*puVar4 <= (int)param_5) {
          param_5 = (uint *)*puVar4;
        }
        iVar5 = 0;
        if ((0 < (int)param_1) && (*(int *)((int)this + 0x48) != 0)) {
          iVar5 = 1;
        }
        FUN_5040d6f7(local_60,piVar10,(uint)param_5,(uint)param_4,iVar5,param_6);
        *param_3 = (float)*piVar10;
        piVar9 = piVar10 + 2;
        param_3[1] = (float)piVar10[1];
        param_3 = param_3 + 2;
        param_5 = (uint *)((int)param_5 + puVar4[2]);
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      param_4 = (uint *)((int)param_4 + puVar4[3]);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    iVar5 = *(int *)((int)this + 0x7c);
    piVar1 = (int *)((int)this + 0x84);
    puVar2 = *(undefined4 **)((int)this + 0x78);
    (*DAT_50438c0c)(piVar1,*puVar2,puVar2[1],*piVar10,piVar10[1]);
    FUN_5040d4ef(piVar1);
    if ((int)param_1 < 0) {
      local_20 = piVar9[-iVar5];
      local_14 = puVar2[iVar5 + -1];
      local_1c = (piVar9 + -iVar5)[1];
      local_18 = puVar2[iVar5 + -2];
      FUN_5040d4ef(&local_20);
      FUN_5040d520(piVar1,piVar1,&local_20);
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}


