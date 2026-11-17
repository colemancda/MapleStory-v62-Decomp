/* FUN_007a565e - 0x007a565e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a565e(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar7;
  bool bVar8;
  int iStack_24;
  
  FUN_00879bb8();
  iVar2 = DAT_00978354;
  bVar8 = DAT_00978354 != 0;
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if ((bVar8) && (*(int *)(iVar2 + 0xc) != 0)) {
    iStack_24 = 0x7a5689;
    FUN_00598d62();
  }
  iStack_24 = 0x7a5691;
  uVar1 = FUN_0043f6fe();
  if (0x7fffffff < uVar1) {
    iStack_24 = 0x7a56a1;
    iVar2 = FUN_007b3bb4();
    if (iVar2 == 0) {
      iStack_24 = 0x7a56b0;
      iVar2 = FUN_007a3f46();
      if ((iVar2 == 0) &&
         (*(int *)((-(uint)(*(int *)(extraout_ECX + 0xd74) != 0) &
                   *(int *)(extraout_ECX + 0xd74) - 0xcU) + 0x110) != 0)) {
        piVar7 = (int *)(extraout_ECX + 4);
        iStack_24 = 0x14;
        iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
        uVar6 = *(undefined4 *)(iVar2 + 4);
        puVar3 = (undefined4 *)(**(code **)(*piVar7 + 0x10))(uVar6);
        iVar2 = FUN_00621716(*puVar3,uVar6);
        if (iVar2 != 0) {
          if (*(int *)(iVar2 + 0x14) != 999999999) {
            iStack_24 = 0x7a5717;
            FUN_00429303();
            iStack_24 = 0x7a5724;
            iVar4 = FUN_004f162d();
            if (((iVar4 == *(int *)(iVar2 + 0x14)) && (*(int *)(iVar2 + 8) != 4)) &&
               (*(int *)(iVar2 + 8) != 5)) {
              iStack_24 = 0;
              iVar2 = FUN_007acde7(0,0,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 0x18));
              if (iVar2 == 0) goto LAB_007a5905;
              iStack_24 = 0x865;
              puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10);
              uVar6 = *puVar3;
              iStack_24 = 100;
              *(undefined4 *)(unaff_EBP + -4) = 0;
              FUN_007d4073(uVar6);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            }
            else {
              iStack_24 = 0;
              iVar4 = FUN_004ea30d(0xffffffff,*(undefined4 *)(iVar2 + 4),0,0);
              if (((iVar4 == 0) || (*(int *)(iVar2 + 8) == 4)) || (*(int *)(iVar2 + 8) == 5))
              goto LAB_007a5905;
              iStack_24 = 0x865;
              puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10);
              uVar6 = *puVar3;
              iStack_24 = 100;
              *(undefined4 *)(unaff_EBP + -4) = 1;
              FUN_007d4073(uVar6);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            }
            iStack_24 = 0x7a577f;
            FUN_00402676();
            goto LAB_007a5905;
          }
          iVar4 = *(int *)(iVar2 + 8);
          if (((iVar4 == 7) || (iVar4 == 8)) || (iVar4 == 0xb)) {
            iStack_24 = 0;
            iVar4 = FUN_004becbc(500);
            if (iVar4 != 0) {
              iStack_24 = 0;
              FUN_0060142b(0x5c,0);
              *(undefined4 *)(unaff_EBP + -4) = 2;
              iStack_24 = 0x7a5827;
              iVar4 = FUN_00429303();
              *(undefined1 *)(unaff_EBP + -0x10) = *(undefined1 *)(iVar4 + 0xf8);
              iStack_24 = *(int *)(unaff_EBP + -0x10);
              FUN_00457cda();
              *(int **)(unaff_EBP + -0x10) = &iStack_24;
              iStack_24 = 0;
              FUN_00414f8b(iVar2 + 4);
              FUN_00459cb5();
              iStack_24 = 0x7a585b;
              puVar5 = (undefined2 *)(**(code **)(*piVar7 + 0x10))();
              iStack_24 = CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5);
              FUN_0045d247();
              iStack_24 = 0x7a586e;
              iVar2 = (**(code **)(*piVar7 + 0x10))();
              iStack_24 = CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(iVar2 + 4));
              FUN_0045d247();
              iStack_24 = unaff_EBP + -0x20;
              FUN_004751b2();
              iVar2 = DAT_00978368;
              *(undefined4 *)(DAT_00978368 + 0x208c) = 1;
              iStack_24 = 0x7a589f;
              uVar6 = FUN_007d1e08();
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              *(undefined4 *)(iVar2 + 0x2090) = uVar6;
              iStack_24 = 0x7a58b1;
              FUN_0045ebca();
            }
            goto LAB_007a5905;
          }
        }
        iStack_24 = 0;
        iVar2 = FUN_004becbc(500);
        if (iVar2 != 0) {
          iStack_24 = 0x7a58cd;
          iVar2 = FUN_00429303();
          if (*(int *)(iVar2 + 0x11c) == 0) {
            iStack_24 = 0x7a58f9;
            puVar3 = (undefined4 *)(**(code **)(*piVar7 + 0x10))();
            iStack_24 = puVar3[1];
            FUN_00689055(*puVar3);
          }
          else {
            iStack_24 = 0x7a58de;
            puVar3 = (undefined4 *)(**(code **)(*piVar7 + 0x10))();
            iStack_24 = puVar3[1];
            FUN_004f0b73(*puVar3);
          }
        }
      }
    }
  }
LAB_007a5905:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


