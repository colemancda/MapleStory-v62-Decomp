/* FUN_007ba3cd - 0x007ba3cd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007ba3cd(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStackY_38;
  undefined4 uVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
  iVar2 = FUN_004becbc(200,0);
  if (iVar2 != 0) {
    iVar2 = FUN_00429303();
    if ((*(byte *)(iVar2 + 0x108) & 8) == 0) {
      if ((*(int *)((-(uint)(*(int *)(extraout_ECX + 0xd74) != 0) &
                    *(int *)(extraout_ECX + 0xd74) - 0xcU) + 0x110) != 0) &&
         (*(int *)(iVar2 + 0x11c) == 0)) {
        uVar4 = FUN_004f162d();
        if (((int)(((ulonglong)uVar4 / 1000000) % 100) != 9) &&
           ((*(byte *)(iVar2 + 0x108) & 8) == 0)) {
          piVar1 = (int *)(extraout_ECX + 4);
          uVar7 = 0x32;
          iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))(0x32);
          uVar3 = *(undefined4 *)(iVar2 + 4);
          puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x10))(uVar3);
          iVar2 = FUN_00621716(*puVar5,uVar3,uVar7);
          if (iVar2 == 0) {
            puVar5 = *(undefined4 **)(unaff_EBP + 8);
            iVar2 = FUN_00653f4d(*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar2 != 0) {
              uVar4 = FUN_0043f6fe();
              if (uVar4 < 0x80000000) goto LAB_007ba43e;
              iVar2 = _rand();
              uVar3 = FUN_00653ee7(*(undefined4 *)(unaff_EBP + 0xc),iVar2);
              *(undefined4 *)(extraout_ECX + 0x530) = uVar3;
              (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x10))(6,100,0);
            }
            FUN_0060142b(0x53,0,0);
            *(undefined4 *)(unaff_EBP + -4) = 2;
            uVar3 = FUN_007d1e08();
            FUN_00457d37(uVar3);
            FUN_00457d37(*puVar5);
            FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
            puVar6 = (undefined2 *)(**(code **)(*piVar1 + 0x10))();
            FUN_0045d247(*puVar6);
            iVar2 = (**(code **)(*piVar1 + 0x10))();
            FUN_0045d247(*(undefined2 *)(iVar2 + 4));
            FUN_004751b2(unaff_EBP + -0x20);
            iVar2 = *(int *)(unaff_EBP + -0x10);
            *(undefined4 *)(iVar2 + 0x208c) = 1;
            uVar7 = FUN_007d1e08();
            uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
            *(undefined4 *)(iVar2 + 0x2090) = uVar7;
            FUN_00790b31(puVar5,uVar3,6,0,0x7fffffff);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_0045ebca();
            uStackY_38 = 1;
            goto LAB_007ba440;
          }
          uVar3 = FUN_00679d22(unaff_EBP + 8,0xc23);
          *(undefined4 *)(unaff_EBP + -4) = 1;
          FUN_00471102(uVar3,0xc);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
        }
      }
    }
    else {
      uVar3 = FUN_00679d22(unaff_EBP + 0xc,0x361);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar3,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
      }
    }
  }
LAB_007ba43e:
  uStackY_38 = 0;
LAB_007ba440:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uStackY_38;
}


