/* FUN_00526cad - 0x00526cad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00526cad(int param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 local_118;
  undefined4 local_117;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 8 + param_2 * 4) != 0) {
    if (param_2 == 0) {
      local_118 = 0;
      puVar8 = &local_117;
      for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),0x100,&local_118)
      ;
      if (-1 < iVar3) {
        return 1;
      }
      if (DAT_00978364 != 0) {
        FUN_0081b22c(0x15,1,0);
      }
      *(undefined4 *)(param_1 + 0x928) = 0;
      *(undefined4 *)(param_1 + 0x924) = 0;
      _memset((void *)(param_1 + 0x824),0,0x100);
      uVar2 = (*DAT_0097b58c)(0x91);
      uVar5 = (*DAT_0097b58c)(0x90);
      uVar6 = (*DAT_0097b58c)(0x14);
      *(uint *)(param_1 + 0x92c) = (((uVar2 & 1) << 1 | uVar5 & 1) << 1 | uVar6 & 1) << 0x1c;
      piVar1 = (int *)(param_1 + 0x930);
      iVar3 = (*DAT_0097b594)(0x16,0,piVar1,0);
      if (iVar3 == 0) {
        *piVar1 = 3;
      }
      iVar3 = (*piVar1 + 1) * 0xfa;
      if (iVar3 < 0xfb) {
        iVar3 = 0xfa;
      }
      if (999 < iVar3) {
        iVar3 = 1000;
      }
      *piVar1 = iVar3;
      piVar1 = (int *)(param_1 + 0x934);
      iVar3 = (*DAT_0097b594)(10,0,piVar1,0);
      if (iVar3 == 0) {
        *piVar1 = 0;
      }
      iVar3 = *piVar1 * -0xc + 400;
      if (iVar3 < 0x22) {
        iVar3 = 0x21;
      }
      iVar7 = 400;
      if (iVar3 < 400) {
        iVar7 = iVar3;
      }
      *piVar1 = iVar7;
    }
    else if (param_2 == 1) {
      local_18 = 0;
      local_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      iVar3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x24))
                        (*(int **)(param_1 + 0xc),0x14,&local_18);
      if (-1 < iVar3) {
        return 1;
      }
      FUN_00526469(*(undefined4 *)(param_1 + 0x938),*(undefined4 *)(param_1 + 0x93c));
      uVar4 = (*DAT_0097b590)();
      *(undefined4 *)(param_1 + 0x964) = uVar4;
      uVar4 = (*DAT_0097b544)(0x24);
      *(undefined4 *)(param_1 + 0x968) = uVar4;
      uVar4 = (*DAT_0097b544)(0x25);
      *(undefined4 *)(param_1 + 0x96c) = uVar4;
      uVar4 = (*DAT_0097b544)(0x17);
      *(undefined4 *)(param_1 + 0x974) = uVar4;
    }
    iVar3 = 0;
    do {
      piVar1 = *(int **)(param_1 + 8 + param_2 * 4);
      iVar7 = (**(code **)(*piVar1 + 0x1c))(piVar1);
      if (-1 < iVar7) {
        if (param_2 != 0) {
          return 1;
        }
        FUN_00527313(0);
        return 1;
      }
      (*DAT_0097b3ec)(100);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
  }
  return 0;
}


