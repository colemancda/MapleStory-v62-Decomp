/* FUN_007a5478 - 0x007a5478 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a5478(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_2c;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 4);
  piVar1 = (int *)(extraout_ECX + 4);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_2c = 0x7a549c;
  iVar3 = (**(code **)(iVar3 + 0x10))();
  iStack_2c = *(int *)(iVar3 + 4);
  puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x10))();
  piVar5 = (int *)FUN_006217c6(*puVar4);
  if (piVar5 != (int *)0x0) {
    if (piVar5[2] == 9) {
      iStack_2c = 0;
      iVar3 = FUN_004becbc(piVar5[9]);
      if ((iVar3 != 0) &&
         ((piVar5[8] == 0 || (*piVar5 != *(int *)(*(int *)(unaff_EBP + -0x10) + 0x24e0))))) {
        iStack_2c = 0;
        FUN_0060142b(0x5c,0);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_2c = 0x7a5506;
        iVar3 = FUN_00429303();
        *(undefined1 *)(unaff_EBP + -0x14) = *(undefined1 *)(iVar3 + 0xf8);
        iStack_2c = *(int *)(unaff_EBP + -0x14);
        FUN_00457cda();
        *(int **)(unaff_EBP + -0x14) = &iStack_2c;
        iStack_2c = 0;
        FUN_00414f8b(piVar5 + 1);
        FUN_00459cb5();
        iStack_2c = 0x7a553a;
        puVar6 = (undefined2 *)(**(code **)(*piVar1 + 0x10))();
        iStack_2c = CONCAT22((short)((uint)puVar6 >> 0x10),*puVar6);
        FUN_0045d247();
        iStack_2c = 0x7a554d;
        iVar3 = (**(code **)(*piVar1 + 0x10))();
        iStack_2c = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar3 + 4));
        FUN_0045d247();
        iStack_2c = unaff_EBP + -0x28;
        FUN_004751b2();
        iVar2 = DAT_00978368;
        *(undefined4 *)(DAT_00978368 + 0x208c) = 1;
        iStack_2c = 0x7a557e;
        uVar7 = FUN_007d1e08();
        iVar3 = *(int *)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(iVar2 + 0x2090) = uVar7;
        *(int *)(iVar3 + 0x24e0) = *piVar5;
        iStack_2c = 0x7a559b;
        FUN_0045ebca();
      }
    }
    else if (piVar5[5] != 999999999) {
      iStack_2c = 0x7a55b2;
      FUN_00429303();
      iStack_2c = 0x7a55bf;
      iVar3 = FUN_004f162d();
      if (iVar3 == piVar5[5]) {
        iStack_2c = 1;
        iVar3 = FUN_007acde7(0,0,piVar5[1],piVar5[6]);
        if (iVar3 == 0) goto LAB_007a564f;
        iStack_2c = 0x865;
        puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14);
        uVar7 = *puVar4;
        iStack_2c = 100;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_007d4073(uVar7);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        iStack_2c = 0;
        iVar3 = FUN_004ea30d(0xffffffff,piVar5[1],0,0);
        if (iVar3 == 0) goto LAB_007a564f;
        iStack_2c = 0x865;
        puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18);
        uVar7 = *puVar4;
        iStack_2c = 100;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_007d4073(uVar7);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      iStack_2c = 0x7a564f;
      FUN_00402676();
    }
  }
LAB_007a564f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


